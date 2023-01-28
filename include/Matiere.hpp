#ifndef MATIERE_HPP
#define MATRIRE_HPP
#include <iostream>
#include <string>
using namespace std;
    class Matiere
    {
        string nom;
        float note;
        int coef;
        public:
            string GetNom();
            float GetNote();
            int GetCoef();
            void SetNom(string);
            void SetNote(float);
            void SetCoef(int);
    };
#endif