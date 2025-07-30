#pragma once
#include <iostream>
using namespace std;
class Book {
public:
	string title;
	string author;
	string isbn;
	bool availabillity;

	void setBookDetails(string title, string author, string isbn, bool availabillity);
	void displayBookDetails();
	bool borrowBook();
	void returnBook();

};
