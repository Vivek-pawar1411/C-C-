// add data in file handling
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch[100];
    fstream file;
    file.open("ABC.txt");
    cout<<"Enter the detail"<<endl;
    cin.getline(ch,sizeof(ch));
    file<<ch<<endl;
    file>>ch;
    cout<<ch;
    file.close();
    return 0;
}