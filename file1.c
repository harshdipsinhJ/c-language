#include<stdio.h>
int main(){
 FILE *ptr;
 ptr=fopen("dhruv.txt","r");
 if (ptr==NULL)
 {
    printf("the file is not exist");
 }else{
   fclose(ptr);
 }
 
 return 0;  
}
