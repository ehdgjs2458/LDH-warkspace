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
		cout << title << ' ' << price << "원" << pages << "페이지" << endl;
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
	book Book("벼룩시장", 0, 50);
	if (!Book) cout << "공짜다." << endl;

}