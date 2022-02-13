#include<stdio.h>
int main ()
{
    int a,n,m,o,p,q;
    scanf("%d",&a);

        n=a/365;
        m=a%365;
        o=m/30;
        p=m%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",n,o,p);

    return 0;

}
