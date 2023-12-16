//read data from existing file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string ch;
   ifstream file;
    file.open("ABC.txt");
    while (getline (file,ch))
    {
        cout<<ch<<endl;
    }
    file.close();
    return 0;

}