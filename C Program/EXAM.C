
#include<stdio.h>
int main ()
{
    int i,n=2;
    FILE *fp;
   char  str[50];
    fp=fopen("myfile.txt","w");
    for ( i = 0; i <n; i++)
    {
        /* code */puts("enter name");
        scanf("%*c%s",str);
        fprintf(fp,"%d].%s\n",i,str+2);
    }
    fclose(fp);
   
return 0;
}