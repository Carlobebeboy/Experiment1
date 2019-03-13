#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string TicketPrice;
	string NumberofTicketsSold;
	int box;
	int sideline;
	int premium;
	int generaladmission;
	int totalamount;

	cout << "TicketPrice" << "   " << "NumberofticketsSold" << endl;
	
	cout <<"Box ($250.00): " << " ";
	cin >> box;
	cout << " " << "Total box tickets sales: " << box * 250 << endl;

	cout <<"Sideline ($100.00): " << " ";
	cin >> sideline;
	cout << " " << "Total sideline tickets sales: " << sideline * 100 << endl;

	cout <<"Premium ($50.00): " << " ";
	cin >> premium;
	cout << " " << "Total premium tickets sales: " << premium * 50 << endl;

	cout <<"General Admission ($25): " << " ";
	cin >> generaladmission;
	cout << " " << "Total general admission tickets sold:" << generaladmission * 25 << endl;

	
	cout << " " << "Total amount sold:" << (box * 250) + (sideline * 100) + (premium * 50) + (generaladmission * 25) << endl;
	
	_getch();
	return 0;
}




