#include<iostream>
#include"TerminaleD.hpp"
TerminaleD::TerminaleD():Terminale(6)
{
    matiere[0].SetNom("Mathematique");
    matiere[0].SetNote(0);
    matiere[0].SetCoef(5);
    matiere[1].SetNom("PhysiqueChimie");
    matiere[1].SetNote(0);
    matiere[1].SetCoef(5);
    matiere[2].SetNom("Francais");
    matiere[2].SetNote(0);
    matiere[2].SetCoef(3);
    matiere[3].SetNom("SVT");
    matiere[3].SetNote(0);
    matiere[3].SetCoef(5);
    matiere[4].SetNom("Philosophie");
    matiere[4].SetNote(0);
    matiere[4].SetCoef(3);
    matiere[5].SetNom("Anglais");
    matiere[5].SetNote(0);
    matiere[5].SetCoef(2);
}
void TerminaleD::SaisirNote()
{
    int n;
  for(int i(0); i<6 ;i++)
  {
      cout << matiere[i].GetNom() <<":" <<endl;
      cin >> n ;
      matiere[i].SetNote(n);
  }
}
float TerminaleD::CalculerMoyenne()
{
    float noteTotal=0; 
    int coefTotal=0;
    for(int i(0);i<6;i++)
    {
          noteTotal= noteTotal+matiere[i].GetNote()*matiere[i].GetCoef();
          coefTotal=coefTotal+matiere[i].GetCoef();
    }
    return(noteTotal/coefTotal);
}
