// Creating Febonacci series using Recursion.

#include<iostream>
using namespace std;

int fibo( int n){
	//base
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	//recursion
	return fibo(n-1) + fibo(n-2);
}
int main(){
	int n;
	cout<< "Enter the value of N :";
	cin >>n;
	
	cout<<" The febonacci series : ";
	for(int i=0; i<=n; i++){
		cout<<fibo(i);
		cout<< "  ";
	}
	cout<< endl;
	return 0;
}
