// a program based on constructors and destructors

#include<iostream.h>
#include<stdio.h>

class abc{
	int a;
	int b;	
	float c;
	public :
	abc();
	abc(int, char);
	abc(abc &);
	~abc();
	void print();
};

abc::abc()
{ a=17;
  b='y';
  c=10.123;
}

abc::abc(int x, char y)
{ 
  a=x;
  b=y;
  c=27.12;
}

abc::abc(abc &x)
{
  a=x.a;
  b=x.b;
}

~abc::abc()
{
  cout<<"Object Deallocated\n";
}

void abc::print()
{
  cout<<"a= "<<a;
  cout<<"\n\nb= "<<b;
  cout<<"\n\nc= "<<c<<endl;
}

void main()
{
  clrscr();
  abc obj1;
  abc obj2(25,'g');
  abc obj3(obj1);
  obj1.print();
  obj2.print();
  obj3.print();
  getch();
}