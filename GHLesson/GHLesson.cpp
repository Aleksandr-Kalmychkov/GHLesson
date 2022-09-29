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
	}
	return vec;
}

int main()
{
	vector<int> vec = GenerateVector(-250, 250, 200);
	cout << "Generated vector:" << endl;
	for (auto el : vec)
	{
		cout << el << "; ";
	}
	cout << endl;
	cout << "Summ of positive elements:" << endl;
	cout << SumOfPositive(vec);
}