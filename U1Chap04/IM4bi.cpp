// Filename: \\U1Chap04\IM4bi.CPP
# include <iostream.h>
class myclass
{
	int a, b;
	public :
	myclass(int x, int y );  //constructor
	void show();
};
myclass::myclass( int x, int y)
{
	cout << "In constructor\n";
	a = x;
	b = y;
}
void myclass::show()
{
	cout << a << '  ' << b << '\n';
}
int main()
{
	myclass ob(7, 9);
	ob.show();
	return 0;
}
		