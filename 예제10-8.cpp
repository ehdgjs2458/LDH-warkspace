#include <iostream>
#include <string>
using namespace std;

template <class T1, class T2>
class gclass {
	T1 data1;
	T2 data2;
public:
	gclass();
	void set(T1 a, T2 b);
	void get(T1 &a, T2 &b);
};
template <class T1, class T2>
gclass<T1, T2>::gclass() {
	data1 = 0; data2 = 0;
}
template<class T1, class T2>
void gclass<T1, T2>::set(T1 a, T2 b) {
	data1 = a; data2 = b;
}
template<class T1, class T2>
void gclass<T1, T2>::get(T1& a, T2& b) {
	a = data1; b = data2;
}
int main() {
	int a;
	double b;
	gclass<int, double> x;
	x.set(2, 0.5);
	x.get(a, b);
	cout << "a=" << a << '\t' << "b=" << b << endl;

	char c;
	float d;
	gclass<char, float> y;
	y.set('m', 12.5);
	y.get(c, d);
	cout << "c=" << c << '\t' << "d=" << d << endl;
}