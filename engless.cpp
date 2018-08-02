#include <iostream>

using namespace std;

class Distance {
	private:
		int feet;
		int n;
		float inches;
	public:
		Distance() : feet(0), inches(0) { }
		Distance(int ft, float inch) : feet(ft), inches(inch) { }
		
		void getdist() {
			cout << "\nFeet: "; cin >> feet;
			cout << "\nInches: "; cin >> inches;		
		}
	
		void showdist() {
			cout << feet << "\'-" << inches << '\"';
		}

		bool operator<(Distance) const;
};

bool Distance::operator<(Distance d2) const {
	float bf1 = feet + inches / 12;
	float bf2 = d2.feet + inches / 12;
	return (bf1 < bf2) ? true : false;
}

int main(int argc, char const *argv[])
{
	Distance dist1;
	dist1.getdist();
	Distance dist2(6, 2.5);

	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();

	if (dist1 < dist2)
		cout << "\ndist1 less dist2";
	else
		cout << "\ndist2 less dist1";
		cout << endl;
	return 0;
}
