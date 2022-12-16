#include <iostream>
using namespace std;

int main() {
	int* p = new int[5];
	if (!p) {
		cout << "메모리를 할당할 수 없습니다." << endl;
		return 0;
	}
	cout << "정수 5개 입력>> ";
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
	}
	double sum = 0;
	for (int i = 0; i < 5; i++)
		sum += p[i];
	cout << "평균 " << sum / 5 << endl;

	delete[] p;

}