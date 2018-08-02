#include <iostream>

using namespace std;


class Distance
{
private:
    int feet;
    float inches;
public:
    Distance();
    Distance(int ft, float inch);
    void getdist();
    void showdist();
    Distance operator+ (Distance) const;
};


Distance::Distance() : feet(0), inches(0) {

}

Distance::Distance(int ft, float inch) : feet(ft), inches(inch) {

}

void Distance::getdist() {
    cout << "\nFeets: ";  cin >> feet;
    cout << "\nInches: "; cin >> inches;
}

void Distance::showdist() {
    cout << feet << "\'-" << inches << '\"';
}


Distance Distance::operator+ (Distance d2) const {
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0) {
        i -= 12.0;
        f++;
    }
    return Distance(f, i);
}

int main()
{
    Distance dist1, dist3, dist4;
    dist1.getdist();
    Distance dist2 (11, 6.25);

    dist3 = dist1 + dist2;
    dist4 = dist1 + dist2 + dist3;

    cout << "dist1 = "; dist1.showdist(); cout << endl;
    cout << "dist2 = "; dist2.showdist(); cout << endl;
    cout << "dist3 = "; dist3.showdist(); cout << endl;
    cout << "dist4 = "; dist4.showdist(); cout << endl;
    return 0;
}

