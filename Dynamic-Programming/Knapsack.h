#pragma once
#define ll long long int
class Knapsack
{
	ll *values, *weight, **t, n, wt;
public:
	Knapsack();
	void init();
	void fill();
	void display();
	~Knapsack();
};

