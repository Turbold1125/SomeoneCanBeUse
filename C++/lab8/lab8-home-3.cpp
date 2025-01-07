#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
	char word[1020]; 
	char string[100];
    gets(s);
    scanf("%s",&word);
    int count=0;
    int x = 0;
	int y, i;
    int check=1;
    for(i=0; i<=strlen(s); i++){
        if(((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && check == 1 ){
            x=i;
            check=!check;
            count++;
        }
        if(((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && check == 0 ){
            y=i;
        }
        else{
            if(y-x+1==strlen(word))
            {
                int l = 0;
                int zov = 1;
                int j;
                for(j = x; j <= y; j++, l++)
                {
                    if(s[j] != word[l]) {
                        zov = !zov;
                        break;
                    }
                }
                if(zov == 1) {
                    printf("%d",count);
                    return 0;
                }
            }
            check = 1;
        }
    }
    printf("-1");
}
