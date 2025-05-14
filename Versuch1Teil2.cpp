/////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
// Versuch 1.2: Strukturen
//
// Datei:  Strukturen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{

	struct Person {

		std::string sNachname;
		std::string sVorname;
		int iGeburtsjahr;
		int iAlter;
	};

	Person nBenutzer;

	std::cout<< "bitte geben sie Ihre Nachname" <<std::endl;
	std::cin>> nBenutzer.sNachname;

	std::cout<< "bitte geben sie Ihre Vorname" <<std::endl;
	std::cin>> nBenutzer.sVorname;

	std::cout<< "bitte geben sie Ihre Geburtsjahr" <<std::endl;
	std::cin>> nBenutzer.iGeburtsjahr;

	std::cout<< "bitte geben sie Ihre Alter" <<std::endl;
	std::cin>> nBenutzer.iAlter;

	// fur Kontrollierung:
	std::cout<< "Also das ist Sie :" <<"\n" <<nBenutzer.sNachname <<"\n" <<nBenutzer.sVorname <<"\n" <<nBenutzer.iGeburtsjahr <<"\n" <<nBenutzer.iAlter <<std::endl;

	// fur einzeln Kopierung:
	Person nKopieEinzeln;

	nKopieEinzeln.sNachname = nBenutzer.sNachname;
	nKopieEinzeln.sVorname = nBenutzer.sVorname;
	nKopieEinzeln.iGeburtsjahr = nBenutzer.iGeburtsjahr;
	nKopieEinzeln.iAlter = nBenutzer.iAlter;

	// fur gesamte Kopierung:
	Person nKopieGesamt = nBenutzer;

	std::cout << "Das ist einzelkopie: " << "\n" << nKopieEinzeln.sNachname << "\n" << nKopieEinzeln.sVorname << "\n"
	          << nKopieEinzeln.iGeburtsjahr << "\n" << nKopieEinzeln.iAlter << std::endl;

	std::cout << "Das ist gesamtkopie: " << "\n" << nKopieGesamt.sNachname << "\n" << nKopieGesamt.sVorname << "\n"
	          << nKopieGesamt.iGeburtsjahr << "\n" << nKopieGesamt.iAlter << std::endl;
    return 0;
    
}
