#pragma once
#include <string>

class Book {
private:
	std::string title;
	std::string author;
	std::string ISBN;

public:

	Book(std::string& t, std::string& a, std::string& i);

	//setter methods
	void setTitle(const std::string& t);
	void setAuthor(const std::string& a);
	void setISBN(const std::string& t);

	//getter methods
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getISBN() const;
};