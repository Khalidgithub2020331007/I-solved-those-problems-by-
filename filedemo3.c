#include<stdio.h>
int main()
{
    FILE *file;
   // char name[20];
    char ch[40];
   // int age;
    file=fopen("text.txt","r");
    if(file==NULL)
    {
        printf("file doesnot exist");
    }
    else
    {
         printf("file  open\n");


        while(!feof(file));
        {
             fgets(ch,39,file );
             printf("%s\n",ch);
        }

        fclose(file);

    }
    getch();
}

