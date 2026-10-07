#include <iostream>
#include <fstream>
using namespace std;

struct Book{};
const char* filename = "D://HumansDatabase.txt";
struct Human 
{
private:
    char name[50];
    char surname[50];
    int age;
public:
    void Show()
    {
        cout << "Name :" << name << "\nSurname : " << surname << "\nAge : "
            << age << endl;
    }
    void Fill()
    {
        cout << "Enter name : "; cin >> name;
        cout << "Enter surname : "; cin >> surname;
        cout << "Enter age : "; cin >> age;
    }
    void SaveToFile()
    {
        ofstream out(filename, ios_base::app);
        out << name;
        out << ':';
        out << surname;
        out << ':';
        out << age;
        out << '|';
        out.close();
    }
    void CopyFromFile(char* nameF, char* surnameF, int ageF)
    {
        strcpy_s(name, nameF);
        strcpy_s(surname, surnameF);
        age = ageF;
    }
};


enum MENU{ EXIT, ADD, SHOW };
int Menu()
{
    int choice;
    cout << "1. Add new HUman" << endl;
    cout << "2. Show all humans" << endl;
    cout << "0. Exit" << endl;
    cin >> choice;
    return choice;
}
void AddHuman(Human *& arr, int &size)
{
    Human* temp = new Human[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size].Fill();
    temp[size].SaveToFile();
    delete[]arr;
    size++;
    arr = temp;
    
}
void ShowAll(Human* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i].Show();
        cout << endl;
    }
}
void ReadFromFile(Human*& arr, int& size)
{
    ifstream in(filename, ios_base::in);
    char buff_name[250], buff_surname[250], buff_age[250];
    while (!in.eof())
    {
        in.getline(buff_name, 250, ':');
        if (in.eof())break;
        in.getline(buff_surname, 250, ':');
        in.getline(buff_age, 250, '|');

        int age = atoi(buff_age);

        Human readHuman;
        readHuman.CopyFromFile(buff_name, buff_surname, age);

        Human* temp = new Human[size + 1];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        temp[size] = readHuman;
        delete[]arr;
        size++;
        arr = temp;
    }
}
int main()
{
    int size = 0;
    Human* humans = new Human[size];

    ReadFromFile(humans, size);
    bool isExit = false;
    while (!isExit)
    {
        switch (Menu())
        {
        case EXIT: isExit = true; break;
        case ADD: AddHuman(humans, size); break;
        case SHOW:ShowAll(humans, size); break;
        }

    }


    //Human human{};
    //human.Fill();
    //human.Show();
    //human.
    //name.txt
    //database.png

    //iostream   cout <<    cin << 

    //fstream  ofstream out <<   ifstream in >> 

    // text.txt --> open 
    //read file
    //write file
    //close file
    Book book;
    //ofstream out("text.txt", ios_base::out);
   /* ofstream out("text.txt", ios_base::app);
    if (out.is_open())
    {
        out << "Hello world" << endl;
        out << "Hello world" << endl;
        out << "Hello world" << endl;
        out << "Hello world" << endl;
        cout << "Save to file" << endl;
    }
    out.close();*/

    //ifstream in("text.txt", ios_base::in);
    //char buff[250];

    //while (!in.eof())
    //{
    //    in.getline(buff, 250); //in >> buff;
    //    cout << buff << endl;
    //}
   

    //in.close();


      




}

