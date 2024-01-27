#include<stdio.h>
#include<stdlib.h>
int main()
{

    int **a,num[12];
    int i,j,tc,n;
    printf("inter the total number of classes:");
    scanf("%d",&tc);
    a=(int**)malloc(sizeof(int*)*tc);
     if(a==NULL)
         {
                  printf("Memory allocatioin failed \n");
                  return 1;
         }
   for(i=0;i<tc;i++)
     {
          printf("please enter the number for class %d: ",i+1);
           scanf("%d",&n);
           num[i]=n;
           a[i]=(int*)malloc(sizeof(int)*n);
           if(a[i]==NULL)
         {
                  printf("Memory allocatioin failed \n");
                  return 1;
         }
            for(j=0;j<n;j++)
             {
           printf("Enter the marks for student %d:",j+1);
           scanf("%d",&a[i][j]);


            }


     }
       printf("\n Output\n");

    for(i=0;i<5;i++)
    {
        printf("Class %d: ",i+1);
         for(j=0;j<num[i];j++)
         {
             printf("%4d",a[i][j]);
         }
         puts("");
    }

    free(**a);
}
