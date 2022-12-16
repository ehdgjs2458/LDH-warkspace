#include <iostream>
#include <string>
using namespace std;

class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};
class WideTV :public TV {
	bool videoin;
public:
	WideTV(int size, bool videoin) :TV(size) {
		this->videoin = videoin;
	}
	bool getVideoin() { return videoin; }
};
class SmartTV:public WideTV {
	string ipaddr;
public:
	SmartTV(string ipaddr, int size) :WideTV(size, true) {
		this->ipaddr = ipaddr;
	}
	string getipaddr() { return ipaddr; }
};
int main() {
	SmartTV htv("192.0.0.1", 32);
	cout << "size=" << htv.getSize() << endl;
	cout << "videoin=" << boolalpha << htv.getVideoin() << endl;
	cout << "IP=" << htv.getipaddr() << endl;
}