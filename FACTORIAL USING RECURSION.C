#include<stdio.h>
#include<conio.h>
int multiplyNumbers(int n);
void main()
{
  int n;
  printf("Enter a positive integer:");
  scanf("%d",&n);
  printf("Factorial of %d=%d",n,multiplynumbers(n));
  getch();
}
  int multiplyNumbers(int n)
  {
  if (n>=1)
    return n*multiplyNumbers(n-1);
  else
   return 1;
}
