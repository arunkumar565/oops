#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;
public:
    Book(string t) {
        title = t;
        author = "Unknown";
        price = 0.0;
        cout << "Book Title: " << title << endl;
    }

    Book(string t, string a) {
        title = t;
        author = a;
        price = 0.0;
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }

    Book(string t, string a, double p) {
        title = t;
        author = a;
        price = p;
        cout << "Book Title: " << title << ", Author: " << author << ", Price: " << price << endl;
    }
};

int main() {
    Book b1("arun");
    Book b2("heloow ","hehsds");
    Book b3("djcskjdc", "sdjsdk", 499.99);
}
