 #include<stdio.h>
 #include<string.h>
 #include<ctype.h>
int scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po);

 int main()
 {
     char line[80];
     int v=0,c=0,d=0,w=0,o=0;
     printf("Enter a line of text below:::\n");
     scanf("%[^\]");
     scan_line(line,&v,&c,&d,&w,&o);
     printf("number of vowel is   %d \n",v);
     printf("number of consonant is   %d \n",c);
     printf("number of digit is   %d \n",d);
     printf("number of whitespace is   %d \n",w);
     printf("number of others is   %d \n",o);


 }
int scan_line(char line[],int *pv,int *pc,int *pd,int *pw,int *po)
 {
     char c;
     int count;
     count =strlen(line);
     while(c=toupper(line[count])!='\0')
     {
         if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
         {
             ++*pv;

         }
           else if(c>='A'&&c<='Z')
             {
                 ++*pc;
             }
             else if(c==' '||c=='\t')
             {
                 ++*pw;
             }
             else if(c>='0'&&c<='9')
             {
                 ++*pd;
             }
             else
                ++*po;


                ++count;
     }
     return;
 }



// &v,&c,&d,&w,&ot
