#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
	int A[7], B[7], C[7], i;
	
	cout << "Enter temperature for Province A: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province A, Day " << i+1 << ": ";
	cin >> A[i];	
	}
	
	cout << endl;
	
	cout << "Enter temperature for Province B: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province B, Day " << i+1 << ": ";
	cin >> B[i];	
	}
	
	cout << endl;
	
	cout << "Enter temperature for Province C: \n";
	
	for (i=0; i < 7; i++)
	{
	cout << "Province C, Day " << i+1 << ": ";
	cin >> C[i];	
	}

	cout << endl << endl;
	
	cout << "Temperature for a week of Province A: \n";
	for (i=0; i < 7; i++)
	cout<< "Province A, Day " << i+1<< " = " << A[i] << endl;
	
	cout << endl;
	cout << "Temperature for a week of Province B: \n";
	for (i=0; i < 7; i++)
	cout<< "Province B, Day " << i+1<< " = " << B[i] << endl;
	
	cout << endl;
	cout << "Temperature for a week of Province C: \n";
	for (i=0; i < 7; i++)
	cout<< "Province C, Day " << i+1<< " = " << C[i] << endl;
	
	
	_getch();
	return 0;
}
