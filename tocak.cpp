#include "tocak.h"
#include <math.h>
#include <iostream>

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
    // std::cout<<"Felna:"<<m_felna<<" obim: "<<obim <<std::endl;

    obim+=(m_sirina/1000.0)*m_visina * 2 - KOREKCIJA; //guma dodata u precnik - cm
    //std::cout<<"Sirina: "<<m_sirina/1000.0<<" Visina: "<<m_visina <<" Obim: "<<obim<<std::endl;

    obim=obim*M_PI; //puta pi
    //std::cout<<obim <<std::endl;
    return obim;
}
