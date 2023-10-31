#include "cHaarFoehn.h"
using namespace std;
 
cHaarFoehn::cHaarFoehn(string BezeichIn, double LeistungsaufIn, int n, string color) // parametrisierter Konstruktor 
{
}

cHaarFoehn::cHaarFoehn() // initiake konstruktor initialisieren 
{
	Bezeichnung = "unbestimmt";
	Leistungsaufnahme = 0.0;
	n = 0;
	Farbe = "schwarz"; 
}
void cHaarFoehn::eingabe() // implementierung der Methode

{
	cout << "Gib eine Bezeichnung ein" << endl;

	cin >> Bezeichnung;

	cout << "Gib eine Leistungsaufnahme ein" << endl;

	cin >> Leistungsaufnahme; 
	
	cout << "Gib die Anzahl von Schaltstufen" << endl; 
	
	cin >> n;

	cout << "Gib eine Farbe ein" << endl;

	cin >> Farbe;

}

void cHaarFoehn::ausgabe() //implementierung der Methode

{
	cout << "cHaarFoehn: Bezeichnung = " << Bezeichnung << " , Leistungsaufnahme = " << Leistungsaufnahme << ", Anzahl von Schaltstufen = " << n << " , Farbe = " << Farbe << endl;


}

cHaarFoehn::~cHaarFoehn()
{

}
