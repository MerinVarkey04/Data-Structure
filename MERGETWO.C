#include <stdio.h>
#include <conio.h>
void main()
 {
  int n1, n2, n3, a1[20], a2[20], a3[20], i, j, k;
  clrscr();
  printf("Enter Size of 1st array \n");
  scanf("%d", &n1);
  k = n1;
  printf("Enter size of 2nd array \n");
  scanf("%d", &n2);
  n3 = n1 + n2;
  printf("Elements of 1st array \n");
  for (i = 0; i < n1; i++)
  {
    scanf("%d", &a1[i]);
    a3[i] = a1[i];
  }
  printf("Enter elements of 2nd array \n");
  for (j = 0; j < n2; j++)
   {
    scanf("%d", &a2[j]);
    a3[k] = a2[j];
    k++;
  }
  printf("Merged array \n");
  for (i = 0; i < n3; i++)
  {
    printf(" %d\t", a3[i]);
  }
getch();
}
