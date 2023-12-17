
#include<stdio.h>
int main ()
{
    FILE *fp;
   char  ch[100];
    fp=fopen("myfile.txt","w");
   // fgetc(fp);
    fprintf(fp,"%s"," disha computer\n");
     fclose(fp);
   
return 0;
}