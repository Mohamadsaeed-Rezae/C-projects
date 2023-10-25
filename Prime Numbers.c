#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int IsPrime(int a);

int main()
{
    int a;

    do
    {
        printf("Enter an integer: ");
        scanf("%d", &a);
        if(IsPrime(a))
        {
           printf("%d is a PRIME number.\n",a);
        }
        else
        {
           printf("%d is a NOT PRIME number.\n",a);
        }
        printf("\n");
    } while (a>0);

    return 0;
}

int IsPrime(int a) //IsPrime Function is defined here
{
    int prime = TRUE;
    int i;
    for(i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            prime = FALSE;
            break;
        }
    }

    return prime;
}
