#include<stdio.h>
int main(){
    int songolt;
    printf("Shultei hool bol 1-g, ugui bol 0-g darna uu!!\n");
    scanf("%d", &songolt) ;
    if(songolt == 1){
        printf("tsaitai bol 1-g, shultei bol 0-g darna uu!!\n");
        scanf("%d", &songolt);
        if(songolt == 0){
            printf("Yutai shul idmeer baina?\n");
            printf("Guriltai bol 1-g darna uu!!\n");
            printf("Puntuuztei bol 2-g darna uu!!\n");
            printf("Goimontoi bol 3-g darna uu!!\n");
            printf("Banshtai bol 4-g darna uu!!\n");
            printf("Mahtai bol 5-g darna uu!!\n");
            printf("Nogootoi bol 6-g darna uu!!\n");
             scanf("%d", &songolt);
            if(songolt == 1){
                printf("Lapsha");
            }
            if(songolt == 2){
                printf("Huitsai");
            }
            if(songolt == 3){
                printf("Goimontoi shul");
            }
            if(songolt == 4){
                printf("Banshtai shul");
            }
            if(songolt == 5 ){
                printf("Har shul");
            }
            if(songolt == 6 ){
                printf("Nogootoi shul");
            }
        }
        else {
            printf("Budaatai bol 1-g, ugui bol 0-g darna uu!!\n");
            scanf("%d", &songolt);
            if(songolt == 1){
                printf("Budaatai tsai");
            }
            else{
                printf("Banshtai tsai");
            }
        }
    }
    else {
        printf("Mah ni tatsan uu?\n");
        printf("tiim bol 1-g, ugui bol 0-g darna uu!!\n");
        scanf("%d", &songolt) ;
        if(songolt == 1){
            printf("Guriland orooson uu?\n");
            printf("tiim bol 1-g, ugui bol 0-g darna uu!!\n");
             scanf("%d", &songolt) ;
            if(songolt == 1){
                printf("Yaj bolgoson?\n");
                printf("Sharsan bol 1-g darna uu!!\n");
                printf("Jignesen bol 0-g darna uu!!\n");
                scanf("%d", &songolt) ;
                if(songolt == 1){
                    printf("Yaj sharsan?\n");
                    printf("Huulgun sharsan bol 1-g darna uu!!\n");
                    printf("Shuud sharsan bol 0-g darna uu!!\n");
                    scanf("%d", &songolt) ;
                    if(songolt == 1){
                        printf("Piroshki");
                    }
                    else {
                    	printf("Huushuur");
					} 	
                }
                if(songolt == 0){
                    printf("Yaj jignesen?\n");
                    printf("Huulgun jignesen bol 1-g darna uu!!\n");
                    printf("Shuud jignesen bol 0-g darna uu!!\n");
                    scanf("%d", &songolt);
                    if(songolt == 1){
                        printf("Mantuun buuz");
                    }
                    if(songolt == 0){
                        printf("Buuz");
                    }
                }
            }
            else {
                printf("Budaatai yu?\n");
                printf("Undgund orooson bol 1-g darna uu!!\n");
                printf("Mahaa buurunhiilsun bol 0-g darna uu!!\n");
                scanf("%d", &songolt);
                if(songolt == 1){
                    printf("Undugtei beefsteak");
                }
                if(songolt == 0){
                    printf("Teftel");
                }
            }
        }
        else {
            printf("Yutai holison?\n");
            printf("Guriltai bol 1-g darna uu!!\n");
            printf("Undugtei bol 2-g darna uu!!\n");
            printf("Budaatai bol 3-g darna uu!!\n");
            printf("Nogootoi bol 4-g darna uu!!\n");
            scanf("%d", &songolt);
            if(songolt == 1){
                printf("Tsuivan");
            }
            if(songolt == 2){
                printf("Undugtei huurga");
            }
            if(songolt == 3){
                printf("Hoorond ni holih uu?");
                printf("Tiim bol 1-g darna uu!!\n");
                printf("Ugui bol 0-g darna uu!!\n");
                  scanf("%d", &songolt);
                 if(songolt == 1){
                     printf("Guliash");
                 }
                 else {
                     printf("Budaatai huurga");
                 }
            }
            if(songolt == 4){
                printf("Nogootoi huurga");
            }
        }
    }
    return 0;
}
