#include<iostream.h.>
#include<fstream.h.
#include<string.h>
#include<stdlib.h>
struct stud{  char name[51] ;
              float balance ;} ;
int main( )
{ system("cls") ;
  stud abc ;
  strcpy(abc.name,"ram") ;
  abc.balance = 1100 ;
  ofstream fout ;
  fout.open("saving",ios::out|ios::binary) ;
  if(!fout)
  { cout<<"file can;t be opened\n" ;
    return 1 ;
   }
   fout.write((char*)& abc,sizeof(stud)_ ;
   fout.close( ) ;
   ifstream fin ;
   fin.open("saving",ios::in|ios::binary) ;
   fin.read((char*)&abc,sizeof(stud0) ;
   cout<<abc.name ;
   cout<<"has the balance amount of Rs."<<abc.balance<<"\n' ;
   fin.close( );
   return 0 ;
 }