#include <iostream>
using namespace std;

void main(void)
{
	int luku1, luku2, valinta;

	cout << "Anna luku 1: ";
	cin >> luku1;
	cout << "Anna luku 2: ";
	cin >> luku2;

	cout << "VALIKKO\n" << "1. Summa\n" << "2. Erotus\n" << "3. Tulo\n" << "4. Osamaara\n" << "5. Jakojaannos\n\n";
	cout << "Valitse laskutoimitus: ";
	cin >> valinta;

	if (valinta > 0 && valinta <= 5)
	{
		if (valinta == 1)
			cout << "Lukujen " << luku1 << " ja " << luku2 << " summa on " << luku1 + luku2 << "\n";
		if (valinta == 2)
			cout << "Lukujen " << luku1 << " ja " << luku2 << " erotus on " << luku1 - luku2 << "\n";
		if (valinta == 3)
			cout << "Lukujen " << luku1 << " ja " << luku2 << " tulo on " << luku1 * luku2 << "\n";
		if (valinta == 4)
			cout << "Lukujen " << luku1 << " ja " << luku2 << " osamaara on " << (float)luku1 / luku2 << "\n";
		if (valinta == 5)
			cout << "Lukujen " << luku1 << " ja " << luku2 << " jakojaannos on " << luku1 % luku2 << "\n";
	}
	else
		cout << "Virheellinen valinta\n";
}