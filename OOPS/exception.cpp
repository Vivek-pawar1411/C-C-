#include<iostream>
using namespace std;
int main()
{ int y=1;
try
{ 
    if(y==1)
{ 
    throw 1;
}
else
{
     //int res=x/y;
cout<<"res::"<<y<<endl;
}
}
catch(int)
{
     cout<<"exception"<<endl;
}
return 0;
}