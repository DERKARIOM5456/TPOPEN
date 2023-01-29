#ifndef TERMINALEC_HPP
#define TERMINALEC_HPP
#include "Terminale.hpp"
  class TerminaleC : public class Terminale
  {
  	public:
  		TerminaleC();
  		void SaisirNote();
	private:
  		float CalculerMoyenne();
  };
#endif


