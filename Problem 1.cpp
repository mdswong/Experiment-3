#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
	int array[10];
	int smallest, largest, total;
	int index, MaxIndex, sum;
	double average;
	
	cout << "Enter ten (10) integers: " << endl;
	
	for (index=0;index<10;index++)
		array[index]=0;
		
	for (index=0;index<10;index++)
		cin >> array[index];
		
	sum=0;
	for (index=0;index<10;index++)
		sum = sum + array[index];
	
	average=sum/10;	
	
	MaxIndex = 0;
	for (index=1;index<10;index++)	
		if (array[MaxIndex] < array[index])
			MaxIndex=index;
			largest=array[MaxIndex];

	for (index=1;index<10;index++)	
		if (array[MaxIndex] > array[index])
			MaxIndex=index;
			smallest=array[MaxIndex];
	
	cout << endl;
				
	cout << "Smallest Integer: " << smallest << endl;
	cout << "Largest Integer: " << largest << endl;
	cout << "Total = " << sum << endl;
	cout << "Average = " << average << endl;
	
	getch();
	return 0;

}
