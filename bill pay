#include <stdio.h>

int main()
{
    float n;
    char item;
    float dp = 0.0;
    float da;
    float net;
   
    printf("enetr the amout :");
    scanf("%f", &n);
    
    printf("enetr the item_type M and H  :");
    scanf(" %c", &item);

    switch (item)
    {
    case 'm':
        if (n <= 100)
        {
            dp = 0.0;
        }
        else if ( n <= 200)
        {
            dp = 5.0;
        }
        else if (n <= 300)
        {
            dp = 7.5;
        }
        else if (n <= 300)
        {
            dp = 10.0;
        }
        break;

    case 'h':
        if (n <= 100)
        {
            dp = 5.0;
        }
        else if (n <= 200)
        {
            dp = 7.5;
        }
        else if (n <= 300)
        {
            dp = 10.5;
        }
        else if (n <= 300)
        {
            dp = 15.0;
        }
        break;

        // default:
        // printf("enter the correct char");
        // break;
    }

    da = (dp / 100) * n;
    net = n - da;
    printf("net amount :%f", net);
    return 0;
}
