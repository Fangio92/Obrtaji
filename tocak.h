#ifndef TOCAK_H
#define TOCAK_H
#define KOREKCIJA 1.0

class Tocak
{
public:
    Tocak(int felna, int sirina, int visina);
    ~Tocak();
    double obim_tocka();
private:
    int m_felna;
    int m_sirina;
    int m_visina;


};

#endif // TOCAK_H
