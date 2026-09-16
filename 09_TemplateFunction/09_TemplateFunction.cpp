//#include <iostream>
//using namespace std;
//
//void foo(int x = 4)
//{
//	cout << x << endl;
//}
//void foo1(int x = 1, int y = 1)
//{
//	cout << x << " "<< y << endl;
//}
//void foo2(int x, int z, int y = 7)
//{
//	cout << x << " " << y << " "<< z << endl;
//}
//void Star(int count = 20) //1500
//{
//	for (int i = 0; i < count; i++)
//	{
//		cout << "* ";
//	}
//	cout << endl;
//}
//void SomeFunction()
//{
//	static int a = 0;
//	a++;
//	cout << a << endl;
//}
////Перевантаження функцій по типу даних
///*
//int MaxElement(int arr[], int size)
//{
//	int max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//float MaxElement(float arr[], int size)
//{
//	float max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//long MaxElement(long arr[], int size)
//{
//	long max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//char MaxElement(char arr[], int size)
//{
//	char max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//*/
////Шаблони функцій
//template<typename T_arr>
//T_arr MaxElement(T_arr arr[], int size)
//{
//	T_arr max = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	return max;
//}
//
//
//
////Перевантаження функцій по кількості аргументів
//double multy(double x)
//{
//	return x * x;
//}
//double multy(double x, double y)
//{
//	return x * y;
//}
//double multy(double x, double y, double z)
//{
//	return x * y * z;
//}
////double multy(double x = 1.0, double y = 1.0, double z = 1.0, double a = 1.0 )
////{
////	return x * y * z * a;
////}
////template<typename T>
////T Max(T x, T y)
////{
////	return (x > y) ? x : y;
////}
//template<typename T1, typename T2>
//T1 Max(T1 x, T2 y)
//{
//	return (x > y) ? x : y;
//}
//int main()
//{
//	cout << "Max element : " << Max(5, 8) << endl;
//	cout << "Max element : " << Max(3.33, 1.28) << endl;
//	cout << "Max element : " << Max('A', 'B') << endl;
//	cout << "Max element : " << Max(25.3, 4) << endl;
//
//
//
//	cout << "Res = " << multy(5.0) << endl;
//	cout << "Res = " << multy(5.0,6.3) << endl;
//	cout << "Res = " << multy(5.3,6.1,7.2) << endl;
//	//cout << "Res = " << multy(5.3,6.5,7.5,8.4) << endl;
//	const int size = 10;
//	int arr[size]{10,20,30,40,50,60,70,80,90,100};
//	float arr2[size]{1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2.2};
//	long arr3[size]{99l,88l,77l,66l,55l,44l,33l,22l,11l};
//	char arr4[size]{'A','v','G','#','r','R','O','P','W','f'};
//	short arr5[size]{ 111,222,333,444,555,6666,777,888,999,9999 };
//	cout << "Max element : " << MaxElement(arr, size) << endl;
//	cout << "Max element : " << MaxElement(arr2, size) << endl;
//	cout << "Max element : " << MaxElement(arr3, size) << endl;
//	cout << "Max element : " << MaxElement(arr4, size) << endl;
//	cout << "Max element : " << MaxElement(arr5, size) << endl;
//
//
//
//
//	/*
//	SomeFunction();
//	SomeFunction();
//	SomeFunction();
//	cout << endl;
//	Star(10);
//	Star(15);
//	Star();
//
//
//
//
//
//	foo2(2, 2, 2);
//	foo2(9,9);
//
//
//	foo(5);
//	foo();
//	foo1(2, 6);
//	foo1(7);
//	foo1();
//	*/
//
//
//
//}
//

#include <iostream>
using namespace std;

//template<typename tarray>
//tarray maxelement(tarray arr[], tarray size)
//{
//    int max = arr[0];
//    for (int i = 0; i < size; i++)
//    {
//        if (arr[i] > max) max = arr[i];
//    }
//    return max;
//}

template <typename ifd>
ifd maxelement(ifd a, ifd b)
{
    if (a > b)
        cout << a << " > " << b;
    else
        cout << b << " > " << a;
    return a, b;
}

template <typename serarif>
serarif seredneArif(serarif arrr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arrr[i];
    }
    result = result / size;
    cout << result;

    return result;
}

template <typename T_coll>
void minMaxDvoVimir(T_coll arr[][10], int rows, int columns)
{
    T_coll max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 99;

            cout << arr[i][j] << " ";
            if (arr[i][j] > max)max = arr[i][j];
        }
        cout << endl;
    }
        cout << "Max "<< max << endl;
}

int main()
{
    srand(time(0));
    /*const int size = 10;
    int arr[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    cout << "max element in array - " << maxelement(arr, size);*/


    const int size = 10;
    const int row = 5;
    const int col = 10;
    int arr1[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    float arr2[row][col] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    // first exercise
    cout << "first exercise\n";
    maxelement(1, 3);
    cout << "\n";
    maxelement(7.4, 2.2);
    cout << "\n";
    maxelement(1.564345463346, 1.3423543657644234324);
    cout << "\n\n";

    // second exercise
    cout << "second exercise\n";
    seredneArif(arr1, size);
    cout << "\n\n";

    // third exercise
    cout << "third exercise\n";
    minMaxDvoVimir(arr2, row, col);







}
