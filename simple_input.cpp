#include <iostream>
using namespace std;
int main() {
    
    int no;
    int sum=0;
    int i=1;
    while(true){
       
        cin>>no;
        if(no > -1000 || no < 1000){
        sum=sum+no;
        if(sum>=0){
            cout<<no<<endl;
            i++;
        }
        else{
            break;
        }
    }
    }
  
}
