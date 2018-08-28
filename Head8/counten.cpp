#include <iostream>

using namespace std;

class Counter {
	protected:
		unsigned int count;
	public:
		Counter() : count(0) { }
		Counter(int c) : count(c) { }
		unsigned int get_count() const { return count; }
		Counter operator++() { return ++count; }
};

class CountDn : public Counter {
	public:
		Counter operator--() { return --count; }
};

int main(int argc, char const *argv[])
{
	CountDn c1;
	cout << "\n c1=" << c1.get_count();
	++c1; ++c1; ++c1;
	cout << "\n c1=" << c1.get_count();
	--c1; --c1;
	cout << "\n c1=" << c1.get_count();
	cout << endl;
	return 0;
}
