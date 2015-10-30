#include "menjac.h"

Menjac::Menjac(int br_brzina=5):m_br_brzina(br_brzina)
{
}
/*
         * 1 - 3.583 2 - 2.235 3 - 1.454 4 - 1.042
         * R - 3.714
         *
         * 1 - 4.091 2 - 2.235 3 - 1.469 4 - 1.043 5 - 0.863
         *
         * a formula je
         *
         * (broj obrtaja x 60/odnos brzine x odnos diferencijala) x obim tocka u
         * km
         */


double Menjac::odnos_brzine(int trenutna_brzina)
{
    if(m_br_brzina==4){

        switch (trenutna_brzina) {
        case 1:
            return 3.583;
            break;
        case 2:
            return 2.235;
            break;
        case 3:
            return 1.454;
            break;
        case 4:
            return 1.042;
            break;
        default:
            break;
        }

    }
    if(m_br_brzina==5){
        switch (trenutna_brzina) {
        case 1:
            return 4.091;
            break;
        case 2:
            return 2.235;
            break;
        case 3:
            return 1.469;
            break;
        case 4:
            return 1.043;
            break;
        case 5:
            return 0.863;
            break;
        default:
            break;
        }

    }
    return 0;
}

int Menjac::get_gear()
{
    return m_br_brzina;
}



