#include "commandCenter.h"
#include <iostream>
#include <string>



using std::cout;
using std::endl;
using std::string;


#if 0
void doingStuff(string yksi, string kaksi)

{
	//Should not be ran
	cout << yksi << " " << kaksi;


}

#endif


//muutetaan tämä sillee että .exe -olo search_w tiedosto.txt 
//lisätään ominaisuuksia tähän

void doingStuff(int argCee, string yksi, string kaksi, string kolme)
{
	//should run koska 3 parametria
	cout << "\nArgument count: " << argCee << endl;
	cout << "Additional command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << ", \"" << kolme << "\"" << endl << endl;


	if (yksi == "-olo")
		olo(argCee, yksi, kaksi, kolme);


}


void doingStuff(int argCee, string yksi)
{
	//should run koska 3 parametria
	cout << "Argument count: " << argCee << endl;
	cout << yksi << endl;
	if (yksi == "help")
		printTest();
	else
		cout << "???\nInvalid command";

}

//tämä sillee että .exe search_w tiedosto.txt 

#if 0
void doingStuff(int argCee, string yksi, string kaksi)
{
	cout << "Argument count, " << argCee << endl;
	cout << "Command line arguments: \n";
	cout << "\"" << yksi << "\"" << ", \"" << kaksi << "\"" << endl;
	basicRun(argCee, yksi, kaksi);


}

#endif