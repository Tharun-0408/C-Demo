#include <stdio.h>

int main() {
    // Write C code here
   int i,j,n=5;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(i==1||i==n||j==1||j==n)
           {
               printf("* ");
           }
           else
            printf("  ");
       }
       printf("\n");
   }
    return 0;
}
