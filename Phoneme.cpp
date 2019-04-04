#include "Phoneme.h"


using namespace std;

int Phoneme::getSonInput(CommunicationFPGA port, int filtre1_hex, int filtre2_hex, int filtre3_hex, int filtre4_hex) {
	//Possibilité de 6 son
	bool isFiltre1_On, isFiltre2_On, isFiltre3_On, isFiltre4_On;

	isFiltre1_On = filtre1_hex >= 0x4f;
	isFiltre2_On = filtre2_hex >= 0x4f;
	isFiltre3_On = filtre3_hex >= 0x4f;
	isFiltre4_On = filtre4_hex >= 0x4f;

	//Enum : 
	//"a" = 1, 
	//"e" = 2, 
	//"i" = 3,
	//"u" = 4 

	//A
	if (isFiltre1_On && (!isFiltre2_On && !isFiltre3_On && !isFiltre4_On))
	{
		cout << "----AAAA----" << endl;
		port.ecrireRegistre(nreg_ecri_aff7sg0, 0x0A);
		return 1;
	}
		
	//E
	else if (isFiltre2_On && (!isFiltre1_On && !isFiltre3_On && !isFiltre4_On))
	{
		cout << "----EEEE----" << endl;
		port.ecrireRegistre(nreg_ecri_aff7sg0, 0x0E);
		return 2;
	}
	//I
	else if (!isFiltre1_On && (isFiltre2_On && isFiltre3_On && isFiltre4_On))
	{
		cout << "----IIII----" << endl;
		port.ecrireRegistre(nreg_ecri_aff7sg0, 0x01);
		return 3;
	}
	//U
	else if ((!isFiltre1_On && !isFiltre4_On) && (isFiltre2_On && isFiltre3_On))
	{
		cout << "----UUUU----" << endl;
		port.ecrireRegistre(nreg_ecri_aff7sg0, 0x0C);
		return 4;
	}
	else
		return 0;

}