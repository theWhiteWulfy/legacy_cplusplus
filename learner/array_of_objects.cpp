// program using array of objects

#include<iostream.h>
#include<conio.h>

 class distance
    {
      private:
        int feet;
        float inches;

      public:
        void getdistance();
        void showdistance();
    };
  void distance::getdistance()
    {
       cout<<"\t Enter feet = ";
       cin>>feet;

       cout<<"\t Enter inches = ";
       cin>>inches;
    }

 void distance::showdistance()
    {
       cout<<"\n\t Total distance is "<<feet<<"\' "<<inches<<'"'<<endl;
    }


void main()
    {
       clrscr();

       distance obj[25];

       char ans;

       int n=0;

       do
      {
         cout<<"\n Enter the distance number = "<<n+1<<endl;
         obj[n++].getdistance();

         cout<<"\n  Enter another (y/n)?";
         cin>>ans;
      }
       while(ans!='n');

       for(int i=0;i<n;i++)
      {
         cout<<"\n Distance number "<<i+1<<" is :";
         obj[i].showdistance();
      }

       getch();
       
    }