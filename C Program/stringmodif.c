#include<stdio.h>
#include<string.h>
int main ()
{
    char st[20];

    printf("Enter the string\n");
    scanf("%[^\n]s",&st);
   // puts(st);
    
for(int i=0;st[i]!=0;i++)
{
  if(st[i]==' ')
  st[i]= '*';

}
printf("after replace\n");
printf("%s\n",st);
    
for(int i=0;st[i]!=0;i++)
{
  if(st[i]>='1'&& st[i]<='9')
  st[i]= '0';

}

printf("after replace\n");
printf("%s",st);
return 0;
}