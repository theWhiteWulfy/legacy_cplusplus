// Filename: \\U1Chap07\CO067a.CPP
#include <iostream.h>
void main()
{
	int *PointerArray[10];
	int marks[] = {75, 68, 90, 34, 0, 10, 90, 65};
	for (int I = 0; marks[I] != 0; I++)
	{
		PointerArray[I] = &marks[I];
		*(PointerArray[I]) += 5;
	}
	int index = 0;
	while (index < I)
	{
		int p = *(PointerArray[index]);
		if (p > 60)
			cout << p << ',';
		index++;
	}
}
