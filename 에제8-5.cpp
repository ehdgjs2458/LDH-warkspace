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
	x.a = 5;//private����� ���ٺҰ�
	x.seta(10);//protected����� ���ٺҰ�
	x.showa();//protected����� ����Ǿ ���ٺҰ�
	x.b = 10;//private����� ���ٺҰ�
	x.setb(10);//protected����� ���ٺҰ�
	x.showb();//public����� ���ٰ��� 
}