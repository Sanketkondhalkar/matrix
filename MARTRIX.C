#include<stdio.h>
#include<conio.h>
void main()
{
 int a[4],b[4],i,j,k,c,d,e,f;
 clrscr();
 printf("enter first matrix:");
 for(i=0;i<4;i++)
 {
  scanf("%d",&a[i]);
  }
   printf("enter second matrix:");
   for(j=0;j<4;j++)
   {
    scanf("%d",&b[j]);
    }

       c= a[0]+b[0];
       d=a[1]+b[1];
       e=a[2]+b[2];
       f=a[3]+b[3];
     printf("\n addition of matrix:");
     printf("\n %d",c);
     printf("\t%d",d);
     printf("\n%d",e);
     printf("\t%d",f);

     getch();
  }


