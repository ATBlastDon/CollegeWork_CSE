#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{   int mid;
    if (low <= high) {
         mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            return binarySearch(arr, mid + 1, high, key);
        }
        else {
            return binarySearch(arr, low, mid - 1, key);
        }
    }
    return -1; // target not found
}

void main() {
    int arr[10],n,i,key;
    printf("Number of elements you want in array :");
    scanf("%d",&n);
    printf("Enter array elements in ascending order :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched :");
    scanf("%d",&key);
    
    
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1) {
        printf("Element not present in array\n");
    }
    else {
        printf("Element found at index %d\n", result);
    }
    
}
