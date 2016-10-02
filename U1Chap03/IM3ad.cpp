// Filename: \\U1Chap03\IM3ad.CPP
# include <iostream.h>
class  myclass {
	int a;
	public:
		void set_a(int num);
		int get_a();
};
void myclass::set_a(int num)
{
	a = num;
}
int myclass::get_a()
{
	return a;
}
int main()
{
	myclass ob1, ob2;
	ob1.set_a(10);
	ob2.set_a(99);
	cout << ob1.get_a() << endl;
	cout << ob2.get_a() << endl;
	return  0;
}
