#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	cout << "문자열 입력>> ";
	getline(cin, a, '\n');
	int n = a.find("a");
	for (int i = 0; i < a.length(); i++) {
		if (a.find("a") == -1)
			break;
		else if (a.find("a",i) <= i)
			count += 1;
	}
	cout << "문자 a는 " << count << " 개 있습니다." << endl;
}