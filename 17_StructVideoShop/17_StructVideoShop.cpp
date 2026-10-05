#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

struct  Film
{
    unsigned short id;
    char name[50];
    char director[50];
    char genre[50];
    float rating;
    float price;
};
void ShowOneFilm(Film &film)
{
    cout << "Id : " << film.id << endl;
    cout << "Name : " << film.name << endl;
    cout << "Director : " << film.director << endl;
    cout << "Genre : " << film.genre << endl;
    cout << "Rating : " << film.rating << endl;
    cout << "Price : " << film.price << endl;
}
void PrintAllFilms(Film *films, int size)
{
    for (int i = 0; i < size; i++)
    {
        ShowOneFilm(films[i]);
        cout << endl;
    }
}
void SearchByName(Film* films, int size, char name[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].name, name) == 0) {
            ShowOneFilm(films[i]);
        }
    }

}
void SearchByDirector(Film* films, int size, char director[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].director, director) == 0) {
            ShowOneFilm(films[i]);
        }
    }
}
void SearchByGenre(Film* films, int size, char genre[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].genre, genre) == 0) {
            ShowOneFilm(films[i]);
        }
    }
}
void SearchMostPopularByGenre(Film* films, int size, char genre[])
{
    float max = 0;
    int max_index = 0;
    for (int i = 0; i < size; i++)
    {
        if (strcmp(films[i].genre, genre) == 0) {
            if (films[i].rating > max)
            {
                max = films[i].rating;
                max_index = i;
            }
        }
    }
    ShowOneFilm(films[max_index]);
}
void ChangeFilm(Film* films, int size, int id)
{
    for (int i = 0; i < size; i++)
    {
        if (films[i].id == id) {
            ShowOneFilm(films[i]);
            cout << "Enter new rating : ";
            cin >> films[i].rating;
            cout << "Enter new price : ";
            cin >> films[i].price;
        }
    }
}
int main()
{
    //test.txt    file.json
    ofstream out;//write to file  ---> cout
    //out.open("text.txt", ios_base::out);
    //out.open("text.txt", ios_base::app);

    //out << "Hello world"<< endl;

   // out.close();

    char buff[250];
    ifstream in;//read from file   --> cin
    in.open("text11.txt", ios_base::in);
    if (in.is_open())
    {
        while (!in.eof())
        {
            in.getline(buff, 250);//in >> buff;
            cout << buff << endl;
        }
    }
    else
    {
        cout << "File not found" << endl;
    }
   
   
    in.close();



    /*
    const int size = 6;
    Film films[size] = {
        {0, "Back to future","Tom Kruise", "Fantasy", 8.2, 102.99},
        {1, "Inception", "Christopher Nolan", "Sci-Fi", 8.8, 250.0},
        {2, "The Matrix", "Lana Wachowski", "Action", 8.7, 200.0},
        {3, "Interstellar", "Christopher Nolan", "Sci-Fi", 8.6, 300.0},
        {4, "The Godfather", "Francis Ford Coppola", "Crime", 9.2, 180.0},
        {5, "Titanic", "James Cameron", "Drama", 7.9, 220.0}
    };
    
    int choice, id;
    char name[50];
    do
    {
        system("cls");
        cout << "------------- Menu ------------------" << endl;
        cout << "\tShow all Films                 [1]" << endl;
        cout << "\tSearch by name                 [2]" << endl;
        cout << "\tSearch by director             [3]" << endl;
        cout << "\tSearch by genre                [4]" << endl;
        cout << "\tSearch most popular in genre   [5]" << endl;
        cout << "\tChange films                   [6]" << endl;
        cout << "\tExit                           [0]" << endl;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 0:
            cout << "Have a nice day! Goodbye!" << endl;
            break;
        case 1:
            PrintAllFilms(films, size);
            break;
        case 2:
            cout << "Enter name film : ";
            cin.getline(name,50);
            SearchByName(films, size, name);
            break;
        case 3:
            cout << "Enter director of film : ";
            cin.getline(name, 50);
            SearchByDirector(films, size, name);
            break;
        case 4:
            cout << "Enter genre film : ";
            cin.getline(name, 50);
            SearchByGenre(films, size, name);
            break;
        case 5:
            cout << "Enter genre film : ";
            cin.getline(name, 50);
            SearchMostPopularByGenre(films, size, name);
            break;
        case 6:
            cout << "Enter id film : ";
            cin >> id;
            ChangeFilm(films, size, id);
            break;
        default:
            cout << "Error choice!" << endl;
            break;
        }
        cout << "Press any key......";
        _getch();
    } while (choice != 0);
    */
}

