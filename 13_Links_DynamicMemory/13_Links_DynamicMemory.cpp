#include <iostream>
#include <conio.h>
using namespace std;

void Change(int& a)
{
	a++;
}
int& FindMAx(int& a, int& b)
{
	if (a > b) return a;
	else return b;


	int c = 5;
	return c;
}
void Test1()
{
	const int size = 100;
	int arr[size];
}
void Test2()
{
	int size = 5;
	cin >> size;
	int *arr = new int[size];
	delete[]arr;
}
int * CreateArray(int size)
{
	int* arr = new int[size];
	return arr;
}
void InitArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout<< arr[i] << " ";
	}
}
int * AddNewElement(int* arr, int *size, int number)
{
	int* temp = new int[*size + 1];
	for (int i = 0; i < *size; i++)
	{
		temp[i] = arr[i];
	}
	temp[*size] = number;
	delete[]arr;
	arr = temp;
	(*size)++;
	return arr;
}
int main()
{
	int size = 5;
	//cout << "Enter size : "; cin >> size;
	int * arr = CreateArray(size);
	InitArray(arr, size);
	ShowArray(arr, size);

	int number;
	char choice = 'y';
	while (true)
	{
		cout << "Do you want to add number ? y/n";
		choice = _getch();
		if (choice == 'n')break;

		cout << "\nEnter number : "; cin >> number;
		arr = AddNewElement(arr, &size, number);
		//system("cls");
		ShowArray(arr, size);
	}




	delete[] arr;
   
	/*
	int a = 5;
	int * pa = new int(15);
	int* pb = new int;
	int* pc = nullptr;

	*pb = 12;
	pc = new int(3);
	cout << "pa = " << pa << endl;
	cout << "pb = " << pb << endl;
	cout << "pc = " << pc << endl;

	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;
	cout << "*pc = " << *pc << endl;
	delete pc;
	pc = new int(555);
	cout << "*pa = " << *pa << endl;
	cout << "*pb = " << *pb << endl;
	cout << "*pc = " << *pc << endl;

	delete pa;
	delete pb;
	delete pc;
	*/
	/*
	int a = 5;    // variable

	int* pa = &a;//pointer

	int& la = a; //Link

	cout << "a = " << a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "la = " << la << endl;

	int b = 10;

	int* pb = nullptr;//garbage...

	int& lb = b;
	pb = &b;
	cout << "b = " << b << endl;
	cout << "pb= " << pb << endl;
	cout << "*pb = " << *pb << endl;

	cout << "a = " << a << endl;
	Change(a);
	cout << "a = " << a << endl;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//int &lmax = FindMAx(a, b);
	 FindMAx(a, b) = 111;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//cout << "lmax= " << lmax << endl;
	*/


}

