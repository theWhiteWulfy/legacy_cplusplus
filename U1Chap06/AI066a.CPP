// Filename: \\U1Chap06\AI066a.CPP
// Demonstrates this pointer
#include <iostream.h>
class thispoint
{
	int num;
	public:
		void valueofthis()
		{
			this->num = 100; // same as num = 11;
			cout << this->num; // same as cout << alpha;
		}
};
void main()
{
	thispoint th;
	th.valueofthis();
}