#ifndef TERMINALED_HPP
#define TERMINALED_HPP
#include"Terminale.hpp"
#include"TerminaleD.hpp"
 class TerminaleD : public Terminale
 {
    private:
        float CalculerMoyenne();
    public:
        TerminaleD();
        void SaisirNote();
 }
#endif