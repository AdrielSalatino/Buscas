#include<stdio.h>
#include<stdlib.h>




int main(){
	
	
	int i, j, temp, z, cont, tamanho=0, opcao, valor, controlador=1;
	int v[tamanho];
	
	do{
	
	printf("1 - Ler valor: \n");
	printf("2- Ordenar e imprimir\n");
	scanf("%d", &opcao);
	
	if(opcao==1){
		
		printf("Valor: ");
		scanf("%d", &valor);
		system("cls");
		v[tamanho] = valor;
		tamanho++;
		
	}
	
		else{
				
	for(i=0;i<=tamanho-1;i++){
		printf("%d ", v[i]);
		
	}
	printf("\n");
	for(i=0;i<=tamanho-1;i++){
		for(j=0;j<=tamanho-1;j++){
			if(v[i]<v[j]){
				temp = v[i];
				v[i] = v[j]; 
				v[j] = temp;
			cont++;
				
			}
			
			
			
			
		}
		for(z=0;z<=tamanho-1;z++){
		printf("%d ", v[z]);	
		}
		
		
		printf("\n");
		
	}
	
	printf("\n");
	
	for(i=0;i<=tamanho-1;i++){
		
		
		printf("%d ", v[i]);
	}
	
	printf("\n\ntotal %d comparacoes\n\n", cont);
	
	
	
	
controlador=1;	
}
}while(controlador==1);
}







