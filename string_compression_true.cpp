#include<iostream>
int main() { using namespace std;
char arr[101];
cin>>arr;   ///CHANGE. Input of strings is taken in this way.
char ch;
int count=0;
ch=arr[0];
int i=0;
while(arr[i]!='\0')
{
  if(ch==arr[i])
  {
    count++;
  }
  else{
    cout<<ch<<count;
    ch=arr[i];
    count=1;
  }
  i++;
}
cout<<ch<<count;
	return 0;
}
