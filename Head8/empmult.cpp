#include <iostream>

using namespace std;

const int LEN = 80;

class student {
	private:
		char school[LEN];
		char degree[LEN];
	public:
		void getedu() {
			cout << " Enter name school: ";
			cin >> school;
			cout << " Enter degree of higher education\n";
			cout << " (incomplete higher, bachelor, master, candidate of sciences): ";
			cin >> degree;
		}

	void putedu() const {
		cout << "\n School: " << school;
		cout << "\n Degree: " << degree;
	}
};

class employee {
	private:
		char name[LEN];
		unsigned long number;
	public:
		void getdata() {
			cout << "\nEnter surname: "; cin >> name;
			cout << " Enter number: "; cin >> number;
		}
		void putdata() const {
			cout << "\n Surname: " << name;
			cout << "\n Number: " << number;
		}
};

class manager : private employee, private student {
	private:
		char title[LEN];
		double dues;
	public:
		void getdata() {
			employee::getdata();
			cout << " Enter post: "; cin >> title;
			cout << " Enter fee amount in golf-club: "; cin >> dues;
			student::getedu();
		}
		void putdata() const {
			employee::putdata();
			cout << "\n Post: " << title;
			cout << "\n Fee amount in golf-club: " << dues;
			student::putedu();
		}
};

class scientist : private employee, private student {
	private:
		int pubs;
	public:
		void getdata() {
			employee::getdata();
			cout << " Enter count of publications: "; cin >> pubs;
			student::getedu();
		}
		void putdata() const {
			employee::putdata();
			cout << "\n Count of publications: " << pubs;
			student::putedu();
		}
};

class laborer : public employee {

};

int main(int argc, char const *argv[])
{
	manager m1;
	scientist s1, s2;
	laborer l1;

	cout << endl;
	cout << "\nInput information of first manager";
	m1.getdata();

	cout << "\nInput information of first scientist";
	s1.getdata();

	cout << "\nInput information of second scientist";
	s2.getdata();

	cout << "\nInput information of first laborer";
	l1.getdata();

	cout << "\nInformation of first manager";
	m1.putdata();
	
	cout << "\nInformation of first scientist";
	s1.putdata();
	
	cout << "\nInput information of second scientist";
	s2.putdata();

	cout << "\nInformation of first laborer";
	l1.putdata();

	cout << endl;
	return 0;
}