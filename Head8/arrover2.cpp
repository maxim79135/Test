#include <iostream>
#include <process.h>

using namespace std;
const int LIMIT = 100;

class Safearray {
	private:
		int arr[LIMIT];
	public:
		int &access (int n) {
			if (n < 0 || n >= LIMIT) {
				cout << "ERROR"; exit(1);
			}
			return arr[n];
		}
};

int main(int argc, char const *argv[])
{
	Safearray sal;

	
	for(int j = 0; j < LIMIT; j++) sal.access(j) = j * 10;
	
	for(int j = 0; j < LIMIT; j++) {
		int temp = sal.access(j);
		cout << "Element " << j << " equals " << temp << endl;
	}
	return 0;
}
