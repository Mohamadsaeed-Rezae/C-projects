#include <stdio.h>
#define true -1
#define false 0
int main()
{
    int n=10 ;
    int a , s, i ;

    s=0;
    i=0;
    while(i<n)  ///(i<n) use condition
    {
        printf(" enter a number :");
        scanf("%d", &a);
        s+=a ;
        i++ ;
        if (a==-1) break;
        if (a==n) break;

    }
    printf("\n sum of numbers :%d\n ",s);


    float m= (float)s/i ;  //casting
    {
    printf("mean  of numbers :%.2f\n ",m);
    }


    return 0;
}
