/* This is a simple exercise to find the range of prime numbers. 
	Written by Uriel Flores 05/07/2017 */

#include <iostream>
using namespace std;

int isprime(int);

int main() {
	int n, i;
	cout << "Enter the range of prime numbers: ";
	cin >> n;

	for(int i = 2; i <= n; i++) {
		if(isprime(i)){
			return 0;
		}
	}
}

int isprime(int i) {
	int a, b = 1;
	for(a = i-1; a > i; i--) {
		b = i % a;
		if(b == 0) {
			return 0;
		}
		if(b == 1) {
			return 1;
		}
		
}
}
