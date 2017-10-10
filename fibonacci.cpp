#include <iostream>

using namespace std;

int main(){
	int N, a=1, b=1; 
	
	int i, T;
	
	cout << "Enter a  number N :" ;
	cin >> N ;
    cout<< a << endl;
	for (int i=1; i<N; ++i )
	{
	cout<< b <<endl;
			T = a+b;
	        a=b; 
	        b=T;      
	}
	
	return 0;
}
