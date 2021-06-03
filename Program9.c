#include <stdio.h>
#include <conio.h>
int bsearch(int *a,int n,int search);
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
   i=bsearch(array,n,search);
   if (i==-1)
   printf("Not found! %d isn't present in the list.\n", search);
   else
   printf("%d found at location %d.\n", search, i);
   getch();
}
int bsearch(int *a,int n,int search)
{
   int first = 0, middle;
   int last = n - 1;
   while(first <= last)
   {
     middle = (first+last)/2;
     if (search==a[middle])
     return middle;
     else if (search<a[middle])
     last=middle-1;
     else
     first=middle+1;
    }

return -1;
}
