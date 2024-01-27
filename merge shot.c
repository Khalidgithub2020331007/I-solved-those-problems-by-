
#include<stdio.h>
 void mergesort(int *a,int low,int high)
 {
     if(low>=high)
     {
         return ;
     }
     int mid=low+(high-low)/2;

     mergesort(a,low,mid);
     mergesort(a,mid+1,high);


     merge(a,low,mid,high);
 }
 void  merge(int *a,int low,int mid,int high)
 {
     int i,indexa,indexl,indexh,sizelow,sizehigh;

     sizelow=mid-low+1;

     sizehigh=high-mid;

     int l[sizelow],r[sizehigh];

     for(i=0;i<sizelow;i++)
     {
       l[i]=a[low+i];
     }
      for(i=0;i<sizehigh;i++)
     {
         r[i]=a[mid+i+1];
     }
     indexl=0;
     indexh=0;
     for(indexa=0;indexl<sizelow&&indexh<sizehigh;indexa++)
     {
         if(l[indexl]<r[indexh])
         {
             a[indexa]=l[indexl];
             indexl++;
         }
         else
         {
             a[indexa]=r[indexh];
             indexh++;
         }

     }


     while(indexl<sizelow)
     {
        a[indexa]=l[indexl];
        indexl++;
        indexa++;
     }
     while(indexh<sizehigh)
     {
         a[indexa]=r[indexh];
         indexh++;
         indexa++;
     }

 }
int main()
{
    int l,i;
    scanf("%d",&l);
    int a[l];
    for(i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
         for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    mergesort(a,0,l-1);

      for(i=0;i<l;i++)
    {
        printf("%d ",a[i]);
    }
    puts("\n");
    return 0;
}
