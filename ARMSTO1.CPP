/*AIM :- To check the Number of Armstrong Number from 1 to 1000*/
#include<conio.h>
#include<stdio.h>
 void num(int i)
 {
  int r,sum=0,temp;
  temp=i;
  while(i!=0)
  {
   r=i%10;
   sum+=r*r*r;
   i=i/10;
  }


  if(sum==temp)
  {
   printf("Armstrong Number = %d\n",temp);
  }
 }
void main()
{
 clrscr();
 int j;

 for(j=1;j<=1000;j++)
 {
  num(j);
 }
 getch();
}