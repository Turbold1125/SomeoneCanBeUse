#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char word[20] ;
    char maxw[20];
    gets(a);
    int vowel=0;
    int j=0, i=0;
    int count=0;
    for(i=0;i<strlen(a);i++){
        if(a[i]==' '){
            if(count>vowel){
            vowel=count;
            strcpy(maxw,word);
        }
            count=0;
            j=0;
    }
        else{
            word[j]=a[i];
            j++;
            if(a[i]=='a' ||  a[i]=='e' ||  a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y'){
			count++;
		}
    }
}
    printf("%s", maxw);
    return 0;
}
