// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	float a, b, c, min, med, max;
	cout << "podaj liczbe a\n";
	cin >> a;
	cout << "podaj liczbe b\n";
	cin >> b;
	cout << "podaj liczbe c\n";
	cin >> c;

	if (b <= a && c <= a ) {
		max = a;

}
	if (a <= b && c <= b) {
		max = b;
	}
	if (a <= c && b <= c) {
		max = c;

	}
	if (b <= a && a <= c) {
		med = a;

	}
	if (b <= a && c <= b) {
		med = b; 
	}
	if (c <= a && b <= c) {
		med = c;
	}
	if (a <= b && a <= c) {
		min = a;
	}
	if (b <= a && b <= c) {
		min = b;
	}
	if (c <= a && c <= b) {
		min = c;
	}
	float suma = a + b + c;
	cout << "Suma" << suma << endl;
	cout << "max" << max << endl;
	cout << "med" << med << endl;
	cout << "min:" << min << endl;

	cout << "Naciśnij cokolwiek, aby zamknac";
	cin >> a;


	
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
