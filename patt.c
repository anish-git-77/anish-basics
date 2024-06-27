#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)<=5)
            {
                printf(" ");
            }
            else{
                printf("*");

            }
        }
        printf("\n");
    }
}