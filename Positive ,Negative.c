#include <stdio.h>

int main()
{
   int a ;

   printf("please enter an integer:\n");
   scanf("%d",&a);

   if (a % 2 ==0)
   {

   printf("%d is even\n",a);
   }
    if ( a % 2==1)
    {
        printf("%d is odd\n",a);
    }
    if (a>0)
    {
        printf("%d is positive\n",a);
    }
    else if (a<0)
    {
        printf("%d is negative\n",a);
    }
    else {
        printf("%d is zero",a);
    }
    return 0;
}
