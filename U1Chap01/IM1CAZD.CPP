// Filename: \\U1Chap01\IM1czad.CPP
#include <iostream.h>
#include <string.h>
#include <ctype.h>
void swap(char &c1,char &c2)
{	
	char temp;
	temp=c1;
	c1=c2;
	c2=temp;
}
void update(char *str)
{
	int k,j,l1,l2;
	l1 = (strlen(str)+1)/2;
	l2=strlen(str);
	for(k=0,j=l1-1;k<j;k++,j--)
	{
		if(islower(str[k]))
			swap(str[k],str[j]);
	}
	for(k=l1,j=l2-1;k<j;k++,j--)
	{
		if(isupper(str[k]))
			swap(str[k],str[j]);
	}
}
void main()
{
	char data[100]={"bEsTOfLUck"};
	cout<<"Original Data : "<<data<<endl;
	update(data);
	cout<<"Updated Data "<<data;
} 


