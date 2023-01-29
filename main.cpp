#include<iostream>
#include<string.h>
#include"include/TerminaleC.hpp"
#include"include/TerminaleD.hpp"
#include"include/TerminaleE.hpp"
int main(void)
{
    char Serie;
    cout <<"\n\tSAISIS LA SERIE:";
    cin >>Serie;
    switch(Serie)
    {
      case 'C': TerminaleC TC; int nbr;cout <<"\n\tSAISIR LES CANDIDATS DE CETTE SERIE:";
              cin >> nbr;
              for(int i(0);i<nbr;i++)
              {
                 TC.SaisirNote();
              }  
     case 'D':
     case 'E':  
        break;
    
    default:
        break;
    }
}