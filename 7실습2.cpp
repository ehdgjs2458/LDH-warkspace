#include <iostream>
using namespace std;

class book {
	string title;
	int price;
	int pages;
public:
	book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "��" << pages << "������" << endl;
	}
	string gettitle() { return title; }
	bool operator!();
	
};
bool book::operator!() {
	if (price == 0)
		return true;
	return false;
}

int main() {
	book Book("�������", 0, 50);
	if (!Book) cout << "��¥��." << endl;

}