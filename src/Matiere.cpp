#include "../include/Matiere.hpp"
string Matiere::GetNom()
{
    return nom;
}
float Matiere::GetNote()
{
    return note;
}
int Matiere::GetCoef()
{
    return coef;
}
void Matiere::SetNom(string nom)
{
    this->nom = nom;
}
void Matiere::SetNote(float note)
{
    this->note = note;
}
void Matiere::SetCoef(int coef)
{
    this->coef = coef;
}
