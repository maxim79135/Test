#include <iostream>

using namespace std;

enum posneg {pos, neg};

class Distance {
	protected:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0) { }
		Distance(int f, float in) : feet(f), inches(in) { }

		void getdist() {
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: "; cin >> inches;
		}

		void showdist() const {
			cout << feet << "\'" << inches << '\"';
		}
};

class DistSign : public Distance {
	private:
		posneg sign;
	public:
		DistSign() : Distance() { sign = pos; }
		DistSign(int f, float in, posneg sg = pos) : Distance(f, in) { sign = sg; }

		void getdist() {
			Distance::getdist();
			char ch;
			cout << "Enter sign(+ or -): "; cin >> ch;
			sign = (ch == '+') ? pos : neg;
		}

		void showdist() const {
			cout << ( (sign == pos) ? "(+)" : "(-)");
			Distance::showdist();
		}
};

int main(int argc, char const *argv[])
{
	DistSign alpha;
	alpha.getdist();

	DistSign beta(11, 6.25f);
	DistSign gamma(100, 5.5, neg);

	cout << "\nA = "; alpha.showdist();
	cout << "\nB = "; beta.showdist();
	cout << "\nC = "; gamma.showdist();
	cout << endl;
	return 0;
}