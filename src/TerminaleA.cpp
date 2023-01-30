#include <iostream>
#include "../include/TerminaleA.hpp"
TerminaleC::TerminaleC():Terminale(6)
{
  matiere[0].SetNom("Philosophie");
  matiere[0].SetCoef(4);
  matiere[0].SetNote(0);
  matiere[1].SetNom("Français"); 
  matiere[1].SetCoef(4);
  matiere[1].SetNote(0);
  matiere[2].SetNom("HistoireGéographie");
  matiere[2].SetCoef(3);
  matiere[2].SetNote(0);
  matiere[3].SetNom("Anglais");
  matiere[3].SetCoef(3);
  matiere[3].SetNote (0);
  matiere[4].SetNom("Arabe");
  matiere[4].SetCoef(2);
  matiere[4].SetNote(0);
  matiere[5].SetNom("Mathématiques");
  matiere[5].SetCoef(2);
  matiere[5].SetNote(0);
}

void TerminaleC::SaisirNote()
{
  float note=0;
  for(int i=0;i<6;i++)
  {
    cout << matiere[i].nom << ": " ;
    cin >> note;
    matiere[i].SetNote(note);
  }
}
float TerminaleC::CalculerMoyenne()
{
  float som{0};
  for (int i=0;i<6;i++) {
    som = som + matiere[i].GetNote()*matiere[i].GetCoef();
  }
  return (som/18);
}