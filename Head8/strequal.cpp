#include <iostream>
#include <string.h>

using namespace std;

class String {
	private:
		enum {SZ = 80};
		char str[SZ];
	public:
		String() {strcpy(str, ""); }
		String(char s[]) {strcpy(str, s); }
		void display() const {cout << str; }
		void getstr() {cin.get(str, SZ); }
		bool operator==(String ss) const {
			return (strcmp(str, ss.str) == 0) ? true : false;
		}
};

int main(int argc, char const *argv[])
{
	String s1;
	String s2;
	s1.getstr();
	s2.getstr();
	String s3;

	cout << "\nEnter 'yes' or 'no': ";
	s3.getstr();

	if (s3 == s1)
		cout << "Your enter 'yes'\n";
	else if (s3 == s2)
		cout << "Your enter 'no'\n";
	else
		cout << "Follow the instruction";
	return 0;
}
