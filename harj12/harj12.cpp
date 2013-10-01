// Valtteri Ahonen
// Harjoitus 12
// 1.10.2013

#include <iostream>
using namespace std;

int main()
{
	int luku1, rivinro;
	int toisto = 0;
	
	do // Niin kauan kunnes annetaan kelpuutettu luku (1-9)
	{
		cout << "Anna kokonaisluku 1-9." << endl;
		cin >> luku1;
	} while(luku1 < 1 || luku1 > 9);

	for(rivinro = 1; luku1 >= rivinro; ++rivinro) // Itse tulostus
	{
		do
		{
			cout << rivinro;
			toisto++;
		} while(toisto < rivinro);

		toisto = 0;
		cout << endl;
	}
}