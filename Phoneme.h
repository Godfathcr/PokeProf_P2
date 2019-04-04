#pragma once
#include <iostream>
#include "CommunicationFPGA.h"

class Phoneme {
	unsigned const int nreg_ecri_aff7sg0 = 7;

	public:
		int getSonInput(CommunicationFPGA FPGA, int filtre_1, int filtre_2, int filtre_3, int filtre_4);
};
	

