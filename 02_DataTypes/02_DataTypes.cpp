#include <iostream>
using namespace std;

int main()
{
    int age = 15;
    int Age = 28;
    int age3 = 65;
    //int 4age = 77;
    int ageofman = 55;
    int age_of_man = 44;
    int ageOfMan = 26;
    //int int = 8;
    //int age = 16;
   // cout << age;
    
    int a = 0;
    const float PI = 3.14;
    double b = 3.33333333;
    cout << PI << endl;
    cout << "PI = " << PI << ".\n Age of man : " << ageOfMan << endl;
    //PI = 5.55;error
    cout << "PI = " << PI << ".\n Age of man : " << ageOfMan << endl;

    //count hours in 2000 year
    int dayInYear_2000 = 366;
    const int hourInDay = 24;
    int hourIn_2000Year;
    hourIn_2000Year = hourInDay * dayInYear_2000;
    cout << "Hours in 2000 year " << hourIn_2000Year << endl;



    float discount = 0.05;
    float costProduct = 34.99;
    int count = 5;

    cout << "Enter cost product : ";
    cin >> costProduct;
    cout << "Enter count : ";
    cin >> count;


    float price = count * costProduct - count * costProduct * discount;
    cout << "You need to pay : " << price << "grn" << endl;

    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << "num = " << num << endl;



}

