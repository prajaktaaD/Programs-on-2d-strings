void main()
{
  int i,j,cnt;
  char arr[3][20],c;

  printf("Enter 3 strings::\n");
  for(i=0;i<;i++)
  scanf("%s",arr[i]);

  printf("\nDisplay:\n");
  for(i=0;i<3;i++)
  printf("%s\n",arr[i]);

  printf("Enter the charachter to find its count within array:");
  scanf(" %c",&c);

  cnt=0;
  for(i=0;i<3;i++)
   {
     for(j=0;a[i][j]!='\0';j++)
       {
         if(a[i][j]==c)
         cnt++;
       }
    
    }
   printf("The char %c has appered %d times.",c,cnt);
 }
