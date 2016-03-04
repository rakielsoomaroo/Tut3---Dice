#include "Dice.h"
#include <iostream>

using namespace std;

Dice::Dice(int rollnum_in,int arraynum_in,int arr[10])
{
	setDice(rollnum_in,arraynum_in,arr);
	
	
	
}

void Dice::setDice(int rollnum_in, int arraynum_in, int arr[10])
{
	rollnumber = 0;
	arrayn = 0;
	arr[10] = 0;

	rollnumber = 0;
	arrayn = arraynum_in;
	arr[arrayn] = arr[10];

	if ((rollnum_in >= 1) && (rollnum_in <= 6))
		rollnumber = rollnum_in;
	else
		cout << "This is an improper input for the number of rolls entered" << endl;
}


float Dice::roll(){
	float random = 0;
	random = (rand() %(5)) + 1;
	return random;
}

float Dice::avg(Dice obj, int n){
	float average = 0.0;
	int rolln = 1;
	float sum = 0;
	while (rolln != n)
	{
		float r = obj.roll();
		cout << "random" << r << endl;
		sum = sum + r;
		rolln++;

	}
	average = sum / n;
	
	return average;
}

float Dice::avg(int arr[10], int n){
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
	     sum = sum + arr[i];
	}
	float average = sum / n;
	return average;

}

Dice::~Dice()
{
}
