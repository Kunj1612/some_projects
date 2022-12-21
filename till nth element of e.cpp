/*Find e to the Nth Digit - Just like the previous problem, but with e instead of PI.
 Enter a number and have the program generate e up to that many decimal places. 
 Keep a limit to how far the program will go.
*/


#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){
	int size;
		
	cout<<"Enter the nth elemtnt of e:";//limit 51
	cin>>size;
		
	cout<<setprecision(size+1)<<M_E;//M_E will get value of e from math.h

	
	

}
