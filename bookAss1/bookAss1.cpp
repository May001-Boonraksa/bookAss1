// bookAss1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "book.h"
using namespace std;

int main()
{

    Book Book1;
    Book1.setBookDetails("Don Quixote", "AAAAA", "Miguel de Cervantes", true);
    Book Book2;
    Book2.setBookDetails("Jane Eyre", "BBBBB", "Charlotte Brontë", true);
    Book Book3;
    Book3.setBookDetails("The Picture of Dorian Gray", "CCCCC", "Oscar Wilde", true);
    Book Book4;
    Book4.setBookDetails("Pride and Prejudice", "DDDDD", "Jane Austen", true);
    Book Book5;
    Book5.setBookDetails("Wuthering Heights", "EEEEE", "Emily Brontë", true);

    Book array[5];
    array[0] = Book1;
    array[1] = Book2;
    array[2] = Book3;
    array[3] = Book4;
    array[4] = Book5;

    string isbnToBorrow = "";
    while (isbnToBorrow != "0") {
        cout << "Input the book's ISBN you want to borrow: ";
        cin >> isbnToBorrow;

        for (int i = 0; i < 5; i++)
        {
            if (array[i].isbn == isbnToBorrow) {
                if (array[i].borrowBook()) {
                    cout << "Don't forget to return the book: " << array[i].title << endl;
                    break;
                }
                else {
                    cout << "The book is unavailable";
                }
            }
        }

    }

}


