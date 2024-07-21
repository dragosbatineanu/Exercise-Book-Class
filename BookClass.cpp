#include "BookHeader.h"

Book::Book(std::string& t, std::string& a, std::string& i)
	: title(t), author(a), ISBN(i) {}

void Book::setTitle(const std::string& t) {
	title = t;
}

void Book::setAuthor(const std::string& a) {
	author = a;
}

void Book::setISBN(const std::string& i) {
	ISBN = i;
}

std::string Book::getTitle() const {
	return title;
}

std::string Book::getAuthor() const {
	return author;
}

std::string Book::getISBN() const {
	return ISBN;
}