#ifndef TELEFON_H
#define TELEFON_H

#include <iostream>
#include <string>

class Telefon
{
    friend std::ostream &operator<<(std::ostream &, const Telefon &);
    friend std::istream &operator>>(std::istream &, Telefon &);

  public:
    std::string alanKodu;
    std::string ilkUc;
    std::string sonDort;
};

#endif
