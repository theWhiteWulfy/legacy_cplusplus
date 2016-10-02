// Filename: \\U1Chap04\AI064b.CPP
#include<iostream.h>
class Exam
{
	int year;
	public:
		Exam(int y) { year = y;} // Constructor 1
		Exam(Exam &t) // Constructor 2
		{
			year = t.year;
		}
};
void main()
{
	Exam Ex(10);
}
