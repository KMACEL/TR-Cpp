### Fonksiyonlar
Fonksiyonları daha iyi anlayabilmek için birkaç örnek verelim. Örneğin kıyma makinesini düşünün. Eti atıp, işleyip kıymaya çeviriyor. İşte fonksiyonda tam bu işlemi yapar. Bir veriyi içine gönderirsiniz, ardından onu işler ve başka bir çıktı olarak size verir ya da otomobil fabrikasını düşünün. Bir sürü malzeme dışarıdan gelir. Birleştirilir ve başka bir ürün olarak karşımıza çıkar. Fonksiyon temel anlamda bu tarz düşünülebilir.

"C++" dili kütüphane, sınıf ve fonksiyon mantığıyla çalışır. Yani her işlemin bir kütüphanesi vardır ve fonksiyonlar o kütüphanedeki kitaplar olarak düşünülebilir.

Fonksiyonlar, eğer kodlamada bir iş, birden fazla yerde yapılacaksa, bir kere tanımlayıp tekrar tekrar kullanmamızı sağlayan yapılardır. Bu hem daha az kodla daha fazla iş yapmamızı sağlar, hem programın daha hızlanmasına katkıda bulunur. İlk derslerimizde bahsettiğimiz üzere, sadece "main()" bloğunda olan kodlar çalışır. Fonksiyonlar ise "main()" dışında tanımlanır, "main()"'de çağırılır.

##### Kullanımı:
``` cpp
Fonksiyon_Türü Fonksiyon_ismi ()
{
    Yapılacak İş
}
```
İki tür fonksiyon vardır. Yukarıda verdiğimiz şablonu bu türlere göre uyarlayalım.

### Değer Döndürmeyen Fonksiyonlar
Bu fonksiyon, görevini yapar ve biter.

``` c++
#include <iostream>
void dene()
{
    cout << "Fonksiyon calisti. Cidden..." << endl;
}

int main()
{
    dene();
}
```

### Geri Değer Döndüren Fonksiyonlar
"void" fonksiyonunun içine girildiğinde iş orada biter demiştik. Ama çoğu kez bir işlem yapıldığında, çıkacak sonuç başka bir işlem için kullanılmak istenebilir.
Bunun için tekrardan geriye veri göndermesi beklenir.

##### Kullanımı:

``` c++
döndüreceği_değer_türü fonksiyon_ismi()
{
    Yapılacak İşlemler
    return döndürülecek_değer;
}
```
Şimdi bir örnek ile pekiştirelim;

``` c++
#include <iostream>
int donecek()
{
    int deger;
    deger=5+7;
    return deger;
}

int main()
{
    int gelen;
    gelen=donecek();
    cout << "Gelen Deger = " << gelen << endl;
}
```
