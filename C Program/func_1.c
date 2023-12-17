//no paramter no return type

#include<stdio.h>
void temp();
int main()
{
    
    temp();
}

void temp()
{
            int len ,bread,ans=0;
            
                printf("Enter the the temp ");
    scanf("%d%d",&len,&bread);
    ans=len*bread;
    
   printf("answer %d",ans);

}
