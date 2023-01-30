#ifndef TERMINALED_HPP
#define TERMINALED_HPP
#include "Terminale.hpp"
class TerminaleD: public Terminale
{
   float CalculerMoyenne();
   public:
   TerminaleD(int);
   void SaisirNote();
   ~TerminaleD();
};
#endif
