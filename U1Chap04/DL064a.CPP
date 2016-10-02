// Filename: \\U1Chap04\DL064a.CPP
#include<conio.h>
#include<iostream.h>
#include<string.h>
class state
{
	char *state_name;
	int size;
	public:
		state() {size=0; state_name=new char[size+1]; }
		state(char *s)
		{
			size = strlen(s); state_name = new char[size+1];
			strcpy(state_name, s);
		}
		void display() { cout << state_name << endl;}
		void Replace(state &a, state &b)
		{
			size = a.size + b.size;
			delete state_name;
			state_name = new char[size+1];
			strcpy(state_name, a.state_name);
			strcat(state_name, b.state_name);
		}
};
void main()
{
	clrscr();
	char *temp = "Delhi";
	state state1(temp), state2("Mumbai"), state3("Nagpur"), S1, S2;
	S1.Replace(state1, state2);
	S2.Replace(S1, state3);
	S1.display();
	S2.display();
}