#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int m, n;
	cin >> m >> n;
	cout << m / n;
	m %= n;
	if (m > 0) {
		cout << ',';
		int p = m;
		int q = n;
		while (p != q) q > p ? q -= p : p -= q;

		m /= p;
		n /= p;
		p = 0; q = 0; int z = n;
		while (z % 2 == 0) {
			p++;
			z /= 2;
		}
		while (z % 5 == 0) {
			q++;
			z /= 5;
		}
		if (p < q) p = q;

		for (int i = 1; i <= p; i++) {
			m *= 10;
			cout << m / n;
			m %= n;
		}

		if (z > 1) {
			cout << '(';
			q = 9; p = 1;
			while (q % z > 0) {
				p++;
				q = q % z * 10 + 9;
			}
			cout << p;
			
			for (int k = 1; k <= p; k++){
				m *= 10;
				cout << m / n;
				m %= n;
			}
			cout << ')';
		}
	}
	return 0;
}
