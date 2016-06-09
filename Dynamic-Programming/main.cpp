#include <iostream>
#include <cstdlib>
#include "Knapsack.h"

#define ll long long int
#define ull unsigned long long int

using namespace std;

int main() {
	int ch;
	do {
		system("cls");
		cout << "Welcome to the Dynamic Programming Program\n Choose among the following problems:\n";
		cout << "1. 0-1 Knapsack Problem\n";
		cout << "2. Longest Common Subsequence\n";
		cout << "3. Matrix Chain Multiplication\n";
		cout << "4. Subset Sum\n";
		cout << "5. Optimal Binary Search Tree\n";
		cout << "6. Coin Changing Minimum Number of Coins Dynamic programming\n";
		cout << "7. Coin Changing Minimum Number of Coins Dynamic programming \n";
		cout << "8. Minimum Edit Distance\n";
		cout << "9. Longest Pallindromic Sequence\n";
		cout << "10. Coin changing number of ways to get total\n";
		cout << "Please Enter choice enter -1 to exit: ";
		cin >> ch;
		Knapsack K;
		switch (ch)
		{
		case 1:			
			K.init();
			K.fill();
			K.display();
			break;
		default:
			break;
		}
	} while (ch != -1);
}