#include <iostream>

using namespace std;

void InsertionSort(int arr[], int size);
void Swap(int& i, int& j);
void PrintArr(int arr[], int size);

int main()
{
	int arr[10] = { 27, 22, 11, 94, 83, 14, 30, 19, 46, 33 };
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "정렬 전==================================\n";
	PrintArr(arr, size);

	InsertionSort(arr, size);

	cout << "\n정렬 후==================================\n";

	PrintArr(arr, size);

	return 0;
}

void InsertionSort(int arr[], int size)
{
	for(int i = 1; i < size; i++)
	{
		for(int j = i; j > 0; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				Swap(arr[j], arr[j - 1]);
			}
			else break;
		}
	}
}

void Swap(int& i, int& j)
{
	int temp = i;
	i = j;
	j = temp;
}

void PrintArr(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}

