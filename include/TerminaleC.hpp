#ifndef TERMINALEC_HPP
#define TERMINALEC_HPP
#include "Terminale.hpp"
class TerminaleC:public Terminale
{
	private:
  		float CalculerMoyenne();
  	public:
  		TerminaleC(int);
  		void SaisirNote();
		~TerminaleC();
};
#endif
