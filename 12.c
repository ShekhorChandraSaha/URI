#include<stdio.h>

int main()
{
    double a,b,c,pi=3.14159;

    scanf("%lf%lf%lf",&a,&b,&c);
    printf("TRIANGULO: %.3lf\n",((1/2.0)*a*c));         //Triangle,Area = ½ × a × c,a = base,c = vertical height
    printf("CIRCULO: %.3lf\n",(c*c*pi));                 //Circle ,Area = pi × c*c ,c= radius
    printf("TRAPEZIO: %.3lf\n",((1/2.0)*(a+b)*c));      //Trapezoid (US),Trapezium (UK),Area = ½(a+b) × c,c = vertical height
    printf("QUADRADO: %.3lf\n",(b*b));                   //Square,Area = b*b,b = length of side
    printf("RETANGULO: %.3lf\n",(a*b));                  //Rectangle,Area = a*b,a = width,b = height


    return 0;

}

