// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
#include <algorithm.h>
using namespace std;


{
    int temp = *Z;
    *Z = *yp;
    *yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)	
	
	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			Arrayswap(&arr[j], &arr[j+1]);
}
/* bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order */
/* Function to print an array */
void printTheArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
    printf("\n");
}
void nothingg(){
	return;
}

// Driver code
int main()
{


	int arr[] = {64, 34, 25, 12, 22, 11, 90, 7, 8, 9, 1, 2, 3 , 7,8};

//Hii there
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);

	cout<<"Sorted array is: \n";

	printTheArray(arr, n);
	cout<<"HEllo hackober "<<767467+44;
	return 0;
}


