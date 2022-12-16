#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void seta(int a) { this->a = a; }
public:
	void showa() { cout << a; }
};
class Derived :protected Base {
	int b;
protected:
	void setb(int b) { this->b = b; }
public:
	void showb() { cout << b; }
};
int main() {
	Derived x;
	x.a = 5;//private멤버로 접근불가
	x.seta(10);//protected멤버로 접근불가
	x.showa();//protected멤버로 변경되어서 접근불가
	x.b = 10;//private멤버로 접근불가
	x.setb(10);//protected멤버로 접근불가
	x.showb();//public멤버로 접근가능 
}