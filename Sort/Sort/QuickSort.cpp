#include <iostream>

using namespace std;

void quicksort(int arr[], int beg, int end);
int partition(int arr[], int beg, int end);
void swap(int& i, int& j);
void printarr(int arr[], int size);

int main()
{
	int arr[10] = { 27, 22, 11, 94, 83, 14, 30, 19, 46, 33 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "정렬 전==================================\n";
	printarr(arr, size);

	quicksort(arr, 0, 9);

	cout << "\n정렬 후==================================\n";

	printarr(arr, size);

	return 0;
}

void quicksort(int arr[], int beg, int end)
{
	if (beg >= end || beg < 0) return;													

	int pivot = partition(arr, beg, end);
	quicksort(arr, beg, pivot - 1);
	quicksort(arr, pivot + 1, end);
}

int partition(int arr[], int beg, int end)
{
	int i = beg;
	int j = end;
	int p = beg;

	while (i < j)
	{
		while (arr[j] > arr[p])
		{
			j--;
		}

		swap(arr[j], arr[p]);
		p = j;

		while (arr[i] < arr[p])
		{
			i++;
		}

		swap(arr[i], arr[p]);
		p = i;
		
	}

	return p;
}

void swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void printarr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

