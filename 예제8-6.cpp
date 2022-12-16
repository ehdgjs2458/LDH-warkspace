#include <iostream>
using namespace std;

class Base {
	int a;
protected:
	void seta(int a) { this->a = a; }
public:
	void showa() { cout << a; }
};
class Derived :private Base {
	int b;
protected:
	void setb(int b) { this->b = b; }
public:
	void showb() {
		seta(5);//protected멤버로 파생클래스는 접근 가능
		showa();//public 멤버로 접근가능
		cout << b;
	}
};
class GrandDerived :private Derived {
	int c;
protected:
	void setab(int x) {
		seta(x);//private으로 변경되어서 접근불가
		showa();//private으로 변경되어서 접근불가
		setb(x);//protected멤버로 접근가능
	}
};
