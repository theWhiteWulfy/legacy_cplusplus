
#include<stdio.h>
#include<conio.h>

void main()
{	
    clrscr();
    int r;
    long int n,c,sum,temp;
    n=sum=0;
    cout<<"Enter the maximum range upto which you want to find armstrong numbers\n";
    cin>>n;
 
    cout<<"Following armstrong numbers are found from 1 to "<<n<<endl;
 
  	for(c=1;c<=n;c++)
   	{
      	  sum = 0;
      	  temp=c;
      	  while(temp!=0)
      	  {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
      	  }
      	if(c==sum)
      	cout<<c<<endl;
   	}
 
    getch();
    return 0;
}
