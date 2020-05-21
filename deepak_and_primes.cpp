#include <iostream>
using namespace std;

bool sieve[100000001];
int main() {
    sieve[0]=sieve[1]=1;
    for(int i=2;i*i<=100000000;i++)
        if(!sieve[i])
            for(int j=i*i;j<=100000000;j+=i)
                sieve[j]=1;
    int N;
    cin>>N;
    int counter=1;
    while(N && counter<100000000)
    {
        counter++;
        if(!sieve[counter])
            N--;
    }
    cout<<counter;
}
