#include<stdio.h>
int main(){
    int n,m, p, j, i ;
    int n1, m1 ; 
    int sum = 0 ;
    int ehnii[101][101] ;
    int hoyr[101][101] ;
    int hariu[101][101] ;
    printf("n ba m toog oruul\n");
    scanf("%d %d", &n, &m);
    printf("husnegt\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", &ehnii[i][j]) ;
        }
    }
    printf("n1 ba m1 toog oruul\n");
    scanf("%d %d", &n1, &m1) ;
    if(m != n1){
        printf("aldaa") ;
    }
    else {
    	printf("husnegt\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++){
            scanf("%d", &hoyr[i][j]) ;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(p=0;p<n1;p++){
                sum += ehnii[i][p]*hoyr[p][j] ;
            }
            hariu[i][j] = sum ;
            sum = 0 ;
        }
    }
    printf("hariu\n");
    for(i=0;i<n;i++){
        for(j=0;j<m1;j++){
            printf("%d ", hariu[i][j]) ;
        }
        printf("\n") ;
    }
    }
    return 0;
}
