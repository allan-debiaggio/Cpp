/*
Create a class Book with : 
    Private members : title, author, price
    Public methods : setData(), displayData()
*/

#include <iostream>
#include <string>

using namespace std;

class Book
{
    private :
    string title;
    string author;
    float price;

    public :
    void setData(void)
    {
        cout << "Enter a title : ";
        getline(cin, title);
        cout << "Enter an author : ";
        getline(cin, author);
        cout << "Enter the price : ";
        cin >> price;
    };
    void displayData(void)
    {
        cout << "Titre : " << title << endl;
        cout << "Auteur : " << author << endl;
        cout << "Prix : " << price;
    };
};

int main(void)
{
    Book Book1;
    Book1.setData();
    Book1.displayData();
    return 0;
}