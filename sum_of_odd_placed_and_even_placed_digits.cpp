#include<iostream>
using namespace std;
int main() {
    long long value,digit,oddSum,evenSum,rev,count=1;
    rev=oddSum=evenSum=0;
    //getting input from user
    cin>>value;

    //extract digits from LSB to MSB and add digits to evenSum and odd digits to oddSum
    while (value > 0) {
                digit = value % 10;
                if (count % 2 == 0) {
                        evenSum = evenSum + digit;
                } else {
                        oddSum = oddSum + digit;
                }
                value = value / 10;
                count++;
        }
        cout<<oddSum<<endl;
        cout<<evenSum<<endl;
    
	return 0;
}
