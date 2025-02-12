#include<stdio.h>
#include<conio.h>
void main()
{
  int n,m,a[20][20],b[20][20],c[20][20],i,j;
  clrscr();
  printf("Enter the value for n \n");
  scanf("%d",&n);
  printf("Enter the value for m \n");
  scanf("%d",&m);
  printf("Enter 1st array elements \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
  printf("Enter 2nd array elements \n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    scanf("%d",&b[i][j]);
   }
  }
  printf("The 1st matrix \n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("%d\t",a[i][j]);
   }
   printf("\n");
  }
  printf("The 2nd matrix \n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("%d\t",b[i][j]);
   }
   printf("\n");
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
   c[i][j]=a[i][j]+b[i][j];
   }
  }
  printf("\n Matrix after addition \n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("%d\t",c[i][j]);
   }
   printf("\n");
  }
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    c[i][j]=a[i][j]-b[i][j];
   }
  }
  printf("\n Matrix after subtraction \n");
  for(i=0;i<n;i++)
  {
   for(j=0;j<m;j++)
   {
    printf("%d\t",c[i][j]);
   }
  printf("\n");
  }
  getch();
}