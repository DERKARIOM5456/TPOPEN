#include<iostream>
#include"TerminaleE.hpp"
TerminaleE::TerminaleE():Terminale(6)
{
    matiere[0].SetNom("Mathematique");
    matiere[0].SetNote(0);
    matiere[0].SetCoef(6);
    matiere[1].SetNom("Physique");
    matiere[1].SetNote(0);
    matiere[1].SetCoef(6);
    matiere[2].SetNom("Francais");
    matiere[2].SetNote(0);
    matiere[2].SetCoef(3);
    matiere[3].SetNom("Dessin Technique");
    matiere[3].SetNote(0);
    matiere[3].SetCoef(5);
    matiere[4].SetNom("Mecanique General");
    matiere[4].SetNote(0);
    matiere[4].SetCoef(3);
    matiere[5].SetNom("Anglais");
    matiere[5].SetNote(0);
    matiere[5].SetCoef(2);
}
void TerminaleE::SaisirNote()
{
    int n;
  for(int i(0); i<6 ;i++)
  {
      cout << matiere[i].GetNom() <<":" <<endl;
      cin >> n ;
      matiere[i].SetNote(n);
  }
}
float TerminaleE::CalculerMoyenne()
{
    float noteTotal=0; 
    int coefTotal=0;
    for(int i(0);i<6;i++)
    {
          noteTotal= noteTotal+matiere[i].GetNote();
          coefTotal=coefTotal+matiere[i].GetCoef();
    }
    return(noteTotal/coefTotal);
}