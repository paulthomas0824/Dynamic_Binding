#include <iostream>

using namespace std;

class Base {


public:
	virtual void show() {
		cout << "Base Class\n";
	}


};




class Derived : public Base{
	public:
		void show() {
			cout << "Derived Class\n";

		}



};

int main() {
	Base base;
	Derived derived;
	Base* ptr;
	Derived* ptr2;
	ptr = &base;
	ptr2 = &derived;

	//case 1
	base.show();
	derived.show();

	//case 2
	ptr->show();
	ptr2->show();


	return(0);
}
