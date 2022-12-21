/*Find PI to the Nth Digit - 
Enter a number and have the program generate PI up to that many decimal places.
Keep a limit to how far the program will go.
*/


#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int size;
		
	cout<<"Enter the nth elemtnt of PI:";//limit 48
	cin>>size;
		
	cout<<setprecision(size+1)<<M_PI;//M_pi will get value of PI from math.h

	
	

}
