//encapsulation 
#include<iostream>
using namespace std;
class rect{
    public :
    int len;
    int bred;
    rect(int length,int breadth){
       len= length;
       bred=breadth;
    }
    int getarea(){
        return len*bred;
    }
};
int main(){
    int a,b;
    cout<<"Enter the number = ";
    cin>>a>>b;
    rect r1(a,b);
    cout<<r1.getarea();
    return 0;

}