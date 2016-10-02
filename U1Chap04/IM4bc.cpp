// Filename: \\U1Chap04\IM4bc.CPP
#include <iostream.h>
// ------ a Cube class
class Cube {
	private:
		int height, width, depth;    // private data members
	public:
		Cube(int, int, int); // constructor function
		~Cube();             // destructor function
		int volume();        // member function (compute volume)
};
// ---- the constructor function
Cube::Cube(int ht, int wd, int dp)
{
	height = ht;
	width = wd;
	depth = dp;
}
// ---- the destructor function
Cube::~Cube()
{
	// does nothing
}
// ---- member function to compute the Cube’s volume
int Cube::volume()
{
	return height * width * depth;
}
// ========== an application to use the cube
void main()
{
	Cube thiscube(7, 8, 9);       // declare a Cube
	cout << thiscube.volume();    // compute & display volume
}
