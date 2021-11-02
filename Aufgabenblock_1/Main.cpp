#include"Fahrzeug.h"


#include<memory>
#include<vector>
#include<cmath>

using namespace ;

void vAufgabe_1()
{
	//Fshrzeug Fahrrad("fahrrad_1)
	//Fahrzeug Auto("auto_1)
	
	int* p = new int[20];
		delete[] p;
	
		//Erzeugen Smartpointers

		unique_ptr<Fahrzeug>p_1fahrrad1 = make_unique<Fahrzeug>("fahrrad_1");
		shared_ptr<Fahrzeug>p_auto1 = make_shared<Fahrzeug>("auto_1");
		cout << p_auto1.use_count() << endl;
		shared_ptr<Fahrzeug>p_auto2 = p_auto1;
		cout << p_auto1.use_count() << endl;


		vector<unique_ptr<Fahrzeug>>vehicles;

}