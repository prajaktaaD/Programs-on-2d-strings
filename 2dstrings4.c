#include<stdio.h>
#include<string.h>

void main()
{
  int i,j,cv=0,cc=0;
  char a[4][10];

  printf("\nEnter 4 strings:\n");
  for(i=0;i<4;i++)
  scanf("%s",a[i]);


  printf("\nDisplay:\n");
  for(i=0;i<4;i++)
  printf("%s",a[i]);


  for(i=0;i<4;i++)
   {
     for(j=0;a[i][j]!='\0';j++)
       {
        if(a[i][j]=='A'||a[i][j]=='E'||a[i][j]=='I'||a[i][j]=='O'||
           a[i][j]=='U'||a[i][j]=='a'||a[i][j]=='i'||a[i][j]=='e'||
           a[i][j]=='o'||a[i][j]=='u')
        cv++;


        else
        cc++;
       
       }
    }

   printf("\nConsonent:%d  \nVowels:%d\n,cc,cv);
}
