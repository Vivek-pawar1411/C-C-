//protected 
#include<iostream>
using namespace std;
class shape
{
protected :
int width;
int height;
public:
shape(int a=0,int b=0){
    width=a;
    height=b;
}
int area(){

    return width*height;
}
};
class rect :public shape {
    public :
    rect(int a=0,int b=0): shape(a,b){

    }
    int area(){
        return width*height;
    }
};
int main(void){
    int a,b;
    int c,d;
    cout<<"Enter the number"<<endl;
    cin>>a>>b;
    shape s1(a,b);
    rect r1(a,b);
   c= s1.area();
   d= r1.area();
   cout<<"shape = "<<c<<endl;
      cout<<"rect = "<<d<<endl;


}