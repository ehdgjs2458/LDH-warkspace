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
	bool operator==(int a);
	bool operator==(string a);
	bool operator==(book& a);
};
bool book::operator==(int a) {
	if (price == a)
		return true;
	return false;
}
bool book::operator==(string a) {
	if (title == a)
		return true;
	return false;
}
bool book::operator==(book& a) {
	if (this->price == a.price && this->title == a.title)
		return true;
	return false;
}
int main() {
	book a("��ǰ c++", 30000, 500), b("��ǰ c++", 30000, 500);
	if (a == 30000) cout << "���� 30000��" << endl;
	if (a == "��ǰ c++") cout << "��ǰ c++ �Դϴ�." << endl;
	if (a == b) cout << "�� å�� ���� å�Դϴ�." << endl;

}