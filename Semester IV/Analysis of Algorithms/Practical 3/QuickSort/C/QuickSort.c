#include <stdio.h>

int partition(int arr[], int len)
{
	int pivot = len / 2;
	int left = 0;
	int right = len - 1;
	int temp;

	while (right != pivot || left !=pivot)   //can also put while right > left
	{
		if (right != pivot)
		{
			if (arr[right] < arr[pivot])
			{
				temp = arr[right];
				arr[right] = arr[pivot];
				arr[pivot] = temp;
				pivot = right;
			}
			else right--;
		}
		
		else
		{
			if (arr[left] > arr[pivot])
			{
				temp = arr[left];
				arr[left] = arr[pivot];
				arr[pivot] = temp;
				pivot = left;
			}
			else left++;
		}


	}

	return pivot;
}


void quicksort(int arr[], int len)
{
	if (len > 1)
	{
		int pivot = partition(arr, len);
		quicksort(arr, pivot);
		quicksort(arr+pivot+1, len-pivot-1);
	}
}


int main()
{
	int arr[] = {1,6,3,2,9,5,4,7,8};
	quicksort(arr, 9);

	for (int i =0; i< 9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}