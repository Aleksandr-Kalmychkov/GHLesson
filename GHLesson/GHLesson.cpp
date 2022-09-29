#include <vector>
#include <iostream>
using namespace std;

int main()
{
}

int SumOfPositive(vector<int> arr)
{
	int summ = 0;
	for (auto obj : arr)
	{
		summ += obj > 0 ? obj : 0;
	}
	return summ;
}