#include <stdio.h>
#include <conio.h>
int lsearch(int *a,int n,int search);
void main()
{
    int c,i,n,search, array[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n", n);
    for (c = 0; c < n; c++)
    scanf("%d",&array[c]);
    printf("Enter value to find\n");
    scanf("%d", &search);
    i=lsearch(array,n,search);
    if (i==-1)
       printf("Not found! %d isn't present in the list.\n", search);
    else
       printf("%d found at location %d.\n", search, i);



    getch();
}
    int lsearch(int *a,int n,int search)
{
    int c;
    for (c = 0; c < n; c++)
    {

    if (a[c] == search) /* If required element is found */
    return c;

    }

    return -1;

}
