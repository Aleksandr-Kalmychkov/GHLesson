#include <vector>
#include <iostream>
using namespace std;

int SumOfPositive(vector<int> arr)
{
	int summ = 0;
	for (auto obj : arr)
	{
		summ += obj > 0 ? obj : 0;
	}
	return summ;
}

vector<int> GenerateVector(int minValue, int maxValue, int length)
{
	vector<int> vec;
	for (size_t i = 0; i < length; i++)
	{
		vec.push_back(rand()%(maxValue-minValue+1)+minValue);
		cout << vec.at(i) <<endl;
	}
	return vec;
}

int main()
{
}