#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "../include/Terminale.hpp"
using namespace std;
Terminale::Terminale(int nbr)
{
	nbrMatiere=nbr;
}
Terminale::~Terminale()
{
	nbrMatiere=0;
}
void Terminale::Sauvegarder(string num)
{
	std::ofstream file{num + ".txt"};
	if(CalculerMoyenne()>=10)
		 file << "Validé";
	else
		file << "Refusé";
}




