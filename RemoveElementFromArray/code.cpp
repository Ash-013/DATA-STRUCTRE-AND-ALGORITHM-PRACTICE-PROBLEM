#include<iostream>

using namespace std;
 
int removeElemet(int  a[],int m,int val){
    int j=0;
    for (int  i = 0; i < m; i++)
    {
         if (a[i]!=val)
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

cout  << "Enter Element To remove: ";
int val;
cin>> val;


cout<<endl;
cout  << "OUTPUT "  << endl;
 int j = removeElemet(a,m,val);
for (int i = 0; i < j; i++)
{
   cout<<a[i];
   cout<<endl;
}



}