#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	double current, previous, result;
	
	cout << "Enter current value: ";
	cin >> current;
	cout << "Enter previous value: ";
	cin >> previous;
	
	result = current - previous;
	cout << result;
	return 0;
}
