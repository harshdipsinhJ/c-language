#include<stdio.h>
//calculate the sum,product and average of 2 num in pointers

void work(int a,int b,int *sum,int *product,int *average);

int main(){
    int a=3,b=5;
    int sum,product,average;
    work(a,b,&sum,&product,&average);
    printf("sum is =%d,product is =%d,avg ia =%d",sum,product,average);
    return 0;
    

}
void work(int a,int b,int *sum,int *product,int *average){
    *sum=a+b;
    *product=a*b;
    *average=(a+b)/2;
}
