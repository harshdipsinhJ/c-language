#include<stdio.h>

void indian();
void french();

int main(){
    char c;
    printf("enter f for french and n for indian :");
    scanf("%C",&c);
if (c=='f')
{
    french();
}
else
{
    indian();
}

    return 0;
}


void indian(){
    printf("Namste\n");
}

void french(){
     printf("bonjour\n");
}
