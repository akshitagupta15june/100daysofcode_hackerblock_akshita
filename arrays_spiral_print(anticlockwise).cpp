#include <iostream>
using namespace std;
void antispiral_print(int a[][10],int m,int n)
{
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;
    while(sr<=er && sc<=ec)
    {
         //first column
      for(int i=sr;i<=er;i++)
        {
            cout<<a[i][sc]<<", ";
        }
        sc++;
    //bottom row
     for(int i=sc;i<=ec;i++)
     {
         cout<<a[er][i]<<", ";
     }
     er--;
     //last column
     if(ec>=sc)
     {
         for(int i=er;i>=sr;i--)
     {
         cout<<a[i][ec]<<", ";
     }
     ec--;
     }
     //first row
     if(sr<=er)
     {
         for(int i=ec;i>=sc;i--)
     {
         cout<<a[sr][i]<<", ";
     }
     sr++;
     }
     
     
    }
   cout<<"END";
}

int main()
{
	int a[10][10]={0};
	int m,n;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        
    }
    antispiral_print(a,m,n);
	return 0;
}
