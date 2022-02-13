#include <stdio.h>
int main()
{
    float n;
    scanf("%d", &n);
    printf("%f\n", n);
    printf("NOTAS:\n");
    printf("%f\n nota(s) de R$ 100.00", n/100);
    n= n%100;
    printf("%f\n nota(s) de R$ 50.00", n/50);
    n=n%50;
    printf("%f\n nota(s) de R$ 20.00", n/20);
    n = n%20;
    printf("%f\n nota(s) de R$ 10.00", n/10);
    n =n% 10;
    printf("%f\n nota(s) de R$ 5.00", n/5);
    n =n% 5;
    printf("%f\n nota(s) de R$ 2.00", n/2);
    printf("MOEDAS:\n");
    n =n% 2;
    printf("%f\n moeda(s) de R$ 1.00", n/1);
    n =n% 1;
    printf("%f\n moeda(s) de R$ 0.50", n/0.50);
    n =n% 0.50;
    printf("%f\n moeda(s) de R$ 0.25", n/0.25);
    n=n% 0.25;
    printf("%f\n moeda(s) de R$ 0.10\n", n/0.10);
    n=n% 0.10;
    printf("%f\n moeda(s) de R$ 0.05\n", n/0.05);
    n=n% 0.05;
    printf("%f\n moeda(s) de R$ 0.01\n", n/0.01);
    n=n% 0.01;
    return 0;
}
