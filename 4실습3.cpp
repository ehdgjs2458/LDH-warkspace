#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	int count = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, a, '\n');
	int n = a.find("a");
	for (int i = 0; i < a.length(); i++) {
		if (a.find("a") == -1)
			break;
		else if (a.find("a",i) <= i)
			count += 1;
	}
	cout << "���� a�� " << count << " �� �ֽ��ϴ�." << endl;
}