#include <iostream>
#include <process.h>

using namespace std;
const int LIMIT = 100;

class Safearray {
	private:
		int arr[LIMIT];
	public:
		void putel(int n, int elvalue) {
			if (n < 0 || n >= LIMIT) {
				cout << "ERROR"; exit(1);
			}
			arr[n] = elvalue;
		}

		int getelem(int n) const {
			if (n < 0 || n >= LIMIT) {
				cout << "ERROR"; exit(1);
			}
			return arr[n];
		}
};

int main(int argc, char const *argv[])
{
	Safearray sal;
	for(int  j = 0; j < LIMIT; j++)
	{
		sal.putel(j, j * 10);
	}

	for(int  j = 0; j < LIMIT; j++)
	{
		int temp = sal.getelem(j);
		cout << "Element " << j << " equals " << temp << endl;
	}
	return 0;
}
