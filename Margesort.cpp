#include<stdio.h>
#include<stdlib.h>



int main(){
	
	
	
int v1[5] = {10,27,14,40,500};
int v2[5] = {-28,-15,30,45,600};
int v3[10];
int i = 0, j = 0, k = 0, cont = 0;
int controlador1 = 5;
int controlador2 = 5;

int aux;

for(i=0;i<=4;i++){
	
	printf("v1[%d] = %d\n", i, v1[i]);
}
printf("\n");

for(i=0;i<=4;i++){
	
	printf("v2[%d] = %d\n", i, v2[i]);
}

i = 0;
j = 0;
k = 0;

while(cont<=5){
	
		if(v1[i]<v2[j]){
			aux = v1[i];
			v3[k] = aux;
			i++;
			k++;
			controlador1--;
		}
		
			 if(v2[j]<v1[i]){
				aux = v2[j];
				v3[k] = aux;	
				j++;	
				k++;
				controlador2--;
				}
				
					
			
			cont++;
	
}

printf("%d\n", controlador1);
printf("%d\n", controlador2);

			if(controlador1>controlador2){
				int p, t;
				int pos = 10-controlador1;
				
				int valor = 5-controlador1;	
					for(p=pos, t=valor;p<=9;p++,t++){
						
						v3[p] = v1[t];
						
						
					}

			}
			
			if(controlador2>controlador1){
				int p, t;
				int pos = 10-controlador2;
				int valor = 5-controlador2;
					for(p=pos, t=valor;p<=9;p++,t++){		
						v3[p] = v2[t];
					}

			}
			if(controlador1==controlador1){
				
				if(v1[i]<v2[j]){
					v3[8] = v1[i];
					v3[9] = v2[j];
				}
				else{
					v3[9] = v1[i];
					v3[8] = v2[j];
					
					
				}
					
				

			}
			

printf("\n");


for(i=0;i<=9;i++){
	
	printf("v3[%d] = %d\n", i, v3[i]);
}


}
