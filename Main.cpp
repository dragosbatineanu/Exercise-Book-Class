// main.cpp
#include <iostream>
#include "BookHeader.h"

using namespace std;

int main() {
    // Prompt the user to enter book details
    string title, author, ISBN;
    cout << "Enter the title of the book: ";
    getline(cin, title);
    cout << "Enter the author of the book: ";
    getline(cin, author);
    cout << "Enter the ISBN of the book: ";
    getline(cin, ISBN);

    // Create a Book object
    Book book(title, author, ISBN);

    // Display the book details
    cout << "Book Details:" << endl;
    cout << "Title: " << book.getTitle() << endl;
    cout << "Author: " << book.getAuthor() << endl;
    cout << "ISBN: " << book.getISBN() << endl;

    return 0;
}