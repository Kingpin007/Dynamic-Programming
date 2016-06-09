#include "Knapsack.h"
#include <iostream>
#define ll long long int
#define max(a,b) a>=b?a:b

using namespace std;


Knapsack::Knapsack()
{
}


Knapsack::~Knapsack()
{
}

void Knapsack::init()
{
	cout << "Enter the number of items: ";
	cin >> n;
	values = new ll[n];
	weight = new ll[n];
	cout << "Enter weights(in ascending order): ";
	for (ll i = 0;i < n;i++) {
		cin >> weight[i];
	}
	cout << "Enter the corresponding items: ";
	for (ll i = 0;i < n;i++) {
		cin >> values[i];
	}
	cout << "Enter the total Weight: ";
	cin >> wt;
	t = new ll*[n];
	for (ll i = 0;i < n;i++)
		t[i] = new ll[wt+1];
}

void Knapsack::fill()
{
	for (ll i = 0;i < n;i++) {
		for (ll j = 0;j <= wt;j++) {
			if (j == 0) {
				t[i][j] = 0;
			}
			if (i == 0) {
				if (j < weight[i])
					t[i][j] = 0;
				else {
					t[i][j] = values[i];
				}
			}
			else {
				if (j < weight[i])
					t[i][j] = t[i - 1][j];
				else
					t[i][j] = max(t[i - 1][j - weight[i]] + values[i], t[i - 1][j]);
			}
		}
	}
}

void Knapsack::display()
{
	cout << t[n - 1][wt] << endl;
	system("pause");
}
