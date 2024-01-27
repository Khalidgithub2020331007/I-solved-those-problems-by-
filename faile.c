#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("text.txt","w");
    if(file==NULL)
    {
        printf("There is no file");
    }
    else
    {
        printf("file have created");
        fclose(file);
    }
    getch();
}
