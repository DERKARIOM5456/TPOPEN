#ifndef TERMINALEE_HPP
#define TERMINALEE_HPP
#include "Terminale.hpp"
class TerminaleD: public Terminale
{
   float CalculerMoyenne();
   public:
   TerminaleD();
   void SaisirNote();
};
#endif
