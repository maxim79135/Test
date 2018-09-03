#include <iostream>

using namespace std;
const int LEN = 80;

class employee {
	private:
		char name[LEN];
		unsigned long number;
	public:
		void getdata() {
			cout << "\n Enter surname: "; cin >> name;
			cout << " Enter number: "; cin >> number;
		}
		void putdata() const {
			cout << "\n Surname: " << name;
			cout << "\n Number: " << number;
		}
};

class manager : public employee {
	private:
		char title[LEN];
		double dues;
	public:
		void getdata() {
			employee::getdata();
			cout << " Enter post: "; cin >> title;
			cout << " Enter fee amount in golf-club: "; cin >> dues;
		}
		void putdata() const {
			employee::putdata();
			cout << "\n Post: " << title;
			cout << "\n Fee amount in golf-club: " << dues;
		}
};

class scientist : public employee {
	private:
		int pubs;
	public:
		void getdata() {
			employee::getdata();
			cout << " Enter count of publications: "; cin >> pubs;
		}
		void putdata() const {
			employee::putdata();
			cout << "\n Count of publications: " << pubs;
		}
};

class laborer : public employee {

};

int main(int argc, char const *argv[])
{
	manager m1, m2;
	scientist s1;
	laborer l1;

	cout << endl;
	cout << "\nInput information of first manager";
	m1.getdata();

	cout << "\nInput information of second manager";
	m2.getdata();
	
	cout << "\nInput information of first scientist";
	s1.getdata();
	
	cout << "\nInput information of first laborer";
	l1.getdata();

	cout << "\nInformation of first manager";
	m1.putdata();
	
	cout << "\nInformation of second manager";
	m2.putdata();

	cout << "\nInformation of first scientist";
	s1.putdata();
	
	cout << "\nInformation of first laborer";
	l1.putdata();

	cout << endl;
	return 0;
} 