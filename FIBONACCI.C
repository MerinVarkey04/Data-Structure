#include<stdio.h>
#include<conio.h>
int fib(n)
{
  if (n<=0)
  return 0;
  else if(n==1)
  return 1;
  else
  return fib(n-1)+fib(n-2);
}
void main()
{
  int i,n;
  clrscr();
  printf("Enter the number");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("%d\n",fib(i));
  }
getch();
}