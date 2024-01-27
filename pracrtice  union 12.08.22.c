
 #include<stdio.h>
// struct s
// {
//     char ch;
//     int n;
//     char str[16];
// }sv;
 union u
 {
     char ch;
     int n;
     int y;
 }uv;
 int main()
 {
//     int struct_size,union_size;
//
//     struct_size=sizeof(sv);
//     union_size=sizeof(uv);
//     printf("Structure variable took %d bytes\n",struct_size);
//      printf("Union variable took %d bytes\n",union_size);
       uv.ch='A';
       printf(" uv.ch=%c\n", uv.ch);
        uv.n=12;
         printf(" uv.x=%d\n", uv.n);
          printf(" uv.ch=%c\n", uv.ch);
            uv.y=18;
         printf(" uv.y=%d\n", uv.y);
          printf(" uv.ch=%c\n", uv.ch);
          printf(" uv.x=%d\n", uv.n);


      return 0;
 }
