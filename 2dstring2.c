#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,cnt;
  char arr[3][20];

  printf("Enter 3 strings::\n");
  for(i=0;i<;i++)
  scanf("%s",arr[i]);

  printf("\nDisplay:\n");
  for(i=0;i<3;i++)
  printf("%s\n",arr[i]);

  for(i=0;i<3;i++)
   {
     cnt=0;
     for(j=0;arr[i][j]!='\0';j++)
     cnt++;

     printf("\nSl%d=%d",i,cnt);
   }
}
