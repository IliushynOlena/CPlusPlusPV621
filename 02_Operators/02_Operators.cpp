#include <iostream>
using namespace std;

int main()
{
	//  + - * / % < > <= >= == !=
	//Унарні —   5 (-5)   ++   -- 
	//Бінарні — + - * / % < > <= >= == !=
	//Тернарні -  ?:


	//int a = 5, b = 3;
	//cout << a + b << endl;
	//cout << a - b << endl;
	//cout << a * b << endl;
	//cout << a / b << endl;
	//cout << a % b << endl;
	//cout << 10 % 9 << endl;//1
	//cout << 3 % 9 << endl;//??  3/9 = 0.3333
	//cout << 4 % 12 << endl;//???
	//

	////Інкремент і декремент  ++ --
	//int c = 8;
	//cout << "c = " << c << endl;
	//c = c + 1;
	//cout << "c = " << c << endl;
	//c++;//c = c + 1  postfix form increment
	//cout << "c = " << c << endl;
	//++c;// prefix form increment
	//cout << "c = " << c << endl;

	//c = c - 1;
	//cout << "c = " << c << endl;
	//c--; //postfix form decrement
	//cout << "c = " << c << endl;
	//--c;//prefix form decrement
	//cout << "c = " << c << endl;

	//int d = 3;
	//cout << d++ << endl;//-----------------> 
	//cout << ++d << endl;// <------------------
	//cout << d << endl;

	//d = d + 12;
	//cout << d << endl;
	//d += 12;
	//cout << d << endl;
	//d -= 12;
	//cout << d << endl;
	//d *=12;
	//cout << d << endl;
	//d /= 12;
	//cout << d << endl;



	////Звужуюче перетворення
	////1. Неявне перетворення.
	//int A = 23.5;
	//cout << "A = " << A << endl;

	////Розширююче перетворення.
	//unsigned int salary = 3000000000;
	//cout << salary << endl;

	////2. Явне перетворення (int)num
	//double num = 2.45;//2.4500000000000001
	//cout << num << endl;
	//float num2 = (int)num;//2.45000001
	//cout << num2 << endl;

	////1. Оператори порівняння; < > <= >= 
	////2. Оператори рівності;   ==  !=
	////3. Логічні оператори об'єднання та негативна інверсія. &&(and), || (or)

	//cout << (5 > 2) << endl;
	//cout << (5 < 2) << endl;
	//cout << (5 == 2) << endl;
	//cout << (5 != 2) << endl;

	//if (ymova)
	//{
	//	dia1;
	//}
	//else
	//{
	//	dia2;
	//}
	//int a, b;
	//float res;
	//cout << "Enter number a : "; cin >> a;
	//cout << "Enter number b : "; cin >> b;
	//if (b == 0) 
	//{
	//	cout << "Can't divide by zero!" << endl;
	//}
	//else 
	//{
	//	res = (float)a / b;
	//	cout << "Res : " << a << " / " << b << " = " << res << endl;

	//}
	////тернарного оператора  ymova ? true : false;
	//(b == 0) ? cout << "Error" << endl :
	//	cout << "Res : " << a << " / " << b << " = " <<(float) a / b << endl;


/*
	
	int day;
	cout << "Enter number day : "; cin >> day;
	if (day == 1)
	{
		cout << "Monday" << endl;
	}
	else if (day == 2)
	{
		cout << "Tuesday" << endl;
	}
	else if (day == 3)
	{
		cout << "Wednesday" << endl;
	}
	else {
		cout << "Error number day" << endl;
	}

	if (day >= 1 && day <= 5)//&& - and
	{
		cout << "Work day" << endl;

	}
	else if (day == 6  || day == 7)// || - or
	{
		cout << "Weekend" << endl;
	}

*/
	float a, b, res;
	char key;
	cout << "Enter number a : "; cin >> a;
	cout << "Enter number b : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - div numbers " << endl;
	cin >> key;
	if (key == '+') 
	{
		res = a + b;
		cout << "Res = " << res << endl;
	}
	else if (key == '-')
	{
		res = a - b;
		cout << "Res = " << res << endl;
	}
	else if (key == '*')
	{
		res = a * b;
		cout << "Res = " << res << endl;
	}
	else if (key == '/')
	{
		res = a / b;
		cout << "Res = " << res << endl;
	}
	else
	{
		cout << "Error choice" << endl;
	}


	cout << "Enter number a : "; cin >> a;
	cout << "Enter number b : "; cin >> b;
	cout << "Choose the operation : " << endl;
	cout << " [+] - add numbers " << endl;
	cout << " [-] - sub numbers " << endl;
	cout << " [*] - multy numbers " << endl;
	cout << " [/] - div numbers " << endl;
	cin >> key;//' + '
	switch (key)
	{
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


	int day;
	cout << "Enter number day : "; cin >> day;
	switch (day)
	{
	case 1:	case 2:	case 3:	case 4:	case 5:
		cout << "Work day " << endl;
		break;


	default:
		break;
	}


   
}

