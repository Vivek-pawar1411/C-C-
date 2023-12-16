//encapsulation setter and getter method

#include<iostream>
using namespace std;
class rect{
    private :
    int len;
    int bred;
    public:
    void setlen(int length){
        len=length;
    }
    void setbred(int breadth){
        bred=breadth;
    }
    int getlen(){
        return len;
    }
     int getbred(){
        return bred;
    }
     int getarea(){
        return len*bred;
    }
};
int main(){
    int a,b;
    cout<<"Enter the number = ";
    cin>>a>>b;
    rect r1;
    r1.setlen(a);
    r1.setbred(b);
    cout<<r1.getlen()<<endl;
        cout<<r1.getbred()<<endl;
    cout<<r1.getarea()<<endl;

    return 0;

}