#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
  
int main()

{
	
	int characters = 0;
	string text;
	
	cout << "Enter text: "; cin >> text;
	
	text = string(text.rbegin(),text.rend());
	
	while (text[characters] != '\0') 
    characters++;
	
	cout << "Array Size: " << characters << endl;
	cout << "Reverse Order: " << text << endl;

	_getch();	
	return 0;
   
}
