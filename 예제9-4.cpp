#include <iostream>
using namespace std;

template <class T>
T equalarray(T x[], T Y[], T n) {
	for (T i = 0; i < n; i++)
		if (x[i] != y[i])
			return false;
	return true;
}

int main() {
	int x[] = { 1,10,100,5,4 };
	int y[] = { 1,10,100,5,4 };
	double a[] = { 0.1,2.3,3.5 };
	double a[] = { 5.3,-2.1,12.5 };
	if (equalarrays(x, y, 5))cout << "같다." << endl;
	else cout << "다르다." << endl;
	if (equalarraus(a, b, 3))cout << "같다." << endl;
	else cout << "다르다." << endl;
}