#include<iostream>

using namespace std;
 
void mergeSortedArray(int  a[],int m,int b[],int n){
    int i=m-1,j=n-1,pos= m+n-1;
    while (i>=0 and j>=0)
    {
        if(a[i]>b[j]){
            a[pos--]=a[i--];
        }
        else  {
            a[pos--]=b[j--];
        }
    }
    while (j>=0)
    {
       a[pos--]=b[j--];
    }
    
    
}

int main(void)
{

int m,n;
cout<<"Enter Size of Arrays A and B: ";
cin>> m >> n;

int * a = new int[m+n];
int * b = new int[n]; 

cout<<"Enter element of A";
cout<<endl;
for (int i = 0; i < m; i++)
{
   cin>> a[i];
}
cout<<endl;
cout<<"Enter element of A";
cout<<endl;
for (int i = 0; i < n; i++)
{
   cin>> b[i];
}


cout<<endl;
cout  << "OUTPUT "  << endl;
mergeSortedArray(a,m,b,n);
for (int i = 0; i < m+n; i++)
{
   cout<<a[i];
   cout<<endl;
}



}