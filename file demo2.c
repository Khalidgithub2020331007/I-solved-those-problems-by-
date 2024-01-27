#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char name[]="bangladesh";
    int l=strlen(name);
    int i;

    file=fopen("text.txt","w");
    if(file==NULL)
    {
        printf("There is no file");
    }
    else
    {
        printf("file have created\n");
         for(i=0;i<l;i++)
        {
             fputc(name[i],file);
        }
        printf("file is written succesfully\n");
        fclose(file);
    }
    getch();
}
