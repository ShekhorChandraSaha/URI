#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c,maiorAB,maiorC;

    scanf("%d%d%d",&a,&b,&c);

    maiorAB=(a+b+abs(a-b))/2;                                      //1+2+abs(1-2)=3+1/2=2,maiorAB=2;
    maiorC=(maiorAB+c+abs(maiorAB-c))/2;                           //2+3+(2-3)=5+1/2=3,maiorc=3



    printf("%d eh o maior\n",maiorC);


    return 0;

}

//Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



//Input
//The input file contains 3 integer values.

//Output
//Print the greatest of these three values followed by a space and the message “eh o maior”.

//এমন একটি প্রোগ্রাম তৈরি করুন যা 3 পূর্ণসংখ্যা মান পড়বে এবং "eh o maior" বার্তা অনুসরণ করে সর্বশ্রেষ্ঠ একটি উপস্থাপন করবে। নিম্নলিখিত সূত্র ব্যবহার করুন:



//ইনপুট
//ইনপুট ফাইল 3 পূর্ণসংখ্যা মান রয়েছে।

//আউটপুট
//একটি স্থান এবং বার্তা "eh o maior" বার্তা অনুসরণ করে এই তিনটি মানগুলির মধ্যে সর্বাধিক মুদ্রণ করুন।
