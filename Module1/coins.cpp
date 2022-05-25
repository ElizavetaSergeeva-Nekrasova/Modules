#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	double fractional, coins;
	int integer;
	
	cout << "Enter some fractional number: ";
	cin >> fractional;
	
	integer = fractional;
	coins = fractional - integer;
	
	cout << coins << endl;
	cout << "Hello World!";
	return 0;
}
