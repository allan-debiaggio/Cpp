#include <iostream>
#include <string>

using namespace std;

class Book
{
    private :
    string title;
    string author;
    float price;
    int count = 0;

    public :
    Book()
    {
        title = "Placeholder title";
        author = "Placeholder author";
        price = 42.42;
        cout << "This is the constructor in action." << endl;
        cout << title << endl;
        cout << author << endl;
        cout << price << endl;
        count ++;
    }

    Book(string title, string author, float price)
    {
        cout << "This is the parameterized constructor in action." << endl;
        cout << title << endl;
        cout << author << endl;
        cout << price << endl;
        count += 2;
    }
    ~Book()
    {
        cout << "Destructor called on object "
        << count << endl;
    }

};

int main(void)
{
    Book Tome1;
    Book Tome2("OOP 2 : Electric Boogaloo", "Some guy", 72.53);

    
    return 0;
}