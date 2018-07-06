#include <iostream>
#include <string>

class SelamlaSinif
{
  public:
    explicit SelamlaSinif(std::string ilkAtama) : sinifMesaji(ilkAtama)
    {
    }

    void setSinifMesaji(std::string setMesaj)
    {
        sinifMesaji = setMesaj;
    }

    std::string getSinifMesaji() const
    {
        return sinifMesaji;
    }

    void mesajiGoster() const
    {
        std::cout << "Sınıf İçi Mesaj : " << sinifMesaji << std::endl;
    }

  private:
    std::string sinifMesaji;
};
