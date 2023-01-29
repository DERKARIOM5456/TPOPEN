#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
template<class T>
class Type
{
    private:
        T val;
    public:
        void LectureSecuriser(T);
        
};
bool EstDansLaBaseAgent(string);
void Nettoyage();

int main()
{
    Type<int> lecture;
    int var;
    string pass,mat;
    Nettoyage();
    InterfaceDeChoixVisiteur();
    lecture.LectureSecuriser(var);
    do
    {
        switch (var)
        {
            case 1:
                if(EstDansLaBaseAgent("62222"))
                break;
            
            default:
                break;
        }
    }while(var!=3);
    if(EstDansLaBaseAgent("62222")==true)
        cout << "oui";
    else
        cout << "non";
    
}

//-------------------------------------------------

template<class T>
void Type<T>::LectureSecuriser(T obj)
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
        cout << "\n[ " <<matT << "  " << passTm << " ]\n";
        cout << passTest;
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