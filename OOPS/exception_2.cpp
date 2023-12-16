#include<iostream>
using namespace std;
int main()
{
    int n=2;
    try{
        if (n==1)
        {
            throw 1;
        }
        else if(n==2){
        throw 10.5f;
        }
        else
        {
            cout<<"value = "<<n<<endl;
        }
    }
        catch(int ex){
            cout<<"integer exception"<<endl;
        }
 return 0;   
}