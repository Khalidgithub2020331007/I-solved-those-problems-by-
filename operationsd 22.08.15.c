#include<stdio.h>
#include<stdlib.h>

void readinput(int *a[20],int nrows,int ncols);

void computesums(int *a[20],int *b[20],int *c[20],int nrows,int ncols);
void writeoutput(int *c[20],int nrows,int ncols);
int main()
{
    int  row,nrows,ncols ;
    int *a[20],*b[20],*c[20];

   printf("How many rows?:");
   scanf("%d",&nrows);
      printf("How many cols?:");
   scanf("%d",&ncols);

   for(row=0;row<nrows;++row)
   {
       a[row]=(int *)malloc(ncols*sizeof(int));
       b[row]=(int *)malloc(ncols*sizeof(int));
       c[row]=(int *)malloc(ncols*sizeof(int));

   }
   printf("\n First Table::\n");
   readinput(a,nrows,ncols);
   printf("\n Second Table::\n");
   readinput(b,nrows,ncols);
   computesums(a,b,c,nrows,ncols);
   printf("\n nSums of element::\n");
   writeoutput(c,nrows,ncols);

    return 0;
}
void readinput(int *a[20],int m,int n)
{
    int row,col;
     for(row=0;row<m;++row)
     {
         printf("Enter data for row no. %2d",row+1);
          for(col=0;col<n;++col)
          {
              scanf("%d",*(a+row)+col);
          }

     }
     return ;
}

void computesums(int *a[20],int *b[20],int *c[20],int m,int n)
{
    int row,col;
      for(row=0;row<m;++row)
     {

          for(col=0;col<n;++col)
          {
              *(*(c+row)+col)=*(*(a+row)+col)+*(*(b+row)+col);

          }

     }
     return ;
}
void writeoutput(int *a[20],int m,int n)
{
    int row,col;
      for(row=0;row<m;++row)
     {

          for(col=0;col<n;++col)
          {
             printf("%4d",*(*(a+row)+col));


          }
          puts("");

     }
     return ;
}
