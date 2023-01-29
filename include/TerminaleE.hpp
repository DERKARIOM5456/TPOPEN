#ifndef TERMINALEE_HPP
#define TERMINALEE_HPP
#include "Terminale.hpp"
class TerminaleE: public Terminale
{
   float CalculerMoyenne();
   public:
   TerminaleE(int);
   void SaisirNote();
};
#endif
