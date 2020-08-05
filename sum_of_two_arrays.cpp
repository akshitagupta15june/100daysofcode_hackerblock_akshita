#include<iostream>
using namespace std;
int main()
{
	int M[1000],N[1000],A[1000];
	int sum[1000],carry=0;
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>M[i];
	}
	cin>>n;
	for(int j=0;j<n;j++)
	{
		cin>>N[j];
	}
    int c[10001],ind=0;
    int i=n-1,j=m-1;
    while(i>=0 && j>=0){
        c[ind]=(N[i]+M[j])%10;ind++;
        if(N[i]+M[j]>=10){
            if(i-1>=0){
                N[i-1]+=1;
            }
            else if(j-1>=0){
                M[j-1]+=1;
            }
            else{
                c[ind]=1;ind++;
            }
        }
        i--;j--;
    }
		
	if(i>=0){
        while(i>=0){
            c[ind]=N[i]%10;ind++;
            if(N[i]>=10){
                if(i-1>=0){
                    N[i-1]+=1;
                }
                else{
                    c[ind]=1;ind++;
                }
            }
            i--;
        }
    }
	if(j>=0){
        while(j>=0){
            c[ind]=M[j]%10;ind++;
            if(M[j]>=10){
                if(j-1>=0){
                    M[j-1]+=1;
                }
                else{
                    c[ind]=1;ind++;
                }
            }
            j--;
        }
    }
    for(int i=ind-1;i>=0;i--){
        cout<<c[i]<<", ";
    }
    cout<<"END";

	
return 0;
	
	
}
