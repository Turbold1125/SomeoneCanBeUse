#include<stdio.h>
int main(){
	int on,sar,udur,unuudurOn,unuudurSar,unuudurUdur;
	printf("on=");
	scanf("%d",&on);					//on oruulah
	printf("sar=");
	scanf("%d",&sar);					//sar oruulah
	printf("udur=");
	scanf("%d",&udur);					//udur oruulah
printf("unuudurOn=");
scanf("%d",&unuudurOn);					//unuudriin on oruulah
printf("unuudurSar=");
scanf("%d",&unuudurSar);				//unuudriin sar oruulah
printf("unuudurUdur=");
scanf("%d",&unuudurUdur);				//unuudriin udur oruulah
	if(on==unuudurOn){
		if(sar==unuudurSar){			
			if(udur==unuudurUdur){
				printf("unuudur");		//unuudur esehee shalgah
			} else {
				if (udur>unuudurUdur){	//hudal bol unuudruus ihiig n shalgah unen bol ireedui gesen ug
					printf("ireedui");
				} else {
					printf("ungursun");	//esergeeree
				}
			}
		} else {
			if (sar>unuudurSar) {
				printf("ireedui");
			} else {
				printf("ungursun");
			}
		}
	} else {
		if (on>unuudurOn) {
			printf("ireedui");
		} else {
			printf("ungursun");
		}
	}
}
