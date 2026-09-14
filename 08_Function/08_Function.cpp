#include <iostream>
using namespace std;

void Hello();//prototype functions
void sayHello()
{
    cout << "Hello world" << endl;
}

void Star(int count) //1500
{
    for (int i = 0; i < count; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
void AnyLine(char symbol, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << symbol << " ";
    }
    cout << endl;
}

int MyPow(int number, int step)// 2**5 2*2*2*2*2
{
    int pow = 1;
    for (int i = 0; i < step; i++)
    {
        pow *= number;
    }
    //cout << "Pow number " << number << " is " << pow << endl;
    return pow;
}
int Max(int a, int b) {
   /* if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }*/
    return (a > b) ?  a :  b;
}
int Min(int a, int b) {
    return (a < b) ? a : b;
}
void Second()
{
    cout << "Second function working...." << endl;
}
void First()
{
   
    cout << "First function start" << endl;
    Second();
    cout << "First function end" << endl;

}
void Change(int a, int b)
{
    cout << "a = " << a << " . b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << " . b = " << b << endl;
}
void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //900%90= 0.....89   + 10
        //rand() % 90  --> 
        arr[i] = rand() % 90 + 10;//
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
int SummaArray(int arr[], int size)
{
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        summa += arr[i];
    }
    return summa;
}
void InitMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = rand() % 90 + 10;
        }
    }
}
void ShowMatrix(int arr[][7], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int A = 100;//gloabal variable 

void setA()
{
    A = 99;
}
void Show()
{
    cout << A << endl;
}
void setSecond()
{
    int A = 77;
    cout << A << endl;
}
int main()
{
    Show();
    setA();
    Show();
    setSecond();
    Show();
    //int A = 10;//local variable
    cout << A << endl;
    cout << ::A << endl;
    ::A = 33;
    cout << ::A << endl;


    //int a = 5;
    //if (a == 5)
    //{
    //    int b = 7;
    //    cout << b << endl;
    //}
    //cout << b << endl;






    const int rows = 5;
    const int cols = 7;
    int array[rows][cols];
    InitMatrix(array, rows, cols);
    ShowMatrix(array, rows, cols);





    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    int summa = SummaArray(arr, size);
    cout << "Summa elements = " << summa << endl;


    int a = 4, b = 7;
    cout << "a = " << a << " . b = " << b << endl;
    Change(a, b);
    cout << "a = " << a << " . b = " << b << endl;
    First();





    cout << "Min element = " << Min(5, 8) << endl;
    cout << "Min element = " << Min(15, 4) << endl;
    cout << "Max element = " << Max(5, 8) << endl;
    cout << "Max element = " << Max(15, 4) << endl;
    cout << "Res = " << MyPow(2, 2) << endl;
    int res = MyPow(2, 3);
    cout << "Res = " << res << endl;
    MyPow(2, 5);
    AnyLine('$' ,65);
    AnyLine('*' ,15);
    AnyLine('@' ,74);
    Star(10);
    Star(15);
    Star(25);
    //Функція оголошується до функції main.
    sayHello();
    sayHello();
    sayHello();
    sayHello();
    //Функція оголошується за допомогою прототипу
    Hello(); 



}

void Hello()
{
    cout << "Hello world" << endl;
}

