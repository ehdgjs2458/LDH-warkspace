#include <iostream>
#include <string>
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
	friend bool operator< (string b, book& a);
	
};
bool operator< (string b, book& a) {
	if (b < a.title)
		return true;
	return false;
}

int main() {
	book a("û��", 20000, 300);
	string b;
	getline(cin,b);
	if (b < a)
		cout << a.gettitle() << "�� " << b << " ���� �ڿ� �ֱ���!" << endl;

}