// Filename: \\U1Chap06\AI111b.CPP
#include<fstream.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>
class CAMERA {
	long ModelNo;
	float MegaPixel;
	int Zoom;
	char Details[120];
	public:
		void Enter() {cin>>ModelNo>>MegaPixel >>Zoom; gets(Details);}
		void Display() {cout<<ModelNo<<MegaPixel<<Zoom<<Details<<endl;}
		long GetModelNo() {return ModelNo;}
};
void Camera_Enter()
{	
	CAMERA C;
	fstream fin;
	fin.open("CAMERA.DAT", ios::app|ios::out|ios::binary); // Creates the data file
	int n, i;
	clrscr();
	cout << "Enter how camera students data you want to enter : ";
	cin >> n;
	for (i=0; i<n; i++)
	{
		cout << "Enter data for camera : " << i+1;
		C.Enter();
		fin.write((char *)&C, sizeof(CAMERA));
	}
	fin.close();
}
void Search() {
	CAMERA C;
	long modelnum;
	cin>>modelnum;
	ifstream fin;
	fin.open("CAMERA.DAT", ios::binary|ios::in);
	while(fin.read((char*)&C, sizeof(C))) {
		if (C.GetModelNo() == modelnum)
			C.Display();
	}
	fin.close();
}
void main()
{
	Camera_Enter();
	Search();
}