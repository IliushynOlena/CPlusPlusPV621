#include <iostream>
using namespace std;


void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40-20;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i] << " ";
	}
	cout << endl;
}
int LinearSearch(int arr[], int size, int search)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == search) {
			return i;
		}
	}
	return -1;
}
void SelectSort(int arr[], int size)
{
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < temp)
			{
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}
	}
}
void BubbleSort(int arr[], int size)
{
	int temp;
	for (int i = 0; i < size; i++)//10
	{
		for (int j = size-1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void ShakerSort(int arr[], int size)
{
	int j, index = size - 1;
	int left = 1, right = size - 1;
	int temp;
	do
	{
		for ( j= right; j >= left; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;
			}
		}
		left = index + 1;
		for ( j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				index = j;
			}
		}
		right = index - 1;

	} while (left < right);
}
void InsertSort(int arr[], int size)
{
	//11 4 2 7 3 11 8 9 6 
	int temp;
	int j;
	for (int i = 0; i < size; i++)
	{
		//i = 1;		
		temp = arr[i];//4
		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			//j = 0
			//arr[j + 1] = 4
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = temp;
	}

}
void BubbleSort222(int arr[], int size)
{
	int start = 0, end = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			start = i; break;
	}

	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			end = i; 
		}

	}
	cout << "Start = " << start << " End = " << end << endl;
	int temp;
	for (int i = start; i < end; i++)
	{
		for (int j = end - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	int search_num, index_find;
	InitArray(arr, size);
	ShowArray(arr, size);
	//SelectSort(arr, size);
	//BubbleSort(arr, size);
	//ShakerSort(arr, size);
	InsertSort(arr, size);
	ShowArray(arr, size);
	BubbleSort222(arr, size);
	ShowArray(arr, size);
	/*cout << "Enter number to search : "; cin >> search_num;
	index_find = LinearSearch(arr, size, search_num);
	if (index_find != -1)
	{
		cout << "Number [" << search_num << "] find in index [" << index_find << "]" << endl;
	}
	else
	{
		cout << "Number " << search_num << " not found!" << endl;
	}*/

   




}
