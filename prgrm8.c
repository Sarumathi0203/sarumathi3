#include<stdio.h>
#include<conio.h>
int main()
{
int value,i,sum=0,n;
clrscr();
printf("enter how many numbers to add?\n");
scanf("%d",&value);
printf("enter %d integers:\n",n);
for(i=1;i<n;i++)
{
scanf("%d",&value);
sum=sum+value;
}
printf("sum of the integers is=%d\n",sum);
return 0;
}

