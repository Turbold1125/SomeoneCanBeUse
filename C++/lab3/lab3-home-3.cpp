#include<stdio.h>
int main(){
	int onoo,niit;
	float avsan,k;
	printf("Avsan onoogoo oruulna uu:");			
	scanf("%f",&avsan);							//avsan onoog garaas oruulah
	niit=100;									//100%
	onoo=35;									//avah bolomjit onoo
	k=avsan*niit/onoo;							//100% koefficient shiljuuleh
	printf("koefficient:%.2f huvi\n",k);				//shiljuulsen koefficient ee hevlej haruulah
	if (k>60){									
		if (k>70){
			if (k>80){
				if (k>90){
					if (k<=100){
					printf("Unelgee:A\n");		//90-100 hoorond avsan
					}else{
						printf("ALDAA!!!\n");	//100+ koefficienttei uyd aldaa zaana
					}
				}else{
					printf("Unelgee:B\n");		//80-89 hoorond avsan
				}
			}else{
				printf("Unelgee:C\n");			//70-79 hoorond avsan
			}
		}else{
			printf("Unelgee:D\n");				// 60-69 hoorond avsan
		}
	}else{
		printf("Unelgee:F\n");					//0-59 hoorond avsan
	}
	
}
