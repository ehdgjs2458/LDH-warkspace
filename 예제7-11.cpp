#include <iostream>
using namespace std;

class Person {
public:
	void eat() {cout << "���� �� ����."; }
	void talk() { cout << "���� �� ����."<<endl; }
	void run() { cout << "���� �� ����."<<endl; }
};
class Professor :public Person {
public:
	string job;
	int age;
	void BasicPrint() {
		cout << "���� ����: " << job << endl;
		cout << "���� ����: " << age << endl;
		run();
		talk();
	}
	void teach() { cout << "����ĥ �� ����." << endl << endl; }

};
class TennisPlayer :Person {
public:
	string job;
	int age;
	void BasicPrint() {
		cout << "���� ����: " << job << endl;
		cout << "���� ����: " << age << endl;
		run();
		talk();
	}
	void playTennis() {
		cout << "�״Ͻ� ��⸦ �� �� ����." << endl;
	}
};
int main() {
	Professor teacher;
	teacher.job = "����";
	teacher.age = 39;
	teacher.BasicPrint();
	teacher.teach();

	TennisPlayer player;
	player.job = "�״Ͻ� ����";
	player.age = 23;
	player.BasicPrint();
	player.playTennis();
}