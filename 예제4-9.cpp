#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "积己磊 角青 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}

int main() {
	Circle* p = new Circle[3]{ Circle(10), Circle(20), Circle(30) };
	for (int i = 0; i < 3; i++) {
		cout << p[i].getArea() << endl;
	}
	Circle* a = p;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}
	delete[] p;
}