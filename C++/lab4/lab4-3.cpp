#include<stdio.h>
#include<math.h>
int main(){
    float x1,x2,x3,y1,y2,y3;
    float zai1, zai2, zai3;
    float x0 = 0.0;
    float y0 = 0.0;
    printf("x1,y1 oruulna uu=\n");
    scanf("%f %f", &x1, &y1);
    printf("x2,y2 oruulna uu=\n");
    scanf("%f %f", &x2, &y2);
    printf("x3,y3 oruulna uu=\n");
    scanf("%f %f", &x3, &y3);
    zai1 = sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0));
    zai2 = sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0));
    zai3 = sqrt((x3-x0)*(x3-x0)+(y3-y0)*(y3-y0));
    // Hamgiin hol
    if((zai1 > zai2)&&(zai1 > zai3)){
        printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x1, y1);
    }
    else if(zai2 > zai3){
        printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x2,y2);
    }
    else{
         printf("Hamgiin hol orshih tseg: x=%0.0f y=%0.0f\n", x3,y3);
    }
   // Hamgiin oir
    if((zai1 < zai2)&&(zai1 < zai3)){
        printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n",x1,y1);
    }
    else if(zai2 < zai3){
        printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n", x2, y2);
    }
    else{
        printf("Hamgiin oir orshih tseg: x=%0.0f y=%0.0f\n",x3,y3);
    }
}
    
