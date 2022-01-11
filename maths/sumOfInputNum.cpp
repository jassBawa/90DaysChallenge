#include <iostream>
using namespace std;

int main() {
	
	int n;
    cout<<"Enter number"<<endl;
	cin>>n;
	while(n>0){
	    int num;
	    int sum =0;
        cout<<"Enter your number: "<<endl;
	    cin>>num;
	    
	    while(num>0){
	    sum += num%10;
	    num = num/10;
	    }
	    cout<<sum<<endl;
	    n--;
	}
	return 0;
}