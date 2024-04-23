#include<iostream>

using namespace std;
 
int removeElemet(int  a[],int m){
    int j=1;
    for (int  i = 1; i < m; i++)
    {
         if (a[i]!=a[i-1])
         {
              a[j++] = a[i];
         }
         
    }
    
return j;
    
    
}

int main(void)
{

int m;
cout<<"Enter Size of Array ";
cin>> m ;

int * a = new int[m];


cout<<"Enter element of A";
cout<<endl;
for (int i = 0; i < m; i++)
{
   cin>> a[i];
}
cout<<endl;



cout<<endl;
cout  << "OUTPUT "  << endl;
 int j = removeElemet(a,m);
for (int i = 0; i < j; i++)
{
   cout<<a[i];
   cout<<endl;
}



}