#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100],size,i,item;
    printf("Enter the size of Array: ");
    scanf("%d",&size);
    printf("Enter the elements of Array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Insert element in Array: ");
    scanf("%d",&item);
    size = size+1;
    a[size-1] = item;
    printf("After insertion of element at the ending of an Array: ");
    for(i=0;i<size;i++)
    {
        printf("%d", a[i] );
    }
    getch();
}

