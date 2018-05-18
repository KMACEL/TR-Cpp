#ifndef ERROR_H
#define ERROR_H

class AvanasHata : public exception
{
public:
    string limit()
    {
        return "Limit Aşımına Uğradınız. Lütfen Limitler Dahilinde Avans Talebinde Bulununuz";
    }
};

#endif
