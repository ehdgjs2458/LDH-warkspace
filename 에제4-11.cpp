#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	string address("경남 양산시 물금읍 가촌서로 93 104동 406호");
	string copyaddress(address);

	char text[] = {'L', 'o', 'v', 'e', ' ', 'C', '+', '+', '\0'};
	string title(text);

	cout << str << endl;
	cout << address << endl;
	cout << copyaddress << endl;
	cout << title << endl;
}