/* A.I. Disclaimer: All work for this assignment was completed by myself 
and entirely without the use of artificial intelligence tools such as ChatGPT, MS Copilot, other LLMs, etc. */  

#include "slist.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    SortedList bookList;
    ifstream myIn("books.dat");

    if (!myIn) {
        cout << "Error: Could not open the file" << endl;
        return 1;
    }

    int size = 0;
    BookType aBook;

    while (size < MAX_SIZE && getline(myIn, aBook.title)) {
        getline(myIn, aBook.author);
        myIn >> aBook.publicationYear;
        myIn.ignore(100, '\n');

        bookList.Insert(aBook);
        size++;
    }

    myIn.close();

    // Display all books
    cout << "The list of books are:" << endl;
    bookList.Reset();

    while (bookList.HasNext()) {
        aBook = bookList.GetNextItem();
        cout << "Title: " << aBook.title << endl;
        cout << "Author: " << aBook.author << endl;
        cout << "Publication Year: " << aBook.publicationYear << endl;
    }

    cout << endl;

    // Prompt user
    string searchAuthor;
    cout << "Please enter the name of an author: ";
    getline(cin, searchAuthor);  // Ensure this doesn't conflict with previous inputs

    // Display books by the entered author
    bookList.Reset(); // Reset the list before searching again
    bool found = false; // Flag to track if we find any books by the author
    cout << "\nBooks by " << searchAuthor << ":" << endl;

    while (bookList.HasNext()) {
        aBook = bookList.GetNextItem();
        if (aBook.author == searchAuthor) {
            cout << aBook.title << endl;
            found = true;
        }
    }

    // If no books found
    if (!found) {
        cout << "No books found for " << searchAuthor << "." << endl;
    }

    return 0;
}
