#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n');
	int sum = 0;
	int startindex = 0;
	while (true) {
		int findex = s.find('+', startindex);
		if (findex == -1) {
			string part = s.substr(startindex);
			if (part == "") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = findex - startindex;
		string part = s.substr(startindex, count);

		cout << part << endl;
		sum += stoi(part);
		startindex = findex + 1;
	}
	cout << "���ڵ��� ���� " << sum;
}