#include <stdio.h>

int main()
{
   int i;

   int matrix[2][3] = {{1,4,2}, {3,6,8}};

   i = matrix[0][1] + matrix[1][1];
   printf("%d\n", i);


   return 0;
}
