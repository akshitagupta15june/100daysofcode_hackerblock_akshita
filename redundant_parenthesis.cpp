#include<iostream>
#include<stack>
using namespace std;
int main(int argc, char const *argv[])
{
	stack<char> s;
    int t;
    cin>>t;
	string str;
    while(t--){
	cin>>str;
	int flag=0;

	for (int i = 0; i < str.size(); ++i)
	{ int c=0;
		int ch=str[i];
		if(str[i]!=')')
			s.push(ch);
		int count=0;
		if(str[i]==')')
        {
			if(s.empty())
				break;
            if(s.top()=='(')
                flag=1;
			else{
				while(s.top()!='(')
                {
					s.pop();
					c++;		
				}
                s.pop();
            
			}
		}
	}

	if(flag==1)
		cout<<"Duplicate";
	else
		cout<<"Not Duplicates";

    cout<<endl;
    }
	return 0;
}
