#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int main(){
    // Unsorted array for linear search
    int arr[] = {1,3,5,9,13,26,33,45,69,100};
    int size = sizeof(arr)/sizeof(int);
    int element = 69;
    int searchIndex = linearSearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
