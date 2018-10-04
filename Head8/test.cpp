	#include <iostream>

	using namespace std;

	int main(int argc, char const *argv[])
	{
		int m, d;
		cin >> m >> d;
		if (m == 1) cout << 365 - d;
		else if (m == 2) cout << 365 - 31 - d;
		else {
			cout << 365 - 59 - ((m - 3) % 2 == 0 ? (61 * (m - 3) / 2) : (61 * (m - 4) / 2 + 31)) - d;
		} 
		return 0;
	}
