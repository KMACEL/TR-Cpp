#include<string>

class SelamlaSinif
{
public:
    explicit SelamlaSinif(std::string ilkAtama);
    void setSinifMesaji(std::string setMesaj);
    std::string getSinifMesaji() const;
    void mesajiGoster() const;
private:
    std::string sinifMesaji;
};
