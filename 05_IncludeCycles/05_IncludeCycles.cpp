#include <iostream>
using namespace std;

int main()
{
   
    // F10


   /* for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "\n______________________________________\n" << endl;
    }*/

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "---------------- while -----------------" << endl;
    int lenght = 10;
    int line_count = 1;
    int count_star;

    while (line_count <= lenght)
    {
        count_star = 1;
        while (count_star <= lenght)
        {
            cout << "* ";
            count_star++;
        }
        cout << endl;
        line_count++;
    }
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }

            
        }
        cout << endl;
    }
    cout << "-----------------------------------------" << endl;
    int N = 10;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j == N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }


        }
        cout << endl;
    }

    N = 11;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= j && i+j >= N -1)
            {
               cout << "|===|";
            }
            else
            {
                cout << "     ";
            }
        }
        cout << endl;

    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "|###|";
        }
        cout << endl;
    }

    // F10 - start debugger from first line
    // F5 - start debugger with break point
    int a = 0, b = 0;
    cout << "Enter a and b : ";
    cin >> a >> b;
    float res = (float)a / b;
    cout << "Res = " << res << endl;


    for (int i = 0; i < 333; i++)
    {
        cout << "Result = " << i << endl;
    }


}

