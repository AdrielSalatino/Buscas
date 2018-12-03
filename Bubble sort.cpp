#include<stdio.h>
#include<stdlib.h>




int main(){
	
	
	
	int vetor[10] = {989,812,758,-6,5,4,3,-2248,1,0};
	int i=0, j=0;
	int tempatual=0;
	int tempprox=0;	
	int quant=0;
	
	for(i=0;i<=9;i++){
		printf("%d, ", vetor[i]);
	}
	
			printf("\n");
			for(i=0;i<=9;i++){
				for(j=0;j<=8;j++){
				
					if(vetor[j]>vetor[j+1]){
						tempatual = vetor[j];
						tempprox = vetor[j+1];
						vetor[j+1] = tempatual;
						vetor[j] = tempprox;
						
	
						
						
					}				
				quant++;
			}
			
				
}
printf("\n");

	for(i=0;i<=9;i++){
		printf("v[%d] = %d\n",i, vetor[i]);
		
	}
		printf("\n%d quantidades de movimentos \n", quant);

}
