#include<stdio.h>   //header file
#include<conio.h>   //header file
void main()
{
int a[3][3],b[3][3],add,sub,i,j;
clrscr();
printf("enter the number of 1st matrix:");
for(i=0;i<=2;i++) //(initialisation;condition;change)
  {
    for(j=0;j<=2;j++)
    {
	scanf("%d",&a[i][j]);
    }
  }
printf("enter the number of 2nd matrix:");
for(i=0;i<=2;i++)
  {
    for(j=0;j<=2;j++)
    {
	scanf("%d",&b[i][j]);
    }
  }
printf("\naddition of 1st and 2nd matrix:");
for(i=0;i<=2;i++)
  {
  printf("\n");
    for(j=0;j<=2;j++)
    {
    sub=a[i][j]-b[i][j];
    add=a[i][j]+b[i][j];
    printf("\t%d%d",sub,add);
    }
  }
    getch();
}
