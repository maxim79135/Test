#include <iostream>
#include <string>

using namespace std;

class Type {
	private:
		string dimensions;
		string grade;
	public:
		Type() : dimensions("N/A"), grade("N/A") { }
		Type(string di, string gr) : dimensions(di), grade(gr) { }

		void gettype() {
			cout << " Enter beginners dimensions(2x2 etc): ";
			cin >> dimensions;
			cout << " Enter grade(untreated, bar etc): ";
			cin >> grade;
		}

		void showtype() const {
			cout << "\n Dimensions: " << dimensions;
			cout << "\n Grade: " << grade;
		}
};

class Distance {
	private:
		int feet;
		float inches;
	public:
		Distance() : feet(0), inches(0.0) { }
		Distance(int ft, float in) : feet(ft), inches(in) { }

		void getdist() {
			cout << " Enter feet: "; cin >> feet;
			cout << " Enter inches: "; cin >> inches;
		}

		void showdist() const {
			cout << feet << "\'-" << inches << '\"';
		}
};

class Lumber : public Type, public Distance {
	private:
		int quantity;
		double price;
	public:
		Lumber() : Type(), Distance(), quantity(0), price(0.0) { }
		Lumber(string di, string gr, int ft, float in, int qu, double prc) : Type(di, gr), Distance(ft, in), quantity(qu), price(prc) { }

		void getlumber() {
			Type::gettype();
			Distance::getdist();
			cout << " Enter quantity: "; cin >> quantity;
			cout << " Enter price: "; cin >> price;
		}

		void showlumber() const {
			Type::showtype();
			cout << "\n Length: ";
			Distance::showdist();
			cout << "\n Sum " << quantity << " pieces: " << (price * quantity) << " rubles";
		}
};

int main(int argc, char const *argv[])
{
	Lumber siding;

	cout << "\n Information of cladding:\n";
	siding.getlumber();

	Lumber studs("2x4", "const", 8, 0.0, 200, 4.45F);
	cout << "\nCladding"; siding.showlumber();
	cout << "\nBar"; studs.showlumber();
	cout << endl;
	return 0;
}