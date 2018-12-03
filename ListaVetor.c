#include <stdio.h>
#include <stdlib.h>


void insere(int  *elem, int lista[], int *cont)
{
    int troca, aux = 0;
	if(*cont==0) // se lista est� vazia
	{
	    lista[*cont] = *elem;
    }
	else {
            if(*elem>lista[*cont-1]) // ou se o elemento a ser inserido � maior do que o �ltimo
               {
                   lista[*cont] = *elem;
                }
               else {   // poder�amos inicializar aux, mas j� o fizemos na declara��o dessa vari�vel local;
                    while(*elem>lista[aux])
                    {
                       aux +=1; // ao final, estaremos na posi��o onde deve ser inserido
                    }  // o elemento: agora, � empurrar todos os elementos uma posi��o � direta
                    while(aux<*cont-1)
                        {
                        troca = lista[aux];
                        lista[aux]= *elem;
                        *elem = troca;
                        aux +=1;
                        }
                    lista[*cont] = *elem; // insere o �ltimo da lista anterior na nova posi��o
               }
	}
    *cont +=1; // incrementa o contador;
}

void buscar(int *cont, int lista[], int *procurado, int *posi) // verificar
{
     int i = 0;
     while(i< *cont - 1)
        {
            if(*procurado>lista[i])
            {
                *posi = -1;
                i=*cont;
            }
            if(*procurado=lista[i])
            {
                *posi = i;
            }
            else
                i +=1;
        }
}

void retira(int  *elem, int lista[], int *cont) // corrigir
{
    int pos = 0,aux = 0;
    buscar(cont, &lista, elem, pos);
    if(pos==1)  {
            *elem = lista[aux];
            while(aux<*cont)
            {
                lista[aux]=lista[aux+1];
                aux +=1;
            }
        }
    else printf("n�o � poss�vel retirar: esse elemento n�o existe \n");
     *cont -=1;
}

void listar(int *cont, int lista[])
{
    int i = 0;
    printf("\n");
    while(i< *cont )
        {
            printf("\t  %d  ", lista[i]);
            i +=1;
        }
    printf("\n");
}



int main(int argc, char** argv) {

	 int op, elem, cont,cont2, i, achei, pos;
     int lista[10];
     int lista_cheia = 0, lista_vazia = 1;

     cont = 0;                         /* condi��o inicial para lista vazia */

     do {
          system("pause");
		  system("cls");
          printf("\nMenu\n");
          printf("1. Inserir elemento\n");
          printf("2. Retirar elemento\n");
          printf("3. Listar\n");
          printf("4. procurar\n");
          printf("5. Sair\n");
          printf("Digite sua op��o: ");
          scanf("%d", &op);
          switch(op) /* Op��es */
                    {
                    case 1:
	                    printf("Digite o elemento a ser inserido: \n");
	                    scanf("%d", &elem);
	                    if(cont == 10)
	                    {
	                        printf("A lista est� CHEIA! N�o � poss�vel inserir \n ");
	                    }
	                    else
							insere(&elem, lista, &cont);
	                    if(cont == 10) lista_cheia = 1;
	                    printf("\nCONT = %d\n", cont);
                    break; // Final da Inser��o

                    case 2: // retira correto, mas n�o informa o valor retirado
	                    if(cont == 0)
	                         printf("A lista est� vazia: n�o podemos retirar elementos\n\n " );
	                    else {
                            printf("Digite o elemento a ser retirado: \n");
                            scanf("%d", &elem);
							retira(&elem, lista, &cont);
							printf("retirado o elemento %d \n", &elem);
							if (cont == 0) {
								printf("lista VAZIA\n\n");
							}
						} // ver retirada de valor n�o existente
                    break; //Final da retirada

                    case 3:
                    if(cont==0)
                         printf("lista VAZIA\n\n");
                    else
                        listar(&cont, lista);
                    break;

                    case 4:
                    if(cont==0)
                         printf("lista VAZIA\n\n");
                    else
                    {   // achei = 0;
                        pos = -1;
                        buscar(&cont, lista, &elem, &pos);
                        if (pos==-1)
                            printf("Elemento n�o se encontra na lista!!");
                        else{
                            printf("Elemento se encontra na posi��o  %d \n", pos);
                        }
                    }
                    break;


                    default:
                    if (op != 5) printf("Op��o invalida\n\n");
                    }

    	} while (op != 5);

     return 0;
}
