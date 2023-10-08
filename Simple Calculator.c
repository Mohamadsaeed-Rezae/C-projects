#include <stdio.h>

int main ()
{
    int a , b , c , d ,e ,f;
    printf("please  enter an  integer :\n");
    scanf("%d",&a);

    printf("please  enter an  integer :\n");
    scanf("%d",&b);

    c= a+b ;
    printf("%d +%d =%d\n",a,b,c);

    d=a*b ;
    printf("%d *%d =%d\n",a,b,d);
    e=a-b ;
    printf("%d -%d =%d\n",a,b,e);

    f= a/ b ;
    printf("%d / %d =  %d\n",a , b , f);

    printf("%d mod %d = %d\n", a ,b , a%b);
    printf("%d mod %d = %d\n", b ,a , b%a);

    return 0;

}
