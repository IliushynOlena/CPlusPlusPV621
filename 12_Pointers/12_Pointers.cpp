#include <iostream>
using namespace std;

void Change(int a)
{
	a++;
}
void Change(int *a)
{
	(*a)++;
}
int FindMax(int a, int b, int c)
{
	if (a > b && a > c)
		return a;
	else if (b > c and b > a)
		return b;
	else
		return c;
}
int* FindMax(int *a, int *b, int *c)
{
	if (*a > *b && *a > *c)
		return a;
	else if (*b > *c and *b > *a)
		return b;
	else
		return c;
}
void InitArray(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 50;
	}
}void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}cout << endl;
}
int * MaxElement(int* arr, int size)
{
	int* max = arr;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > *max) {
			max = arr + i;
		}
	}
	return max;
}
int main()
{
	const int size = 10;
	int arr[size];
	InitArray(arr, size);
	ShowArray(arr, size);
	int* Max = MaxElement(arr, size);
	(*Max) *= 2;
	ShowArray(arr, size);


	int a = 5, b = 8, c = 12;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	int max = FindMax(a, b, c);
	cout << "Max = " << max << endl;
	max++;
	cout << "Max = " << max << endl;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	int* maxEl = FindMax(&a, &b, &c);
	cout << "Max = " <<*maxEl << endl;
	(*maxEl)++;
	cout << "Max = " << *maxEl << endl;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;


	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;
	Change(&a);
	cout << "a = " << a << endl;

	/*
	int a = 5;
	int b = 10;

	int* pa = &a;
	int* pb = &b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "pa = " << pa << endl;
	cout << "pb = " << pb << endl;

	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	cout << a + b << endl;
	cout << *pa + *pb << endl;

	pa = &b;
	cout << "b = " << b << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	*pa += 2;
	cout << "b = " << b << endl;
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;

	const int size = 10;
	int arr[size]{};
	int* parr = &arr[0];

	cout << arr << endl;//address first element
	cout << parr << endl;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << &arr[1] << endl;
	cout << *parr << endl;
	cout << parr + 1 << endl;
	cout << *parr + 1 << endl;


	for (int i = 0; i < size; i++)
	{
		*(parr + i) = rand() % 100; //arr[i] = rand() % 100;
		cout << *(parr + i) << " ";
	}
	cout << endl;

	parr = arr;
	for (int i = 0; i < size; i++)
	{
		*parr = rand() % 10;
		parr++;
	}
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	cout << endl;
	int* newp = arr;
	*newp = 0;
	newp += 3;
	*newp = 0;
	parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr++;
	}
	cout << endl;
	parr--;
	for (int i = 0; i < size; i++)
	{
		cout << *parr << " ";
		parr--;
	}
	cout << endl;

	*/
 






}

