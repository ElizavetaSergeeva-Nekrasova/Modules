#include <iostream>
#include <cstdlib>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std; 

int main(int argc, char** argv) {
	
	double cost, rubles, coins, coinsInDouble, totalEntered, change;
	
	cout << "Welcome to Shop!" << endl;
	
	cout << "Enter the cost of purchases: ";
	cin >> cost;
	cout << "Enter the quantity of rubles: ";
	cin >> rubles;
	cout << "Enter the quantity of coins: ";
	cin >> coins;
	
	coinsInDouble = coins/100;
	totalEntered = rubles + coinsInDouble;
	change = cost - totalEntered;
	cout << "Here is your change - " << change;
	
	return 0;
}


