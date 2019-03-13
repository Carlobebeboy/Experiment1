#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int mass;
	int density;
	double volume;


	cout <<"Volume of the object" << endl;
	cout << " " << endl;

	cout << "Mass: ";
	cin >> mass;
	cout << "Mass: " << "                  " << mass << "grams" << endl;

	cout << " " << endl;

	cout << "Density: ";
	cin >> density;
	cout << "Density: " << "          " << density << "grams per cubic centimeters" << endl;

	cout << " " <<endl;

	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Volume: " << "          " << 0.25*mass/density << " " << "cubic centimeter" << endl;

	_getch();
	return 0;
}