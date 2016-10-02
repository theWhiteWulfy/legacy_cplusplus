// Filename: \\U2Chap10\IM10cd.CPP
// Program to perform all basic operations on queue
#include<iostream.h>
#include<conio.h>
#include<process.h>
class stud		//CLASS DECLARATION
{
	char name[20];
	stud *rear,*front;
	public:
		void add_end();
		void add_front();
		void del_front();
		void del_end();
		void display();
		stud *link;
		stud()
		{
			front = NULL;
			rear=NULL;      //CONSTRUCTOR
		}
};
//FUNCTION TO ADD IN THE END OF QUEUE
void stud::add_end()
{
	stud *temp;
	if(rear==NULL)
	{
		rear=new stud;
		cout<<"\n\tEnter the name ";
		cin>>rear->name;
		rear->link=NULL;
		front=rear;
	}
	else
	{
   		temp=new stud;
   		cout<<"\n\tEnter the name ";
		cin>>temp->name;
		temp->link=NULL;
		rear->link=temp;
		rear=temp;
	}
}
//FUNCTION TO ADD IN THE FRONT OF THE QUEUE
void stud::add_front()
{
	stud *temp;
	if(front==NULL)
	{
		front=new stud;
		cout<<"\n\tEnter the name ";
		cin>>front->name;
		front->link=NULL;
		rear = front;
	}
	else
	{
		temp=new stud;
		cout<<"\n\tEnter the name ";
		cin>>temp->name;
		temp->link=NULL;
		temp->link=front;
		front = temp;
	}
}
//FUNCTION TO DELETE FROM THE FRONT OF THE  QUEUE
void stud::del_front()
{
	stud *temp;
	if(front==NULL)
		cout<<"\n\t\Queue is empty \";";
	else
	{
		temp=new stud;
		temp=front;
		front=front->link;
		temp->link=NULL;
		delete(temp);
	}
}
//FUNCTION TO DELETE FROM THE END OF THE QUEUE
void stud::del_end()
{
	stud *temp,*back;
	if(rear==NULL)
		cout <<"\n\t\Queue is empty \n";
	else
	{
		temp = front;
		while (temp->link != NULL)
		{
			back = temp;
			temp = temp->link;
		}
		back->link = NULL;
		rear = back;
		delete(temp);
	}
}
//FUNCTION TO DISPLAY THE QUEUE
void stud::display()
{
 	stud *temp;
	clrscr();
	if(front==NULL)
		cout<<"\n\t\Queue is empty \n";
	else
	{
		cout<<"\n\n\t\t THE NAMES ARE ";
	     	temp=new stud;
		temp=front;
	     	while(temp->link!=NULL)
	       	{
	       		cout<<"\n\t"<<temp->name;   //DISPLAYS THE NODE DATA
	       		temp=temp->link;       //TO POINT TO NEXT NODE
		}
			cout<<"\n\t"<<temp->name;
	}
}
//M A I N   P R O G R A M
void main()
{
  	stud x;
	int ch;
	char choi='y';
	while((choi=='y')||(choi=='Y'))
	{
		clrscr();
		cout << "\n\n\n\t\t\t        MENU\n";    //TO SHOW MENU
		cout << "\n\t\t\t 1. Add in the front. ";
		cout << "\n\t\t\t 2. Add in the last";
		cout << "\n\t\t\t 3. Delete from the front";
		cout << "\n\t\t\t 4. Delete from the end. ";
		cout << "\n\t\t\t 5.Exit ";
		cout << "\n\n\n\n\n\tEnter your choice ";
		cin>>ch;
		switch(ch) 	//STATEMENT TO REACH THE REQUIRED INSERTION
		{
			case 1:    
				x.add_front();
			   	break;
			case 2 :    
				x.add_end();
			   	break;
			case 3 :	
				x.del_front();
				break;
		  	case 4 :	 
				x.del_end();
				break;
			case 5 :	  
				exit(0);
			   	break;
		  	default:
		   		cout<<"\n\tInvalid choice ";
		}
		x.display();
		cout<<"\n\n\tPress y to continue.... ";
		cin>>choi;
	}
}  // E N D   O F   M A I N
