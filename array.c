#include <stdio.h>
#include <conio.h>
int main()
{
    int arr1[3][3], arr2[3][3],sum=0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the arr 1 elements =");
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("enter the arr 2 elements =");
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum=arr1[i][j]+arr2[i][j];
           // printf("the sum is [%d] element and [%d] is =%d\n",i,j,sum);
            printf("%d ",sum);
        }
        printf("\n");
    }

    return 0;
}
