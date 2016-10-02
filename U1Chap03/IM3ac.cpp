// Filename: \\U1Chap03\IM3ac.CPP
# include <iostream.h>
class sample {
	int i;
	public:
		void get( int  a)
		{
			i = a;
		}
		void display()
		{
			cout << ++i << "  " << i << "  " << i++;
		}
};
void main()
{
	sample obj;
	obj.get(6);
	obj.display();
}
