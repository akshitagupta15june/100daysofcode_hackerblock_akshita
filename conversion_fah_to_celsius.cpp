 #include<iostream>
using namespace std ;
int main() {int max,min,step;
            
            cin>>min>>max>>step;
          
            for(int i=min;i<=max;i+=step){
                
                
                float temp=5.0/9*(i-32);
                cout<<i<<" "<<(int(temp*1000))/1000<<endl;
                
            }
	return 0;
}
