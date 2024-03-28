// Author: Muhib Arshad (@muhib7353 everywhere)
// Date and Time: 4 October , 2022  23:52:00
// Question : FAST University Lab2 (OOP) : Instructor=> Mam Abeeda

/*
Write the following function that indirectly sorts the floats pointed to by the first n pointers in the array p by rearranging the pointers not data:

void sort(float* p[], int n);

Use the following main as driver and also write code of print function.

void main (){

float a[81] = (44.4, 77.7, 22.2, 88.8, 66.6, 33.3, 99.9, 55.5);
float* p[8];

for (int i = 0; i c 8; i++)
p[i] = new float (a[i]);// p[i] points to a[i]

     print(p, 8);

sort(p, 8);
print(p, 8);
}


*/
#include <iostream>
using namespace std;

void sort(float* p[], int n)
{
    // cout<<*(p+0);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(*(p+i))>*(*(p+j)))
            {
                float *temp;
                temp=*(p+i);
                *(p+i)=*(p+j);
               *(p+j)=temp;
            }
        }
    }
}
void print(float* p[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*(p[i])<<" ";
    }
    cout<<"\n";
}
int main()
{
    float a[81] = {44.4, 77.7, 22.2, 88.8, 66.6, 33.3, 99.9, 55.5};
    float *p[8];

    for (int i = 0; i < 8; i++)
        p[i] = new float(a[i]); // p[i] points to a[i]

    print(p, 8);

    sort(p, 8);
    print(p, 8);
    for(int i=0;i<8;i++)
    {
        delete p[i];
    }


    return 0;
}
