#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],i,pos,size,item;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    printf("Enter elements of the Array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position at which you want to insert: \n");
    scanf("%d",&pos);
    printf("Enter item that you want to insert: ");
    scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;
    size++;
    printf("Resultant Array elements: ");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }
    getch();
}
