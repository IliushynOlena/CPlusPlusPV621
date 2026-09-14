//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//
//    srand(time(NULL));
//    
//    int a;
//    a = rand();
//    cout << a << endl;
//    a = rand();//0.......32767  2514%10 ,,, 0...9   2537%100 -> 0...99
//    cout << a << endl;
//    a = rand();
//    cout << a << endl;
//    a = rand();
//    cout << a << endl;
//
//    for (int i = 0; i < 25; i++)
//    {
//        a = rand()%10;//0......9
//        cout << a << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < 25; i++)
//    {
//        a = rand() % 100;//0......99
//        cout << a << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < 25; i++)
//    {
//        a = rand() % 50;//0......49  //549%50
//        cout << a << " ";
//    }
//    cout << endl;
//    // 0.....x-1   ---> rand()%x;    
//
//    //10......99
//    //x  .... y ---> (y - x) + x
//    for (int i = 0; i < 25; i++)
//    {
//        //a = rand() % 100;//0......99
//        //a = rand() % 10 + 90;//0...9     90....99
//        a = rand() % 90 + 10 ;// 0.....89
//        cout << a << " ";
//    }
//    cout << endl;
//    // ---------------  1.......12  
//    for (int i = 0; i < 25; i++)
//    {
//        a = rand() % 12 + 1;
//        cout << a << " ";
//    }
//    cout << endl;
//    // ---------------  9.......12  
//    for (int i = 0; i < 25; i++)
//    {
//        a = rand() % 4 + 9;// rand() % 3 -- 0 1 2 3
//        cout << a << " ";
//    }
//    cout << endl;
//
//
//    const int size = 10;
//    int arr[size];
//
//    for (int i = 0; i < size; i++)
//    {
//        arr[i] = rand() % 100;
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    cout << endl;
//    cout << endl;
//
//    const int rows = 5;
//    const int cols = 6;
//    int array[rows][cols]{};
//    int max = array[0][0];
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            //array[i][j] = rand() % 90 + 10;
//            array[i][j] = rand() % 100;
//            cout << left<< setw(4)<< array[i][j] << " ";
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << "MAx element in the matrix "<< max << endl;
//    cout << endl;
//    cout << "---------------- Max element in the every line ------------" << endl;
//    for (int i = 0; i < rows; i++)
//    {
//        max = array[i][0];
//        for (int j = 0; j < cols; j++)
//        {
//            cout << left << setw(4) << array[i][j] << " ";
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//        }
//        cout << "Max element in row : " << i << " is --> " << max << endl;
//        cout << endl;
//    }
//
//    //int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    //int array1[3][3] = { {1},{4,5},{7,8,9} };
//    int array1[3][3] = { 1,4,5,7,8,9 };
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            cout << array1[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//
//
//
//}
//
#include <iostream>
using namespace std;

int main()
{

	// // F10


	 //for (int i = 1; i <= 10; i++)
	 //{
	 //    for (int j = 1; j <= 10; j++)
	 //    {
	 //        cout << i << " * " << j << " = " << i * j << endl;
	 //    }
	 //    cout << "\n______________________________________\n" << endl;
	 //}

	 //for (int i = 0; i < 10; i++)
	 //{
	 //    for (int j = 0; j < 10; j++)
	 //    {
	 //        cout << "* ";
	 //    }
	 //    cout << endl;
	 //}
	// cout << "---------------- while -----------------" << endl;
	// int lenght = 10;
	// int line_count = 1;
	// int count_star;

	// while (line_count <= lenght)
	// {
	//     count_star = 1;
	//     while (count_star <= lenght)
	//     {
	//         cout << "* ";
	//         count_star++;
	//     }
	//     cout << endl;
	//     line_count++;
	// }
	// cout << "-----------------------------------------" << endl;
	/* for (int i = 0; i < 10; i++)
	 {
		 for (int j = 0; j < 10; j++)
		 {
			 cout << "* ";
		 }
		 cout << endl;
	 }*/
	 // cout << "-----------------------------------------" << endl;
	  //for (int i = 0; i < 10; i++)
	  //{
	  //    for (int j = 0; j < 15; j++)
	  //    {
	  //        cout << "* ";
	  //    }
	  //    cout << endl;
	  //}
	 // cout << "-----------------------------------------" << endl;
	 /* for (int i = 0; i < 10; i++)
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
	  }*/



	  // cout << "-----------------------------------------" << endl;
	 /*  int N = 10;
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
	   }*/

	   //int N = 11;

	   // for (int i = 0; i < N; i++)
	   // {
	   //     for (int j = 0; j < N; j++)
	   //     {
	   //         if (i >= j && i + j >= N - 1)
	   //         {
	   //             cout << "|===|";
	   //         }
	   //         else
	   //         {
	   //             cout << "     ";
	   //         }
	   //     }
	   //     cout << endl;
	   // }

		//for (int i = 0; i < 7; i++)
		//{
		//    for (int j = 0; j < N; j++)
		//    {
		//        cout << "|###|";
		//    }
		//    cout << endl;

		//}

	   // // F10 - start debugger from first line
	   // // F5 - start debugger with break point
	   // int a = 0, b = 0;
	   // cout << "Enter a and b : ";
	   // cin >> a >> b;
	   // float res = (float)a / b;
	   // cout << "Res = " << res << endl;


	 /*   for (int i = 0; i < 333; i++)
		{
			cout << "Result = " << i << endl;
		}*/



	cout << "1" << endl;


	int N = 11;

	for (int i = N; i >= 1; i--)
	{
		for (int j = 1; j <= N - i; j++)
			cout << "  ";

		for (int j = 1; j <= i; j++)
			cout << " *";

		cout << endl;

	}

	cout << "2" << endl;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << " *";

		cout << endl;

	}

	cout << "3" << endl;


	for (int i = 6; i >= 1; i--)
	{
		for (int j = 1; j <= 6 - i; j++)
			cout << "  ";

		for (int j = 1; j <= 2 * i - 1; j++)
			cout << " *";

		cout << endl;
	}


	cout << " 4 " << endl;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j && i + j >= N - 1)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;

	}

	cout << " 5 " << endl;

	for (int i = N; i >= 1; i -= 2)
	{
		for (int j = 1; j <= (N - i) / 2; j++)
			cout << "  ";

		for (int j = 1; j <= i; j++)
			cout << " *";

		cout << endl;
	}
	for (int i = 6; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j && i + j >= N - 1)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " 6 " << endl;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (j < i && j < N - 1 - i)
			{
				cout << " *";
			}
			else if (j > i && j > N - 1 - i)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}



	cout << " 7 " << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (j < i && j < N - 1 - i)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}


	cout << " 8 " << endl;

	const int rows = 10;
	const int cols = 10;
	int arr[rows][cols];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = rand() % 90 + 10;
			if (j > i && j > N - 1 - i)
			{
				cout << arr[i][j]<< " ";
				//if(){}
			}
			else
			{
				cout << "   ";
			}
		}
		cout << endl;
	}

	cout << " 9 " << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j <= 10 - i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;

	}

	cout << " 10 " << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j >= 10 - i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}

	cout << "Home work 1" << endl;

	int number;
	int choice;

	cout << "Please enter a multi-digit number." << endl;
	cin >> number;

	cout << "1 - Number of digits " << endl;
	cout << "2 - Sum " << endl;
	cout << "3 - Average value  " << endl;
	cout << "4 - Number of zero " << endl;

	cout << "Enter your choice: " << endl;
	cin >> choice;

	int count = 0;
	int sum = 0;
	int zero = 0;

	while (number != 0)
	{
		int digit = number % 10;
		count++;

		sum += digit;

		if (digit == 0)
			zero++;

		number = number / 10;
	}
	switch (choice)
	{
	case 1:
		cout << "Number of digits: " << count << endl;
		break;
	case 2:
		cout << "Sum: " << sum << endl;
		break;
	case 3:
		cout << "Average value: " << (double)sum / count << endl;
		break;
	case 4:
		cout << "Number of zero: " << zero << endl;
		break;
	default:
		cout << "Invalid input! " << endl;

	}

	cout << endl;
	cout << "Home work 2" << endl;
	cout << endl;


	int a = 3;
	//cout << "Enter the cell size: ";
	//cin >> a;

	for (int i = 0; i < 2 * a; i++)
	{
		for (int j = 0; j < 5 * a; j++)
		{
			if ((i / a + j / a) % 2 == 0)
				cout << "*";
			else
				cout << "-";
		}
		cout << endl;

	}

































































}