#ifndef __OUTIL__
#define __OUTIL__
#include<string>
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
bool EstDansLaBaseCandidat(string);
string consulter(string);
void Nettoyage();
void InterfaceDeChoixTerminale();
void InterfaceDeChoixVisiteur();
#endif