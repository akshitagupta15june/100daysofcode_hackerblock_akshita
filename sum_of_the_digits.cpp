#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main() {
	char str[1000];
	int sum=0;
	cin.get(str,1000);
	    for (int count = 0; str[count] != '\0'; count++)

    {

        if ((str[count] >= '0') && (str[count] <= '9'))

        {
            sum += (str[count] - '0');
        }

    }
    cout<<sum<<endl;
	return 0;
}
