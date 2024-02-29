#include<iostream>
using namespace std;
int F(int n){
	if(n<10){
	return n;	
	}
	return n % 10 +F(n/10);
}

int main(){
int number,sum;
cout<<"Enter a number:";
cin>>number;

	
sum=F(number);	
cout<<sum;	
	
}
