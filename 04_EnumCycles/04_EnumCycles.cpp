#include <iostream>
using namespace std;

int main()
{
	//const int USA = 1;
	//const int France = 33;
	//const int Ukraine = 380;
	//const int Italy = 39;
	//const int Australia = 61;

	//enum(const int) — це набір іменованих цілочисельних констант.

	enum countries{ USA = 1 , France = 33, Ukraine = 380, Italy = 39, Australia = 61};
	cout << USA << endl;
	cout << France << endl;
	cout << Ukraine << endl;

	enum coins{ penny = 1, nickel = 5, dime = 10, quarter= 25,half = 50, dollar_coin = 100};

	enum categories {Milk, Chemistry,Bread,Meat, Bakalia};
	cout << Milk << endl;
	cout << Chemistry << endl;
	cout << Bread << endl;
	cout << Meat << endl;
	cout << Bakalia << endl;

	int a;
	categories categor;
	categor = Milk;
	categor = Chemistry;
	categor = Bread;
	categor = Meat;
	categor = Bakalia;


	string category;
	category = "Bread";
	category = "Meat";
	category = "Milk";
	category = "Abracadabra";
	category = "Blablalbla";


	int coin;
	cout << "Enter value of American coin : ";
	cin >> coin;
	switch (coin)
	{
	case penny:cout << "Penny = " << penny << endl;	break;
	case nickel:cout << "nickel = " << nickel << endl;break;
	case dime:cout << "dime = " << dime << endl;break;
	case quarter:cout << "quarter = " << quarter << endl;break;
	case half:cout << "half = " << half << endl;break;
	case dollar_coin:cout << "dollar_coin = " << dollar_coin << endl;break;
	default:cout << "error name this coin" << endl;	break;
	}

	//while (true)//Цикл з передумовою
	//{

	//}
	////Цикл з постумовою
	//do
	//{

	//} while (true);
	//for (int i = 0; i < 10; i++)//Цикл з параметрами
	//{

	//}
	int counter = 0;
	while (counter < 15)
	{
		counter++;
		cout << "I did " << counter << " squat." << endl;
	}

	float a, b, res;
	char key;

	/*
	cout << "Enter number a : "; cin >> a;
	cout << "Enter number b : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - div numbers " << endl;
	cout << " [e] - exit " << endl;
	cin >> key;//' + '
	while (key != 'e') //Ctrl+A   Ctrl+K+F
	{
		switch (key)
		{
		case 'e':
			cout << "Have a nice day! Goodbye!!!" << endl;
			break;
		default:
			cout << "Error choice" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Res = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Res = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Res = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Res = " << res << endl;
			break;

		}
		cout << "Enter number a : "; cin >> a;
		cout << "Enter number b : "; cin >> b;
		cout << "Choose the operation : " << endl;
		cout << " [+] - add numbers " << endl;
		cout << " [-] - sub numbers " << endl;
		cout << " [*] - multy numbers " << endl;
		cout << " [/] - div numbers " << endl;
		cout << " [e] - exit " << endl;
		cin >> key;//' + '
	}
	*/
	/*
	do
	{
		
		cout << " [+] - add numbers " << endl;
		cout << " [-] - sub numbers " << endl;
		cout << " [*] - multy numbers " << endl;
		cout << " [/] - div numbers " << endl;
		cout << " [e] - exit " << endl;
		cout << "Choose the operation : " << endl;
		cin >> key;
		cout << "Enter number a : "; cin >> a;
		cout << "Enter number b : "; cin >> b;
		switch (key)
		{
		case 'e':
			cout << "Have a nice day! Goodbye!!!" << endl;
			break;
		default:
			cout << "Error choice" << endl;
			break;
		case '+':
			res = a + b;
			cout << "Res = " << res << endl;
			break;
		case '-':
			res = a - b;
			cout << "Res = " << res << endl;
			break;
		case '*':
			res = a * b;
			cout << "Res = " << res << endl;
			break;
		case '/':
			res = a / b;
			cout << "Res = " << res << endl;
			break;

		}

	} while (key != 'e');
	*/
	int i = 1;
	while (i <= 10)
	{
		cout << i << " ";
		i++;
	}
	cout << endl;

	int step = 1;
	do
	{
		cout << step << " ";
		step++;
	} while (step <= 10);

	cout << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	int x;
	for ( x = 0; x < 10; x += 2)
	{
		cout << x<< " ";
	}
	cout << endl;
	float y = 1;
	for (   ; y <= 2; y+=0.2)
	{
		cout <<y << " ";
	}
	cout << endl;

	for (int i = 0; i < 15; )
	{
		cout << i << " "; 
		i++;
	}
	cout << endl;

	for (int i = 0;    ; i++)
	{
		cout << i << " ";
		if (i == 10)
			break;
	}


	int magicNumber = 2;
	cout << "\n=========================================" << endl;
	cout << "\t My magic number between 1 and 10" << endl;
	cout << "=========================================" << endl;
	int user;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter number : ";
		cin >> user;
		if (user == magicNumber)
		{
			cout << "Congratulation!!!! You are winner!!!" << endl;
			break;
		}
		else
		{
			cout << "That's not my number!!!!" << endl;
		}

		if (i == 5)
		{
			cout << "You are loser!!!" << endl;
		}

	}

}

