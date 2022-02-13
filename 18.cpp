#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    int c=0;
    int tk100, tk50, tk20, tk10, tk5,tk2,tk1,tkf1,tkf2,tkf3,tkf4,tkf5 ;
    tk100 = tk50 = tk20 = tk10 = tk5 =tk2=tk1=tkf1=tkf2=tkf3=tkf4=tkf5=0;
    cin>>n;
    cout<<"NOTAS:"<<endl;

    if(n >= 100|| n <= 100)
    {

        printf("%.2f\n",n);
        tk100 = n/100;
        cout<<tk100<<" nota(s) de R$ 100,00"<<endl;
        c=c+tk100;
        n =n-(tk100 * 100);
    }
    if(n >= 50|| n <= 50 )
    {

        printf("%.2f\n",n);
        tk50 = n/50;
        cout<<tk50<<" nota(s) de R$ 50,00"<<endl;
        c=c+tk50;
        n =n-(tk50 * 50);
    }
    if(n >= 20 || n <= 20)
    {

        printf("%.2f\n",n);
        tk20 = n/20;
        cout<<tk20<<" nota(s) de R$ 20,00"<<endl;
        c=c+tk20;
        n =n-(tk20 * 20);
    }
    if(n >= 10 || n <= 10)
    {

        printf("%.2f\n",n);
        tk10 = n/10;
        cout<<tk10<<" nota(s) de R$ 10,00"<<endl;
        c=c+tk10;
        n =n-(tk10 * 10);
    }
    if(n >= 5 || n <= 5)
    {

        printf("%.2f\n",n);
        tk5 = n/5;
        cout<<tk5<<" nota(s) de R$ 5,00"<<endl;
        c=c+tk5;
        n =n-( tk5 * 5);
    }
    if(n >= 2 || n <= 2)
    {

        printf("%.2f\n",n);
        tk2 = n /2;
        cout<<tk2<<" nota(s) de R$ 2,00"<<endl;
        c=c+tk2;
        n =n-(tk2 * 2);
    }
    cout<<"MOEDAS:"<<endl;
    if(n>=1 || n < 1)
    {

        printf("%.2f\n",n);
        tk1 = n /1;
        cout<<tk1<<" nota(s) de R$ 1,00"<<endl;
        c=c+tk1;
        n =n-(tk1 * 1);
    }
     if(n >= 0.50 || n < 0.50)
    {

       printf("%.2f\n",n);
       tkf1 = n /0.50;
        cout<<tkf1<<" nota(s) de R$ 0.50"<<endl;
        c=c+tkf1;
        n =n-(tkf1 * 0.50);
    }
    if(n >= 0.25 || n <0.25)
    {

        printf("%.2f\n",n);
        tkf2 = n /0.25;
        cout<<tkf2<<" nota(s) de R$ 0.25"<<endl;
        c=c+tkf2;
        n =n-(tkf2 * 0.25);
    }
    if(n >= 0.10 || n < 0.10)
    {

        printf("%.2f\n",n);
        tkf3 = n /0.10;
        cout<<tkf3<<" nota(s) de R$ 0.10"<<endl;
        c=c+tkf3;
        n =n-(tkf3 * 0.10);
    }
    if(n >= 0.05 || n <0.05)
    {

        printf("%.2f\n",n);
        tkf4 = n /0.05;
        cout<<tkf4<<" nota(s) de R$ 0.05"<<endl;
        c=c+tkf4;
        n =n-(tkf4 * 0.05);
    }
    if(n >= 0.01 || n < 0.01)
    {


        //cout<<n<<endl;
        printf("%.2f\n",n);
        tkf5 = n /0.01;
        cout<<tkf5<<" nota(s) de R$ 0.01"<<endl;
    }
    return 0;
}
