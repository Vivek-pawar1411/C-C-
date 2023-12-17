#include<stdio.h>
int main(){
    int n;
    printf("Enter ");
    scanf("%d",&n);
    if(n%2==0){
        goto print;
    }
    else{
        //printf("Odd Number");
        goto print2;
    }
   print:
    printf("Even Number");
    exit(0);
    print2:
    printf("odd");
 
   
    return 0;
}