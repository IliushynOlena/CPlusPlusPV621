#include <iostream>
using namespace std;

int main()
{
	/*
	//Масив — це набір однотипних даних, об'єднаний загальним ім'ям.

	int train[3];
	train[0] = 3;
	train[1] = 1;
	train[2] = 4;
	cout << "Vagon 1 : " << train[0] << endl;
	cout << "Vagon 2 : " << train[1] << endl;
	cout << "Vagon 3 : " << train[2] << endl;
   

	const int size = 12;//0....12-1
	///cin >> size;//100000000000000000000000000000
	int marks[size];
	marks[0] = 12;
	marks[1] = 7;
	marks[2] = 8;
	marks[3] = 4;
	marks[4] = 11;
	marks[5] = 12;
	marks[6] = 9;
	marks[7] = 4;
	marks[8] = 2;
	marks[9] = 1;
	marks[10] = 10;
	marks[11] = 11;
	//marks[12] = 12;
	cout << "Marks : " << marks[0] << " " << marks[5] << " " << marks[11] << endl;



	//1 
	int arr[5];
	//2
	const int size = 5;
	double arr[size];
	*/

	//Перший спосіб — ініціалізація при створенні.
	const int size = 10;
	int arr[size] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int arr2[size] = { 1,2,3 };
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i] << " ";
	}
	cout << endl;

	int arr3[size]{1};
	arr3[5] = 77;
	for (int i = 0; i < size; i++)
	{
		cout << arr3[i] << " ";
	}
	cout << endl;

	//Другий спосіб — ініціалізація масиву за допомогою	циклу.
	/*int arr4[size]{};
	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << "   ---->   ";
		cin >> arr4[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr4[i] << " ";
	}*/
	//Написати програму, яка знаходить суму всіх від'ємних	значень у масиві.
	const int SIZE = 10;
	int summa = 0;
	int first_negative;
	int last_positive;
	int arr5[SIZE] = {5,7,-8,-9,14,-2,-3,7,8,1};
	//int arr5[SIZE] = {10,25,47,8,9,6,65,47,45,65};
	int max = arr5[0], min = arr5[0];
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr5[i] << " ";
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (arr5[i] < 0)
		{
			first_negative = arr5[i]; 
			break;
		}
	}
	for (int i = SIZE-1; i >= 0; i--)
	{
		if (arr5[i] > 0)
		{
			last_positive = arr5[i];
			break;
		}
	}
	for (int i = 0; i < SIZE; i++)
	{

		if (arr5[i] < 0) {
			summa += arr5[i];
		}
		if (arr5[i] < min)
		{
			min = arr5[i];
		}
		if (arr5[i] > max)
		{
			max = arr5[i];
		}
	}
	cout << "\nSumma negative elements : " << summa << endl;
	cout << "\nMax element : " << max << endl;
	cout << "\nMin element : " << min << endl;
	cout << "\nFirst negative element : " << first_negative << endl;
	cout << "\nLast positive  element : " << last_positive << endl;

}

