#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "include/TerminaleC.hpp"
#include "include/TerminaleD.hpp"
#include "include/TerminaleE.hpp"
using namespace std;
template<class T>
class Type
{
    private:
        T val;
    public:
        void LectureSecuriser(T&);
        
};
bool EstDansLaBaseAgent(string);
void Nettoyage();
void InterfaceDeChoixTerminale();
void InterfaceDeChoixVisiteur();
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
                        int effectif;
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
            
            default:
                break;
        }
    }while(choixVisiteur!=3);
    if(EstDansLaBaseAgent("62222")==true)
        cout << "oui";
    else
        cout << "non";
    
}

//-------------------------------------------------

template<class T>
void Type<T>::LectureSecuriser(T &obj)
{
    int ret;
    do
    {
        cin >> obj;
        ret = cin.good();
        if(ret!=1)
        {
            cin.clear();
            cin.ignore(255*255,'\n');
            cout << "\nRessayer : ";
               
        }
    }while(ret!=1);
            
}

//-----------------------------------------------------

void Nettoyage()
{
    if(system("cls")!=0)
        system("clear");
}

//-----------------------------------------------------

bool EstDansLaBaseAgent(string mat)
{
    string tmp{"/tmp/test.txt"};
    string passTest,matT,passTm;
    vector<string> matTest,passT;
    int m{0},i,j,k=0;
    system("./config.sh");
    ifstream fichier{tmp,ios::app};
    fichier >> passTest;
    ifstream fichierDeComparaison{"passwd.txt",ios::app};
    string recuperation;
    while(getline(fichierDeComparaison,recuperation))
    {
        auto debut = begin(recuperation);
        auto fin = end(recuperation);
        auto iterateur = find(debut,fin,':');
        while (iterateur!=fin)
        {
            string mot {debut,debut+distance(debut,iterateur)};
            matTest.push_back(mot);
            debut = iterateur+1;
            iterateur = find(debut,fin,':');
        }
        string mot {debut,debut+distance(debut,iterateur)};
        passT.push_back(mot);
        for (std::string mot : matTest)
        {
            matT = mot;
        }
        for (std::string mot : passT)
        {
            passTm = mot;
        }
        if(passTest==passTm && matT==mat)
            return true;
        
    }

    return false;
}

//-----------------------------------------------------

void InterfaceDeChoixVisiteur()
{
    printf("\n###-[G-BAC]-############################");
    printf("\n#                                      #");
    printf("\n#                                      #");
    printf("\n#          Etes-vous un                #");
    printf("\n#                                      #");
    printf("\n#       1 - Agent                      #");
    printf("\n#                                      #");
    printf("\n#       2 - Candidat                   #");
    printf("\n#                                      #");
    printf("\n#       3 - Quitter                    #");
    printf("\n#                                      #");
    printf("\n#                                      #");
    printf("\n##################-(By Visionnaire)-####\n");
    printf("\nVotre choix ? : ");
    
}

//------------------------------------------------------------------

void InterfaceDeChoixTerminale()
{
    printf("\n###-[G-BAC]-############################");
    printf("\n#                                      #");
    printf("\n#                                      #");
    printf("\n#       1 - Terminal C                 #");
    printf("\n#                                      #");
    printf("\n#       2 - Terminal D                 #");
    printf("\n#                                      #");
    printf("\n#       3 - Terminal E                 #");
    printf("\n#                                      #");
    printf("\n#                                      #");
    printf("\n##################-(By Visionnaire)-####\n");
    printf("\nVotre choix ? : ");
    
}