#include <iostream>
using namespace std;

void foo(int x = 4)
{
	cout << x << endl;
}
void foo1(int x = 1, int y = 1)
{
	cout << x << " "<< y << endl;
}
void foo2(int x, int z, int y = 7)
{
	cout << x << " " << y << " "<< z << endl;
}
void Star(int count = 20) //1500
{
	for (int i = 0; i < count; i++)
	{
		cout << "* ";
	}
	cout << endl;
}
void SomeFunction()
{
	static int a = 0;
	a++;
	cout << a << endl;
}
//Перевантаження функцій по типу даних
/*
int MaxElement(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
float MaxElement(float arr[], int size)
{
	float max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
long MaxElement(long arr[], int size)
{
	long max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
char MaxElement(char arr[], int size)
{
	char max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}
*/
//Шаблони функцій
template<typename T_arr>
T_arr MaxElement(T_arr arr[], int size)
{
	T_arr max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}



//Перевантаження функцій по кількості аргументів
double multy(double x)
{
	return x * x;
}
double multy(double x, double y)
{
	return x * y;
}
double multy(double x, double y, double z)
{
	return x * y * z;
}
//double multy(double x = 1.0, double y = 1.0, double z = 1.0, double a = 1.0 )
//{
//	return x * y * z * a;
//}
//template<typename T>
//T Max(T x, T y)
//{
//	return (x > y) ? x : y;
//}
template<typename T1, typename T2>
T1 Max(T1 x, T2 y)
{
	return (x > y) ? x : y;
}
int main()
{
	cout << "Max element : " << Max(5, 8) << endl;
	cout << "Max element : " << Max(3.33, 1.28) << endl;
	cout << "Max element : " << Max('A', 'B') << endl;
	cout << "Max element : " << Max(25.3, 4) << endl;



	cout << "Res = " << multy(5.0) << endl;
	cout << "Res = " << multy(5.0,6.3) << endl;
	cout << "Res = " << multy(5.3,6.1,7.2) << endl;
	//cout << "Res = " << multy(5.3,6.5,7.5,8.4) << endl;
	const int size = 10;
	int arr[size]{10,20,30,40,50,60,70,80,90,100};
	float arr2[size]{1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.2};
	long arr3[size]{99l,88l,77l,66l,55l,44l,33l,22l,11l};
	char arr4[size]{'A','v','G','#','r','R','O','P','W','f'};
	short arr5[size]{ 111,222,333,444,555,6666,777,888,999,9999 };
	cout << "Max element : " << MaxElement(arr, size) << endl;
	cout << "Max element : " << MaxElement(arr2, size) << endl;
	cout << "Max element : " << MaxElement(arr3, size) << endl;
	cout << "Max element : " << MaxElement(arr4, size) << endl;
	cout << "Max element : " << MaxElement(arr5, size) << endl;




	/*
	SomeFunction();
	SomeFunction();
	SomeFunction();
	cout << endl;
	Star(10);
	Star(15);
	Star();





	foo2(2, 2, 2);
	foo2(9,9);


	foo(5);
	foo();
	foo1(2, 6);
	foo1(7);
	foo1();
	*/



}

