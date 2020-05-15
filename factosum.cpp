#include <iostream>
using namespace std;
int factorial(int n,int M)
{
    long long ans=1;
    while(n>=1)
    {
        ans=(ans*n)%M;
        n--;
    }
    return ans;
}

int main(){
  int k,a,sum=0;
  cin >>k;
  while(k--){
    cin >>a;
    sum=sum+factorial(a,107);
    sum=sum%107;
  }
  cout <<sum%107<<endl;
}
  
  
