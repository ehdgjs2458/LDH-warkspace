#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	cout << "���ڿ� �Է�>> ";
	getline(cin, a, '\n');
	int length = a.length();
	int n = 0;
	for (int i = 0; i < length; i++) {
		if (a[i] == 'a') n++;
	}
	cout << "���� a�� " << n << " �� �ֽ��ϴ�." << endl;
}