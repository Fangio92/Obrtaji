#ifndef MENJAC_H
#define MENJAC_H

class Menjac
{
public:
    Menjac(int br_brzina);
    double odnos_brzine(int trenutna_brzina);
    int get_gear();
private:
    int m_br_brzina;
};

#endif // MENJAC_H
