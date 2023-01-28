#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "../include/Terminale.hpp"
using namespace std;
Terminale::Terminale(int nbr)
{
	nbrMatiere=nbr;
	matiere=new Matiere[nbrMatiere];
}
Terminale::~Terminale()
{
	delete(matiere);
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




