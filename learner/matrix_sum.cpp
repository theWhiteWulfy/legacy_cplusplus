#include<iostream.h>
#include<conio.h>
#include<process.h>

int main()

{


	int a[30][30], b[30][30], c[30][30];
	int i, j, m, n, p, q, sum = 0, sumA = 0, sumB = 0;

    cout<<"Input size of Row of Matrix - A\n";
    cin>>m;
    
    cout<<"Input size of Coulmn of Matrix - A\n";
    cin>>n;
    
    cout<<"Input size of Row of Matrix - B\n";
    cin>>p;
    
    cout<<"Input size of Coulmn of Matrix - B\n";
    cin>>q;
    
    
    if((m==p) && (n==q))
              cout<<"\a\n\nMatrices can be added\n";
              
    else
    
    {   
              cout<<"\a\nMatrices cannot be added\n"<<"as Matrix - A is "<<m<<" X "<<n<<"\nBut Matrix - B is "<<p<<" X "<<q;
              getch();
              exit(0);
              
              }
    
    cout<<"\a\a\nEnter Matrix - A\n";
    for(i=0; i<m; i++)
             
             { 
                   for(j=0; j<n; j++)
                     
                   cin>>a[i][j];
                   
                   }          
                

   cout<<"\a\aEnter Matrix - B\n";
   for(i=0; i<p; i++)
            
            {    
                 for(j=0; j<q; j++)
                 
                 cin>>b[i][j];
                 
                  } 






// For the Sum of Matrices
{
    for(i=0; i<m; i++)
         {
              for(j=0; j<n; j++)
                       c[i][j]=a[i][j]+b[i][j];
                       
                       }
                       cout<<"\n\n\aThe sum of the Matrices is :\n";
                       
                       for(i=0; i<m; i++)
                       {
                                
                        cout<<"\n";
                                   for(j=0; j<n; j++)
                                   cout<<"\t"<<c[i][j];
                                  
                                   }
                                   
              

}
// For the sum of Diagonals of the matrices



    
//For Matrix - A

{
 
  for(i=0;i<m;i++)

     {
      for(j=0;j<n;j++)

         {
           if(i==j||i+j==m-1)
           sumA+=a[i][j];

         }

      }
       cout<<"\n\nThe Sum Of the Diagonals of Matrix - A is : \t\a"<<sumA;
       
//For Matrix - B
 
 {  
             
  for(i=0;i<p;i++)
 
 {
 
      for(j=0;j<q;j++)
 
         {
 
           if(i==j||i+j==p-1)
           sumB+=b[i][j];
 
         }
 
      }
       cout<<"\n\nThe Sum Of the Diagonals of Matrix - B is : \t\a"<<sumB;
 
       }
 
 
       cout<<"\n\nThe Sum of the Diagonals of Matrix - A and B is :\t"<<sumA+sumB; 
 

 }

getch();

}
