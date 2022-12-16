#include <iostream>
#include <string>
using namespace std;

class point {
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
};
void colorpoint::showcolorpoint() {
	cout << color << ":";
	showpoint();
}
int main() {
	point p;
	colorpoint cp;
	cp.set(3, 4);
	cp.setcolor("Red");
	cp.showcolorpoint();
}
