#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter elements: ");
        scanf("%d",&a[i]);
    }
    printf("Array elements are: ");
    for(i=0;i<5;i++)
    printf("\n%d",a[i]);

    return 0;
}
