#include <iostream>
// prime numbers
using namespace std;

bool isPrime(int number) {
    if (number < 2 ) return false;
    else {
        for (int i = 2; i <= number/2; i++) {
            if(number  % i == 0) return false;
        }
        return true;
    }
}

int main()
{

    int index, pCounter=0, lastPrime=0, iterator=0;
	char z;

    cout << "considering prime numbers as series" << endl;
    cout << "provide the index and correspounding number will be prompted" << endl;
    cin >> index;

    while(pCounter < index){
        if(isPrime(iterator)){
            pCounter++;
            lastPrime = iterator;
        }
        iterator++;
    }
    cout << "answer: " << lastPrime << endl;
	cin >> z;

    return 0;
}
