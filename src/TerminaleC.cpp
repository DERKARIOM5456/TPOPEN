#include <iostream>
#include "../include/TerminaleC.hpp"
using namespace std;
TerminaleC::TerminaleC():Terminale(6)
{
  matiere[0].SetNom("Maths");
  matiere[0].SetCoef(6);
  matiere[0].SetNote(0);
  matiere[1].SetNom("PC"); 
  matiere[1].SetCoef(6);
  matiere[1].SetNote(0);
  matiere[2].SetNom("SVT");
  matiere[2].SetCoef(3);
  matiere[2].SetNote(0);
  matiere[3].SetNom("Anglais");
  matiere[3].SetCoef(2);
  matiere[3].SetNote (0);
  matiere[4].SetNom("Français");
  matiere[4].SetCoef(3);
  matiere[4].SetNote(0);
  matiere[5].SetNom("Philo");
  matiere[5].SetCoef(2);
  matiere[5].SetNote(0);
}

void TerminaleC::SaisirNote()
{
  int note=0;
  for(int i=0;i<6;i++)
  {
    cout << "Saisir la note de " << matiere[i].nom << " : " ;
    cin >> note;
    matiere[i].SetNote(note);
  }
}
float TerminaleC::CalculerMoyenne()
{
  int som{0};
  for (int i = 0; i < 5; i++) {
    som += matiere[i].GetNote();
  }
  return (som/6);
}
