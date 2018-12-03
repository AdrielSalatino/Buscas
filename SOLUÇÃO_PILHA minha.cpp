#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
      int inf;
      struct nodo * prox;
}tipoNodo;


tipoNodo * inserePilha(tipoNodo * ini,int elem)
{
    tipoNodo *n;
    tipoNodo *p;
    tipoNodo *a;
    n = (tipoNodo *) malloc(sizeof(tipoNodo));
    n->inf = elem;
    
    if(ini == NULL){
    	n->prox = NULL;
    	ini = n;
    	
	}
	else 
		if(elem < ini->inf){
			
			n->prox = ini;
			ini = n;
		}
		else{
			p = ini;
			
			do{
				
				a = p;
				p = p->prox;
				
			}while((p!=NULL) &&(p->inf<elem));
				n->prox = p;
				a->prox = n;
			 	
				
			}
			
			
			
		return ini;	
			
			
		}
    



tipoNodo * removePilha(tipoNodo * topo)
{
        tipoNodo *n;
        int elemento;

    if (topo != NULL){

        n = topo;
        elemento = topo->inf;
        topo     = topo->prox;
        free(n); // libera memoria ocupada pelo "novo";
        printf("Elemento retirado: %d \n", elemento);

    }else{
       printf("Pilha já está vazia \n");
    }
    return topo;

}

void imprimePilha(tipoNodo * topo)
{
    tipoNodo * aux;

    aux = topo;
    printf("Valor \t end. \t\t end. ant \n");
    while(aux != NULL)
    {
        printf("%d \t %d \t %d\n",aux->inf, aux, aux->prox);
        aux = aux->prox;
    }
    system("pause");
}



int main(void)
{

int op;
int elemento=0;
tipoNodo * ini;
ini = NULL;

    do { system("cls");
         printf("\nMenu\n");
         printf("1. Inserir Elemento\n");
         printf("2. Retirar Elemento\n");
         printf("3. Listar\n");
         printf("4. Sair\n");
         printf("Digite sua Opcao: ");

         scanf("%d",&op); /* gets(op); */
         /* Opções */
         switch(op)
                   {
                   case 1: /* insere elemento */

                       printf("Digite o valor a ser inserido:");
                       scanf("%d",&elemento);
                       ini = inserePilha(ini,elemento);

                   break;

                   case 2: /* retira elemento */

                        ini = removePilha(ini);
                        imprimePilha(ini);

                   break;

                   case 3: /* imprime pilha */

                        imprimePilha(ini);

                   break;

                   default:
                   if (op != 4)
                   printf("Opção invalida\n");
                                 }
        } while (op != 4);
        printf("Foi um privilégio ter estado com vocês!\n ");
        system("pause");

    return 0;
}
