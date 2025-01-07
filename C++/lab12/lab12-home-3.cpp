#include<stdio.h>
#include<math.h>
 
typedef struct {
  int dim;
  float dat[100];
} Vector;
 
int main(){
  Vector a, b;
  a.dim = 2;
  b.dim = 2;
  a.dat[0]=4;
  a.dat[1]=1;
  b.dat[0]=1;
  b.dat[1]=5;
  dot_product(a,b);
  len(a);
  len(b);
  return 0;
}
 
int dot_product(Vector a, Vector b){
  if(a.dim == b.dim){
    float sum = 0;
    for(int i=0; i < a.dim; i++){
      sum += a.dat[i]*b.dat[i];
    }
    printf("a*b = %0.2f\n",sum);
  }
  return 0;
}
 
Vector scalar_mult(Vector a, float t){
  for(int i=0; i < a.dim; i++){
    a.dat[i]*=t;
  }
}
 
Vector scalar_mult_int(Vector a, int t){
  for(int i=0; i < a.dim; i++){
    a.dat[i]*=t;
  }
}
 
int len(Vector a){
  float sum=0;
  for(int i=0; i < a.dim; i++){
    sum+=pow(a.dat[i],2);
  }
  sum=pow(sum,0.5);
  printf("len : %0.2f\n",sum);
  return sum;
}
