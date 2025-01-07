include<stdio.h>
int count(char s[]){
	int count=0;
	int i=0;
	while(s[i]!=0){
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
		   count++;
		   }
		   i++;
	}
	return count;
	}
	int main(){
		char s[1000];
		gets(s);
		printf("Egshigiin too: %d", count(s));
		return 0;
		}
	

