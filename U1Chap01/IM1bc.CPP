// Filename: \\U1Chap01\IM1bc.CPP
			#include <iostream.h>
		void func (char c)
		{
			cout << "Char";
		}
		void func (float f)
		{
			cout << "Float";
		}
		void main ()
		{
			char a = 20;
			float b = 20;
			func (a);
			func (b);
		}