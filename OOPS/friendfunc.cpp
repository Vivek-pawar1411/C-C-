//friend class
#include<iostream>
using namespace std;
class ABC{
    private: 
    int a;
    int b;
    int c;
    public:
    ABC(){
    
    }
    friend void friendfunc(ABC& t);
};

    void friendfunc(ABC& t){
    
    cout<<"Enter the number"<<endl;
    cin>>t.a>>t.b;
        cout<<t.a<<endl;
      cout<<t.b<<endl;
      t.c=t.a*t.b;
            cout<<"sum = "<<t.c<<endl;

      

    }

int main(void){
    
    ABC c;

    friendfunc(c);
    
}