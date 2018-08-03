#include <iostream>
#include <string.h>

using namespace std;

class String {
	private:
		enum { SZ = 90 };
		char str [SZ];
	public:
		String() {str[0] = '\x0'; }
		String(char s[]) { strcpy(str, s); }
		
		void display() const {
			cout << str;
		}
		string operator<<(String s) {
			return s.str;
		}
		operator char* () {return str; }
};

int main(int argc, char const *argv[])
{
	String s1;
	char xstr [] = "Yeep";
	s1 = xstr;
	cout << s1;
	return 0;
}
