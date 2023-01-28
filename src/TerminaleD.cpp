#include<iostream>
#include"Terminale.hpp"
#include"TerminaleD.hpp"

TerminaleD::TerminaleD() : Terminale(6)
{
    matiere[0].SetNom("Maths");
    matiere[1].SetNom("PC");
    matiere[2].SetNom("SVT");
    matiere[3].SetNom("Francais");
    matiere[4].SetNom("Anglais");
    matiere[5].SetNom("Philosophie");
    matiere[0].SetCoef(5);
    matiere[1].SetCoef(5);
    matiere[2].SetCoef(5);
    matiere[3].SetCoef(3);
    matiere[4].SetCoef(2);
    matiere[5].SetCoef(2);
    matiere[0].SetNote(0);
    matiere[1].SetNote(0);
    matiere[2].SetNote(0);
    matiere[3].SetNote(0);
    matiere[4].SetNote(0);
    matiere[5].SetNote(0);
}

void TerminaleD::SaisirNote()
{
    float note;
    for(int i=0; i<6; i++)
    {
        std::cout << matier[i].GetNom() <<std::endl;
        std::cin >> note;
        matiere[i].SetNote(note);
    }

}

float TerminaleD::CalculerMoyenne()
{
    float Somme{0},Moyenne;
    for(int i=0; i<6; i++)
        Somme += matiere[i].GetNote()*matiere[i].GetCoef();
    Moyenne = Somme/22;
    return Moyenne;
}