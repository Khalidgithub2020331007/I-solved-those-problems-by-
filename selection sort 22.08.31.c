 //8,2,4,1,5,7-1,2,4,8,5,7->1,2,4,5,8,7->1,2,4,5,7,8

 #include<stdio.h>
 int main()
 {
     int a[20],i,j,n,l,min,temp,m,count=0,k;
    printf("lenth-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nn%d-",i+1);
        scanf("%d",&a[i]);
    }
//     for(i=0;i<n;i++)
//    {
//        printf("%d ",a[i]);
//    }
//


    for(i=0;i<n-1;i++)
    {
        min=a[i];
        for(j=i;j<n;j++)
       {
           if(a[j]<=min)
           {
               min=a[j];
               m=j;
           }
           count++;

       }
        temp=a[i];
           a[i]=a[m];
           a[m]=temp;
           for(k=0;k<n;k++)
       {
        printf("\nn%d-%d",k +1,a[k]);

       }
       puts("");
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
        printf("count-%d ",count);


 }
