// Filename: \\U1Chap04\IM4bl.CPP
# include <iostream.h>
class  Adam
{
	public:
		void print(double) { cout << "Double" << endl;}
		void print(int) { cout << "Int" << endl;}
		void print(void  *) { cout << "Void *" << endl;}
};
void main()
{
	Adam  Eve;
	char  ch = 'A';
	int number = 66;
	float  F1 = 3.14;
	char st[] = "A String";
	Eve.print(ch);
	Eve.print(F1);
	Eve.print(st);
	Eve.print(number);
}
