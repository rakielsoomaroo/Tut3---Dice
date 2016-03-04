#include "Dice.h"

#include<iostream>

using namespace std;

int main()
{
	int arr[10];
	for (int y = 0; y < 10; y++)
	{
		arr[y] = y + 1;
	}

	Dice obj(5, 4, arr); //initialising values to the constructor

	float Diceavg, arrayavg;

	Diceavg = obj.avg(obj, 5); //calling the average function
	cout << "The average of the dice rolls is " << Diceavg << endl;

	arrayavg = obj.avg(arr, 4);//calling the average function
	cout << "The average of the array is" << arrayavg << endl;

	return 0;
}
