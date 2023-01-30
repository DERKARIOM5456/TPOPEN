#ifndef TERMINALE_HPP
#define TERMINALE_HPP
#include "Matiere.hpp"
class Terminale
{
	protected:
		Matiere matiere[6];
		int nbrMatiere;
	private:
		virtual float CalculerMoyenne()=0;
	public:
		Terminale(int);
		~Terminale();
		virtual void SaisirNote()=0;
		void Sauvegarder(string);
};
#endif

