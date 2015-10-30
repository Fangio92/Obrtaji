#include "diferencijal.h"
#include <iostream>
Diferencijal::Diferencijal(int diff)
{
    if(diff==17){
        m_ratio=64/17.0;
    }
    else if(diff==13){
        m_ratio=53/13.0;
    }
}

double Diferencijal::get_ratio()
{
    //std::cout<<m_ratio<<std::endl;
    return m_ratio;
}
