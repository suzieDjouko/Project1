// Uebungsaufgabe02, Name Djouko Suzie, Datum24.10.2023


#pragma once

#include <iostream>
using namespace std;

class cHaarFoehn
{
private:
	string Bezeichnung; 
	double Leistungsaufnahme;
	int n;  // Anzahl der Schaltstufen 
	string Farbe;

public:
	cHaarFoehn(string Bezeichnung, double Leistungsaufnahme, int n, string Farbe);

	cHaarFoehn();
	~cHaarFoehn();

	//Methoden deklaration
	void eingabe(); 
						
	void ausgabe();  
};

