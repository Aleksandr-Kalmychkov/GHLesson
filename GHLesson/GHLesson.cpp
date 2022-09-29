#include <vector>
#include <iostream>
using namespace std;


//Returns summ of positive elements of vector
int SumOfPositive(vector<int> arr)
{
	int summ = 0; //init var for result
	for (auto obj : arr) //cycle for all vector
	{
		summ += obj > 0 ? obj : 0; //if element is positive then add him to summ
	}
	return summ; //return result
}

//Generate and return vector
//minValue - minimal value of vector element that can be generated 
//maxValue - maximal value of vector element that can be generated 
vector<int> GenerateVector(int minValue, int maxValue, int length)
{
	vector<int> vec; //init var for vector
	for (size_t i = 0; i < length; i++) //cycle to create elements of vector. From 0 to length
	{
		vec.push_back(rand()%(maxValue-minValue+1)+minValue); //Add element to end. Random give number from minValue to MaxValue
	}
	return vec; //Return generated vector
}

int main()
{
	vector<int> vec = GenerateVector(-250, 250, 200); //Generate vector
	cout << "Generated vector:" << endl;
	for (auto el : vec) //output generated vector
	{
		cout << el << "; ";
	}
	cout << endl;
	cout << "Summ of positive elements:" << endl;
	cout << SumOfPositive(vec); //output summ of positive
}