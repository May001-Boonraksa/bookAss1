#include "book.h"

void Book::setBookDetails(string title1, string author1, string isbn1, bool availabillity1) {
	title = title1;
	author = author1;
	isbn = isbn1;
	availabillity = availabillity1;
}

void Book::displayBookDetails() {
	cout << "Title: " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Isbn: " << isbn << endl;
	cout << "Availabillity: " << availabillity << endl;
}

void Book::returnBook() {
	availabillity = true;
}

bool Book::borrowBook() {
	if (availabillity == true) {
		cout << "You can borrow the book: " << title << endl;
		return true;
	}
	else {
		cout << "You cannot borrow the book: " << title << endl;
		return false;
	}
}