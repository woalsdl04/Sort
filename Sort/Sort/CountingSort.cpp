#include <iostream>

#define MAX_VALUE 10

using namespace std;


void CountingSort(int arr[], int size);
void Swap(int& i, int& j);
void PrintArr(int arr[], int size);

int main()
{
	int arr[10] = { 5, 2, 5, 3, 6, 1, 9, 9, 3, 2 };
	int arrsize = sizeof(arr) / sizeof(arr[0]);;

	cout << "정렬 전==================================\n";
	PrintArr(arr, arrsize);

	cout << "\n정렬 후==================================\n";
	CountingSort(arr, arrsize);


	return 0;
}

void CountingSort(int arr[], int size)
{

	int countingArr[MAX_VALUE] = { 0, };

	for (int i = 0; i < size; i++)
	{
		countingArr[arr[i]]++;
	}

	for (int i = 0; i <= MAX_VALUE; i++)
	{
		for (int j = 0; j < countingArr[i]; j++)
		{
			cout << i << " ";
		}
	}

	cout << endl;
}


void PrintArr(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

