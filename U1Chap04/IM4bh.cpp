// Filename: \\U1Chap04\IM4bh.CPP
# include <iostream.h>
class myclass
{
	int a;
	public :
		myclass();   //constructor
		~myclass();   //destructor
		void show();
};
myclass::myclass()
{
	cout << "In constructor\n";
	a = 10;
}
myclass::~myclass()
{
	cout<< "Destructor \n";
}
void myclass :: show()
{
	cout << a << "\n";
}
int main()
{
	myclass ob;
	ob.show();
	return 0;
}
		