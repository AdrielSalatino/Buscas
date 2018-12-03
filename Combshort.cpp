#include<stdio.h>
#include<stdlib.h>
#include<math.h>




int main(){
	
	
	
	int vetor[10] = {9,8,7,6,5,4,3,2,1,0};
	int i=0, j=0;
	int tempatual=0;
	int tempprox=0;	
	int quant=0;
	int tamanho;
	int gap = 0;
	
	for(i=0;i<=9;i++){
		printf("%d, ", vetor[i]);
	}
	
			
		gap = (int)(((double)10 / 1.2)+0.5d);
		
			
			for(i=0;i<=10;i++){
				
				
				for(j=0;j<=gap;j++){
				printf("\nGAP = %d ", gap);
					if(vetor[j]>vetor[gap+1]){
						
						tempatual = vetor[gap+1];
						tempprox = vetor[j];
						vetor[j] = tempatual;
						vetor[gap+1] = tempprox;
						quant++;
					}
					
										
				
			}
			
			
			
			
			gap = (int)(((double)gap / 1.2)+0.5d);	
			
}
printf("\n");

	for(i=0;i<=9;i++){
		printf("v[%d] = %d\n",i, vetor[i]);
		
	}
		printf("\n%d quantidades de movimentos \n", quant);

}
