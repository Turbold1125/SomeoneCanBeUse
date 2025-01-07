#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char str2[10][10]; 

	gets(str);
	printf("\n");
	int j=0, count=0, i;
	for(i=0; i<=strlen(str); i++){
		if(str[i]==' '|| str[i]=='\0'){
			str2[count][j]='\0';
			count++;
			j=0;
		}
		else{
			str2[count][j]=str[i];
			j++;
		}
	}
	for(i=0; i<count; i++)
		printf("%s\n",str2[i]);
	return 0;
}
  
