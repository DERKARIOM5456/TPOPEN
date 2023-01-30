#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "include/TerminaleC.hpp"
#include "include/TerminaleD.hpp"
#include "include/TerminaleE.hpp"
#include "include/outil.hpp"
using namespace std;
int main()
{
    Type<int> lectureInt;
    Type<string> lectureString;
    int choixVisiteur,choixTerminale;
    int ressai;
    string matAgent;
    TerminaleD D(6);
    TerminaleD C(6);
    TerminaleD E(6);
    int effectif;
    string mat;    
    do
    {
        Nettoyage();
        InterfaceDeChoixVisiteur();
        lectureInt.LectureSecuriser(choixVisiteur);
        Nettoyage();
        switch (choixVisiteur)
        {
            case 1:
                cout <<"\nmatricule > ";
                lectureString.LectureSecuriser(matAgent);
                if(EstDansLaBaseAgent(matAgent))
                {
                    Nettoyage();
                    InterfaceDeChoixTerminale();
                    lectureInt.LectureSecuriser(choixTerminale);
                    switch (choixTerminale)
                    {
                    case 1:
                        Nettoyage();
                        cout << "\n###-[G-BAC]-############################";  
                        cout << "\nEffectif > ";
                        lectureInt.LectureSecuriser(effectif);
                        for(int i=0;i<effectif;i++)
                        {
                            cout<< "Candidat N-"<<i+1;
                            cout << "\n\tmatricule > ";
                            lectureString.LectureSecuriser(mat);
                            C.SaisirNote();
                            C.Sauvegarder(mat);
                        }
                        
                        break;
                    case 2:
                        Nettoyage();
                        cout << "\n###-[G-BAC]-############################";  
                        cout << "\nEffectif > ";
                        lectureInt.LectureSecuriser(effectif);
                        for(int i=0;i<effectif;i++)
                        {
                            cout<< "Candidat N-"<<i+1;
                            cout << "\n\tmatricule > ";
                            lectureString.LectureSecuriser(mat);
                            D.SaisirNote();
                            D.Sauvegarder(mat);
                        }
                        
                        break;
                        case 3:
                        Nettoyage();
                        cout << "\n###-[G-BAC]-############################";  
                        cout << "\nEffectif > ";
                        lectureInt.LectureSecuriser(effectif);
                        for(int i=0;i<effectif;i++)
                        {
                            cout<< "Candidat N-"<<i+1;
                            cout << "\n\tmatricule > ";
                            lectureString.LectureSecuriser(mat);
                            E.SaisirNote();
                            E.Sauvegarder(mat);
                        }
                        
                        break;
                    
                    default:
                        break;
                    }
                }
                else
                {
                    Nettoyage();
                    cout << "\nMatricule ou mot de passe incorrect";
                }
                break;
            case 2:
                    Nettoyage();
                    cout << "\n###-[G-BAC]-############################";
                    cout << "\nmatricule > ";
                    lectureString.LectureSecuriser(mat);
                    if(EstDansLaBaseCandidat(mat))
                        cout << "\n" << consulter(mat);
                    else
                    {
                        Nettoyage();
                        cout << "\nCe numero de matricule n'existe pas dans la base";
                    }
            default:
                break;
        }
    }while(choixVisiteur!=3);
    
}
