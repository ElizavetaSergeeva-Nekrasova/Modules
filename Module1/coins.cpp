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
	
	cout << coins;
	return 0;
}
