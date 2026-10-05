#include <iostream>
using namespace std;

struct Date
{
	int day;  //4
	int month;//4
	int year; //4
	char month_name[15];//15   27
};
struct Worker
{
	char name[20];
	char surname[20];
	char position[20];
	char department[20];
	float salary;  //84 + 52  136
	Date birthdate;
	Date hiredate;
};

void ShowWorker(Worker &worker)
{
	cout << "\nName : " << worker.name << endl;
	cout << "Surname : " << worker.surname << endl;
	cout << "Position : " << worker.position << endl;
	cout << "Department : " << worker.department << endl;
	cout << "Salary : " << worker.salary << endl;

	cout << "Birthdate : " << worker.birthdate.day<<
		"/"<< worker.birthdate.month<<"/"<< worker.birthdate.year << endl;

	cout << "HireDAte : " << worker.hiredate.day <<
		"/" << worker.hiredate.month << "/" << worker.hiredate.year << endl << endl;

}
Worker Input(Worker worker)
{
	cout << "Enter name : "; cin >> worker.name;
	cout << "Enter surname : "; cin >> worker.surname;
	cout << "Enter position : "; cin >> worker.position;
	cout << "Enter department : "; cin >> worker.department;
	cout << "Enter salary : "; cin >> worker.salary;

	cout << "Birthday day "; cin >> worker.birthdate.day;
	cout << "Birthday month "; cin >> worker.birthdate.month;
	cout << "Birthday year "; cin >> worker.birthdate.year;

	cout << "Hiredate day "; cin >> worker.hiredate.day;
	cout << "Hiredate month "; cin >> worker.hiredate.month;
	cout << "Hiredate year "; cin >> worker.hiredate.year;
	return worker;
}
struct Car
{
	char mark[15];
	float volume;

};

//}
int main()
{
	Car cars[10] = {
		{"BMV", 3.0},
		{"BMV", 3.0},
		{"BMV", 3.0},
		{"BMV", 3.0},
		{"BMV", 3.0},
		{"BMV", 3.0},
		{"BMV", 3.0},
	}
	//float int char long short long long double bool

	Date birthdate = { 10, 5, 2000, "May" };
	cout << "------------ My Birthday -----------------" << endl;
	cout << "Day : " << birthdate.day << endl;
	cout << "Month : " << birthdate.month << endl;
	cout << "Year : " << birthdate.year << endl;
	cout << "Month name : " << birthdate.month_name << endl;

	/*Date friend_birthday;
	cout << "Enter day : "; cin >> friend_birthday.day;
	cout << "Enter month : "; cin >> friend_birthday.month;
	cout << "Enter year : "; cin >> friend_birthday.year;
	cout << "Enter month name : "; cin >> friend_birthday.month_name;
	cout << "------------ Friend Birthday -----------------" << endl;
	cout << "Day : " << friend_birthday.day << endl;
	cout << "Month : " << friend_birthday.month << endl;
	cout << "Year : " << friend_birthday.year << endl;
	cout << "Month name : " << friend_birthday.month_name << endl;*/

	Worker worker = { "Oleg", "Oliunuk", "manager","finance",45999.99,
		{5,4,2007},{7,7,2026} };
	ShowWorker(worker);

	Worker read_worker{};
	read_worker = Input(read_worker);
	ShowWorker(read_worker);


	Date event = { 26,10,2026,"October" };

	cout << event.day << endl;
	cout << event.month << endl;
	cout << event.year << endl;
	cout << event.month_name << endl;

	Date empty;
	empty = event;
	cout << empty.day << endl;
	cout << empty.month << endl;
	cout << empty.year << endl;
	cout << empty.month_name << endl;

	Date* ptr = nullptr;
	ptr = &event;
	cout << (*ptr).day << endl;
	cout << ptr->month << endl;;
	cout << ptr->year << endl;;
	cout << ptr->month_name << endl;;

	int a;//  4b
	char b;//  1b
	double c;// 8b
	int* p;//  4b
	cout << "sizeof int " << sizeof(int) << endl;
	cout << "sizeof a " << sizeof(a) << endl;
	cout << "sizeof b " << sizeof(b) << endl;
	cout << "sizeof c " << sizeof(c) << endl;
	cout << "sizeof p" << sizeof(p) << endl;
	cout << "sizeof p" << sizeof(double *) << endl;
	cout << "sizeof p" << sizeof(float *) << endl;
	cout << "sizeof p" << sizeof(char *) << endl;
	cout << "sizeof event" << sizeof(event) << endl;
	cout << "sizeof worker" << sizeof(worker) << endl;


}

