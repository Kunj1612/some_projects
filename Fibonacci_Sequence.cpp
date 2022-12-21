/*Fibonacci Sequence - 
Enter a number and have the program generate the Fibonacci sequence to that number or to the Nth number.
*/
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int n;
	void fib(int);
	
	cout<<"Enter the limit:";
	cin>>n;
	
	fib(n);

}
void fib(int n){
	int a=0,b=1,next_num;
	for(int i=1;i<=n;i++){
		if(i==1){
			cout<<a<<" ";
		}
		else if(i==2){
			cout<<b<<" ";
		}
		else{
			next_num=a+b;
			a=b;
			b=next_num;
			cout<<next_num<<" ";
		}
	}
}
