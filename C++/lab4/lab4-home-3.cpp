#include<stdio.h>
int main(){
	int undur,jin,huis,erJin=52,emJin=49,undur1=0,iluu=0,dutuu=0,i=0;
	printf("Undur=");
	scanf("%d",&undur);
	printf("Jin=");
	scanf("%d",&jin);
	printf("Eregtei bol 0-g darna uu!!!!!!!!!\nEmegtei bol 1-g darna uu!!!!!!!!!\n");
	scanf("%d",&huis);
	if (huis==0){
		undur1=undur-150;																//davtalt
		i=undur1/2.5;																	//davtalt heden udaa hiih be
		while (i>0){
			erJin=erJin+1.9;
			i=i-1;
		}
		iluu=jin-erJin;
		dutuu=erJin-jin;
		if(erJin>jin){
			printf("Dutuu jin %d kg",dutuu);
		} else {
			printf("Iluu jin %d kg",iluu);
		}
	} else {
			undur1=undur-150;
		i=undur1/2.5;
		while (i>0){
			emJin=emJin+1.7;
			i=i-1;
		}
		iluu=jin-emJin;
		dutuu=emJin-jin;
		if(emJin>jin){
			printf("Dutuu jin %d kg",dutuu);
		} else {
			printf("Iluu jin %d kg",iluu);
		}
	}
}
