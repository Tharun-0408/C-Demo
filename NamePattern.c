// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Code to print my name using *
   int i,j,n=5;
    for(i=1;i<=n;i++)//T-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
     for(i=1;i<=n;i++)//H-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==5||i==3)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
     for(i=1;i<=n;i++)//A-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if((j==3&&i==1) || (i==5 && (j==1||j==5)) || (i==3 && j!=5&&j!=1) )
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
     for(i=1;i<=n;i++)//R-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if(j==1 || ((i==1 || i==3) && j<=3) || (j==3&&i<=3) || (i==4 && j==2) || (i==5&&j==3))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
     for(i=1;i<=n;i++)//U-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==5||i==5)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
         for(i=1;i<=n;i++)//N-Pattern
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||j==5||i==j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    
}
