#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cout << "문자열 입력>> ";
	getline(cin, a, '\n');
	int length = a.length();
	int n = 0;
	for (int i = 0; i < length; i++) {
		if (a[i] == 'a') n++;
	}
	cout << "문자 a는 " << n << " 개 있습니다." << endl;
}