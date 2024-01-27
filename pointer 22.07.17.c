
#include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int n = 5;

    printf ("%4d\n",n);

    return 0;
}

//int main()
//{
//
//    int *a[5],num[5];
//    int i , j, n;
//     for(i=0;i<5;i++)
//     {
//          printf("please enter the numberfor class %d: ",i+1);
//           scanf("%d",&n);
//           num[i]=n;
//           a[i]=(int*)malloc(sizeof(int)*n);
//           if(a[i]==NULL)
//         {
//                  printf("Memory allocatioin failed \n");
//                  return 1;
//         }
//            for(j=0;j<n;j++)
//             {
//           printf("Enter the marks for student %d:",j+1);
//           scanf("%d",&a[i][j]);
//
//
//            }
//
//
//     }
//
//
//    printf("\n Output\n");
//
//    for(i=0;i<5;i++)
//    {
//        printf("Class %d: ",i+1);
//         for(j=0;j<num[i];j++)
//         {
//             printf("%4d",a[i][j]);
//         }
//         puts("");
//    }
//
//  //  free(marks);
//    return 0;
//}
