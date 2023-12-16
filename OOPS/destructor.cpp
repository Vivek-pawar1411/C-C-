//destructor
#include<iostream>
using namespace std;
class E{
    public :
    E(){
        cout<<"cons"<<endl;
   
    }
    ~E(){
        cout<<"dest"<<endl;
    }
};
int main(void){
    E e1;


}
