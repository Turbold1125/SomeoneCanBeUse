#include <stdio.h>
#include <string.h>
 
int main(){
  	char str[100];
  	int count, i;
  	count = 1;
  	printf("Uguulber oruulna uu!\n\n");
  	gets(str);
	printf("\n");	
  	for(i = 0; str[i]!=0; i++){
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t'){
			count++;
		} 
	}	
	printf("Ugugdsun uguulbert orson ugiin too: %d\n", count);
  	return 0;
}
