#include <iostream>
using namespace std;
class mm {
public:
	mm() { a = 4 + 300; cout << "mm\n"; }
	mm(int b) { a = b + 100; cout << "mmb\n"; }
	int a;
};
class nn : public mm {
public:
	nn() { a = 11;  cout << "nn\n"; }
	nn(int b) { c = a;  a = b; mm::mm(a);  cout << "nnb\n"; }
	int c;
};
class oo : public nn {
public:
	oo() { a = 2;  cout << "oo\n"; }
	oo(int b) { c = a; a = b; cout << "oob\n"; }
};
int main() {
	oo pp(7);
	cout << pp.a << endl;
	cout << pp.c << endl;
	return 123;
}
