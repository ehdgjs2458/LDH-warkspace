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
		seta(5);//protected����� �Ļ�Ŭ������ ���� ����
		showa();//public ����� ���ٰ���
		cout << b;
	}
};
class GrandDerived :private Derived {
	int c;
protected:
	void setab(int x) {
		seta(x);//private���� ����Ǿ ���ٺҰ�
		showa();//private���� ����Ǿ ���ٺҰ�
		setb(x);//protected����� ���ٰ���
	}
};
