#include<iostream>
using namespace std;
double getavg(int a[],int n);
int main()
{
int bal[5]={1,2,3,4,5};
double avg;
avg=getavg(bal,5);
cout<<"Avg value is"<<avg<<endl;
return 0;
}