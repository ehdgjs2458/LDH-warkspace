#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("�泲 ���� ������ ���̼��� 93 104�� 406ȣ");
	string copyaddress(address);

	char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyaddress << endl;
	cout << title << endl;
}