
#include <iostream>
using namespace std;

void Foo(int a)
{
    if (a == 0)
    {
        return;//break;
    }
    cout << "Hello --> " << a << endl;
    a--;
    Foo(a);
}
int Summa(int arr[], int size) {
    int summa = 0;
    for (int i = 0; i < size; i++)
    {
        //0 + 1 = 1  1 + 8 = 9   9 + 4 = 12
        summa += arr[i];
    }
    return summa;
}
int SummaREcursion(int arr[], int size, int index = 9)
{
    if (index == size - 1)
    {
        return arr[index] ;//
    }
    // 1 + 8 + 4 + 5 + 6 + 3 + 7 + 9 +11  + 2
    //                                13
    // 56    56    47    43     38     32   29    22
    return arr[index] + SummaREcursion(arr, size, index + 1);
}

void InitArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 40 - 20;
    }
}
void ShowArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void QuickSort(int arr[], int B, int E)
{
    int i = B, j = E;
    int temp, p;
    p = arr[(B + E) / 2];
    do
    {
        //{ 1,2,4,5,  5 ,3,  7   ,9, 8  , 11,21 };
        while (arr[i] < p) i++;
        while (arr[j] > p)j--;
        if (i <= j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);
    if (B < j)QuickSort(arr, B, j);
    if (i < E)QuickSort(arr, i, E);
}
int BinarySearch(int arr[], int size, int key)
{
    int B = 0, E = size - 1;
    while (true)
    {
        int p = (B + E) / 2;//4
        if (key > arr[p])
        {
            B = p + 1;
        }
        else if (key < arr[p])
        {
            E = p - 1;
        }
        else if (key == arr[p])return p;
        if (B > E) return -1;
    }
}
int main()
{
    Foo(10);
    const int size = 10;
    int arr[size] = { 1,8,4,5,6,3,7,9,11,2 };
    int summa = Summa(arr, size);
    cout << "Summa = " << summa << endl;
    summa = SummaREcursion(arr, size, 0);
    cout << "Summa = " << summa << endl;

    InitArray(arr, size);
    ShowArray(arr, size);
    QuickSort(arr, 0, size - 1);
    ShowArray(arr, size);
    int search_num, index_find;
    cout << "Enter number to search : "; cin >> search_num;
    index_find = BinarySearch(arr, size, search_num);
    if (index_find != -1)
    {
        cout << "Number [" << search_num << "] find in index [" << index_find << "]" << endl;
    }
    else
    {
        cout << "Number " << search_num << " not found!" << endl;
    }
   
}

