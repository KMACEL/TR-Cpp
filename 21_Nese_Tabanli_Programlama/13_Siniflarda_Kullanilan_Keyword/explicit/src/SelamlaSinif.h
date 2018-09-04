#include <string>

class SelamlaSinif
{
  public:
    explicit SelamlaSinif(uint64_t ilkAtama);
    void setSinifMesaji(uint64_t setMesaj);
    uint64_t getSinifMesaji() const;
    void mesajiGoster() const;
    SelamlaSinif getSelamla();

  private:
    uint64_t sinifMesaji;
};
