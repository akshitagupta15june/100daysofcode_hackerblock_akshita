#include <iostream>
using namespace std;
void spiral_print( int a[][1005], int m, int n)
{
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;
    while(sr<=er && sc<=ec)
    {
    //first row
    for(int i=sc;i<=ec;i++)
    {
        cout<<a[sr][i]<<" ";
    }
    sr++;
    //last column
    for(int i=sr;i<=er;i++)
    {
        cout<<a[i][ec]<<" ";
    }
    ec--;
    //bottom row
    if(er>=sr)
    {
    for(int i=ec;i>=sc;i--)
    {
        cout<<a[er][i]<<" ";
    }
    er--;
    }
    //first column
    if(ec>=sc)
    {
    for(int i=er;i>=sr;i--)
    {
        cout<<a[i][sc]<<" ";
    }
    sc++;
    }
}

    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
	 int m,n;
    cin>>m>>n;
    int a[1005][1005]={0};
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        
    }
    spiral_print(a,m,n);
    cout<<endl;

    }
	
	return 0;
}
