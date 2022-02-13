#include <stdio.h>



int main()
{



    int a,b[2],i;

    float d[2],total;

    for(i=0; i<2; i++)

    {

        scanf("%d %d %f",&a,&b[i],&d[i]);

    }

    total=((b[0]*d[0])+(b[1]*d[1]));

    printf("VALOR A PAGAR: R$ %.2f\n",total);



    return 0;

}
