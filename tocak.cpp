#include "tocak.h"
#include <math.h>


Tocak::Tocak(int felna=13, int sirina=155, int visina=70):m_felna(felna),m_sirina(sirina),m_visina(visina)
{

}
Tocak::~Tocak(){

}

double Tocak::obim_tocka()
{
 //obim tocka se racuna kao precnik felne * 2.54 + 2 * visina gume * PI.
    double obim=0;

    obim=m_felna*2.54; // felna dodata u precnik - cm
    obim+=(m_sirina/100)*m_visina * 2 / 10 - KOREKCIJA; //guma dodata u precnik - cm
    obim=obim*M_PI; //puta pi

    return obim;
}
