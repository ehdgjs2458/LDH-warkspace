#include <iostream>
#include <string>
using namespace std;

class point {
protected:
	int x, y;
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showpoint() {
		cout << "(" << x << ',' << y << ")" << endl;
	}
};
class colorpoint :public point {
	string color;
public:
	void setcolor(string color) { this->color = color; }
	void showcolorpoint();
	bool equals(colorpoint p);
};
void colorpoint::showcolorpoint() {
	cout << color << ":";
	showpoint();
}
bool colorpoint::equals(colorpoint p) {
	if (x == p.x && y == p.y && color == p.color)
		return true;
	return false;
}
int main() {
	point p;
	p.set(2, 3);
	p.x = 5;                   //x�� ���������ڰ� protected�̱� ������ �ܺ��Լ����� ������ �Ұ����ϴ�.
	p.y = 5;                   //y�� ���������� protected�̱� ������ �ܺ��Լ����� ������ �Ұ����ϴ�.
	p.showpoint();

	colorpoint cp;
	cp.x = 10;                  //x�� ���������ڰ� protected�̱� ������ �ܺ��Լ����� ������ �Ұ����ϴ�.
	cp.y = 10;                  //y�� ���������� protected�̱� ������ �ܺ��Լ����� ������ �Ұ����ϴ�.
	cp.set(3, 4);
	cp.setcolor("Red");
	
	colorpoint cp2;
	cp2.set(3, 4);
	cp2.setcolor("Red");
	cout << ((cp.equals(cp2)) ? "true" : "false");
}
