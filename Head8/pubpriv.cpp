#include <iostream>

using namespace std;

class A{
	private:
		int privdataA;
	protected:
		int protdataA;
	public:
		int pubdataA;
};

class B : public A {
	public:
		void func() {
			int a;
			a = protdataA;
			a = pubdataA;
		}
};

class C : private A {
	public:
		void func() {
			int a;
			a = protdataA;
			a = pubdataA;
		}
};

int main(int argc, char const *argv[])
{
	int a;
	B objB;
	a = objB.pubdataA;

	C objC;
	objC.func();
	return 0;
}
