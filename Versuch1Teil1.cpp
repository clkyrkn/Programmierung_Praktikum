//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 
// 
// Versuch 1.1: Datentypen und Typumwandlung
//
// Datei:  Variablen.cpp
// Inhalt: Hauptprogramm
//////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main()
{

//    int iErste;
//    int iZweite;
//
//    std::cout << " bitte geben Sie ein Zahl " << std::endl;
//    std::cin >> iErste;
//
//    std::cout << " bitte geben Sie zweite Zahl " << std::endl;
//    std::cin >> iZweite;
//
//
//    //diese sind fur 1.)
//    int iSumme = iErste + iZweite;
//    int iQuotient = iErste/iZweite;
//
//
//    //diese sind fur 2.)
//    double dSumme = iErste + iZweite;
//    double dQuotient = iErste/iZweite;
//
//    //diese sind fur 3.)
//    double dSummeCast = iSumme;
//	double dQuoientCast = iQuotient;
//
//	/* okay, nach Typecasting sind alle Werte gleich wie vorher, weil wir nur
//	 * int zu double umgewandelt nicht umgekehrt.
//	 * Und falls wir geben Double type Zahl zu int Variable (Linien 16-23)
//	 * dann haben wir Exit, also programm geht nicht weiter.
//	 */
//
//    std::cout << " das ist Summe von erste und zweite Eingaben (ohne Typecasting): " << iSumme << std::endl;
//    std::cout << " das ist Division von erste und zweite Eingaben (ohne Typecasting) : " << iQuotient << std::endl;
//
//    std::cout << " das ist Summe von erste und zweite Eingaben (mit Typecasting): " << dSummeCast << std::endl;
//    std::cout << " das ist Division von erste und zweite Eingaben (mit Typecasting) : " << dQuoientCast << std::endl;
//
//
    //diese sind fur 4.)
    std::string sVorname;
	std::string sNachname;

	std::cout << "bitte Geben sie ihre Vorname" << std::endl;
    std::cin >> sVorname;


	std::cout << "bitte Geben sie ihre Norname" << std::endl;
    std::cin >> sNachname;

    std::string sVornameName = sVorname + " " + sNachname;
    std::cout<< "Das ist ihre Vollname: "<< sVornameName << std::endl;

    std::string sNameVorname = sNachname + ", " + sVorname;
    std::cout<< "Das ist ihre Nachname, Vorname: "<< sNameVorname << std::endl;


    //diese sind fur 5.)
//    {
//
//    	int iFeld[2];
//
//    	iFeld[0] = 1;
//    	iFeld[1] = 2;
//
//    	std::cout<< "das ist erste: "<< iFeld[0] << " und das ist zweite: "<< iFeld[1] <<std::endl;
//
//    	int spielfeld[2][3];
//
//    	spielfeld[0][0] = 1, spielfeld[0][1] = 2, spielfeld[0][2] = 3, spielfeld[1][0] = 4, spielfeld[1][1] = 5, spielfeld[1][2] = 6;
//    	std::cout<< "das ist spielfeld :\n" <<spielfeld[0][0] <<" " << spielfeld[0][1] << " " <<spielfeld[0][2] <<"\n" << spielfeld[1][0] <<" " << spielfeld[1][1] << " " <<spielfeld[1][2] <<std::endl;
//
//    	const int iZweite = 1;
//    	std::cout<< "das ist iZweite (in Block): " << iZweite <<std::endl;
//    }

    // das geht nicht, da iZweite in Blocke definiert ist.
    // std::cout<< "das ist iZweite (ausser Block): " << iZweite <<std::endl;

    //diese sind fur 6.)

    int iName1 = int(sVorname[0]);
    int iName2 = int(sVorname[1]);

    std::cout<< "Diese sind die Zahlen, die erste und zweite Buchstaben von Vorname umgewandelt wird: "<<iName1<< ", " << iName2 <<std::endl;

    // fur iName1:
    if (65 <= iName1 && iName1 <=90) {

    	int Reihe = iName1 % 64;
    	std::cout<< "Erste Buchstabe von Name is " << Reihe <<std::endl;

    } else if (97 <= iName1 && iName1 <=122){

    	int Reihe = iName1 % 96;
    	std::cout<< "Erste Buchstabe von Name is " << Reihe <<std::endl;

    } else {
    	std::cout<< "ungultige Charakter"  <<std::endl;
    }

    // fur iName2:
    if (65 <= iName2 && iName2 <=90) {

    	int Reihe = iName2 % 64;
    	std::cout<< "Zweite Buchstabe von Name is " << Reihe <<std::endl;

    } else if (97 <= iName2 && iName2 <=122){

    	int Reihe = iName2 % 96;
    	std::cout<< "Zweite Buchstabe von Name is " << Reihe <<std::endl;

    } else {
    	std::cout<< "ungultige Charakter"  <<std::endl;

    }

    return 0;
    
}