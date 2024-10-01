// basic of structure
#include <stdio.h>
#include <string.h>

struct book_bank
{
    char  title[20];
    char  author[15];
    int   pages;
    float price;
};
        

int main(){
    struct book_bank book1,book2,book3;
    printf("enter the input :\n");
    scanf("%s %s %d %f",
    book1.title,
    book1.author,
    &book1.pages,
    &book1.price);

    strcpy(book1.author,"name is not currect");// here you can change the value useing strcpy code

    printf("the title=%s \n",book1.title);
    printf("the author=%s \n",book1.author);
    printf("the pages=%d \n",book1.pages);
    printf("the price=%f \n",book1.price);
    return 0;

    
}
