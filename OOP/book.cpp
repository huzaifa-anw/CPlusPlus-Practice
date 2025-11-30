#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title, author;
    int price;
public:
    Book() : title(""), author(""), price(0) {}
    Book(string t, string a, int pr) : title(t), author(a), price(pr) {}
    void setBook(string t, string a, int pr) {
        title = t;
        author = a;
        price = pr;
    }
    bool operator==(Book& o) {
        return title == o.title;
    }
    int operator+(Book& o) {
        return price + o.price;
    }
};