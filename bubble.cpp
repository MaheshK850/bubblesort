// C++ program for implementation of Bubble sort
#include <bits/stdc++.h>
#include <algorithm.h>
using namespace std;


{
    int temp = *l;
    *l = *mn;
    *mn = temp;
}

// A function to implement bubble sort
void bubbleSort(int array[], int n)
{
	int l, m;
	for (l = 0; l < n-1; l++)	
	
	// Last i elements are already in place
	for (m = 0; m < n-i-1; m++)
		if (array[m] > array[m+1])
			Arrayswap(&array[m], &array[m+1]);
}
/* bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order */
/* Function to print an array */
void printTheArray(int array[], int size)
{
	int l;
	for (l = 0; l < size; l++)
		printf("%d ", array[l]);
    printf("\n");


// Driver code
int main()
{


	int array[] = {64, 34, 25, 12, 22, 11, 90, 1, 2, 3 , 7,8};

//Hii there
	int n = sizeof(array)/sizeof(array[0]);
	bubbleSort(array, n);

	cout<<"Sorted array is: \n";

	printTheArray(array, n);
	cout<<"HEllo hackober "<<767467+44;
	return 0;
}


