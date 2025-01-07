#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int i, count=0;
	gets(str);
	for(i=0; str[i]!=0; i++){
		if(str[i]=='m' || str[i]=='n' || str[i]=='g' || str[i]=='l' || str[i]=='b'|| str[i]=='v'|| str[i]=='r'|| str[i]=='ts'|| str[i]=='j'
		|| str[i]=='z'|| str[i]=='s'|| str[i]=='d'|| str[i]=='t'|| str[i]=='sh'|| str[i]=='ch'|| str[i]=='h'){
			count++;
		}
	}
	printf("Ugugdsun tsuvaand orson giiguulegc too: %d", count);
}
