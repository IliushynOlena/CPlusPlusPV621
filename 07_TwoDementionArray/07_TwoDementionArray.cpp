#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    srand(time(NULL));
    
    int a;
    a = rand();
    cout << a << endl;
    a = rand();//0.......32767
    cout << a << endl;
    a = rand();
    cout << a << endl;
    a = rand();
    cout << a << endl;

    for (int i = 0; i < 25; i++)
    {
        a = rand()%10;//0......9
        cout << a << " ";
    }
    cout << endl;
    for (int i = 0; i < 25; i++)
    {
        a = rand() % 100;//0......99
        cout << a << " ";
    }
    cout << endl;
    for (int i = 0; i < 25; i++)
    {
        a = rand() % 50;//0......49  //549%50
        cout << a << " ";
    }
    cout << endl;
    // 0.....x-1   ---> rand()%x;    

    //10......99
    //x  .... y ---> (y - x) + x
    for (int i = 0; i < 25; i++)
    {
        //a = rand() % 100;//0......99
        //a = rand() % 10 + 90;//0...9     90....99
        a = rand() % 90 + 10 ;// 0.....89
        cout << a << " ";
    }
    cout << endl;
    // ---------------  1.......12  
    for (int i = 0; i < 25; i++)
    {
        a = rand() % 12 + 1;
        cout << a << " ";
    }
    cout << endl;
    // ---------------  9.......12  
    for (int i = 0; i < 25; i++)
    {
        a = rand() % 4 + 9;// rand() % 3 -- 0 1 2 3
        cout << a << " ";
    }
    cout << endl;


    const int size = 10;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    cout << endl;

    const int rows = 5;
    const int cols = 6;
    int array[rows][cols]{};
    int max = array[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            //array[i][j] = rand() % 90 + 10;
            array[i][j] = rand() % 100;
            cout << left<< setw(4)<< array[i][j] << " ";
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
        cout << endl;
    }
    cout << "MAx element in the matrix "<< max << endl;
    cout << endl;
    cout << "---------------- Max element in the every line ------------" << endl;
    for (int i = 0; i < rows; i++)
    {
        max = array[i][0];
        for (int j = 0; j < cols; j++)
        {
            cout << left << setw(4) << array[i][j] << " ";
            if (array[i][j] > max)
            {
                max = array[i][j];
            }
        }
        cout << "Max element in row : " << i << " is --> " << max << endl;
        cout << endl;
    }

    //int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    //int array1[3][3] = { {1},{4,5},{7,8,9} };
    int array1[3][3] = { 1,4,5,7,8,9 };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }




}

