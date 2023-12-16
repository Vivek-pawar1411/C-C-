#include<iostream>
using namespace  std;
class Volume{
    private:
    int l;
    int b;
    int h;
    public :
    int area(int l)
    {
      int c;
      c=l;
      cout<<c<<endl;
    }
    
    int area(int x, int y){
        float m;
        m=x*y*0.5;
       cout<<m<<endl;
    }
    int area(int l, int b,int h){
        int n;
        n=l*b*h;
       cout<<n<<endl;

    }
};
int main(void){
    Volume v1;
    int a,b,c;
    cout<<"Enter the parameter = "<<endl;
    cin>>a>>b>>c;
    v1.area(a);
    v1.area(b,c);
    v1.area(a,b,c);
}
