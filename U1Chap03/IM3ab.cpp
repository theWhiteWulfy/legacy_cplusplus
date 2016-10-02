// Filename: \\U1Chap03\IM3ab.CPP
# include <iostream.h>
class myclass  {
	int a, b;
	public:
		void set(int I, int j) { a = I;  b = j;}
		void show() { cout << a << "   " << b << '\n';}
};
int main()
{
	myclass o1, o2;
	o1.set(10,4);
	o2 = o1;
	o1.show();
	o2.show();
	return 0;
}
