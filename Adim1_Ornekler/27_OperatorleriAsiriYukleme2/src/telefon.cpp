#include<iomanip>
#include"telefon.h"

using namespace std;

ostream &operator<<(ostream &output, const Telefon &numara)
{
    output << "(" << numara.alanKodu << ")" << numara.ilkUc << "-"
        << numara.sonDort;
    return output;
}

istream &operator>>(istream &input, Telefon &numara)
{
    input.ignore();
    input >> setw(4) >> numara.alanKodu;
    input.ignore(1);
    input >> setw(4) >> numara.ilkUc;
    input.ignore();
    input >> setw(4) >> numara.sonDort;
    return input;
}
