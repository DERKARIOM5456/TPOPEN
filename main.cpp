#include <iostream>
using namespace std;
#include "include/TerminaleC.hpp"
#include "include/TerminaleE.hpp"
#include "include/TerminaleD.hpp"
#include "include/Terminale.hpp"
void InterfaceDeChoixVisiteur();
bool EstMotDePasseCorrecte(string);

int main()
{
    int elm;
    InterfaceDeChoixVisiteur();
    cin >> elm;
}
void InterfaceDeChoixVisiteur()
{
    printf("\n###-[G-BAC]-###########################");
    printf("\n#                                     #");
    printf("\n#                                     #");
    printf("\n#         Etes-vous un                #");
    printf("\n#                                     #");
    printf("\n#         1 - Agent                   #");
    printf("\n#                                     #");
    printf("\n#         2 - Candidat                #");
    printf("\n#                                     #");
    printf("\n#                                     #");
    printf("\n##################-(By Visionnaire)-###");
    printf("\nVotre choix ? :                        ");
    
}
