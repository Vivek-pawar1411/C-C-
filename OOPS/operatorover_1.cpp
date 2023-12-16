//operator overloading
#include<iostream>
using namespace std;
class count{
    private:
    int a;
    int b;
    public:
    count(): a(4){

    }
    void operator --(){
        --a;
    }
    void operator --(int n){
        a--;
    }
    void display(){
        cout<<"count = "<<a<<endl;
        cout<<" post count = "<<a<<endl;


    }
};
int main(){
    count c1;
    --c1;
    c1.display();
    return 0;
}