### Döngüler
Hayatımızla iç içe olmasını en çok istediğim konudur. Tamamen kolaylaştırırdı her şeyi. Peki nedir bu döngüler ?

Döngü, belirli bir işi, belirli bir tekrar ile yapılması gereken durumlarda kullanılan fonksiyonlardır. Programlamada oldukça kullanılan, çoğu işimizi kolaylaştıran, uzun uzun satırlar gerektiren kodları 4 satıra kadar indirebilen yapılardır. Döngülerin 2 çeşidini inceleyip daha iyi anlamaya çalışalım.

#### "While" Döngüsü
İlk kullanacağımız döngümüz "while"'dır. Türkçe karşılığı "iken" demektir. Yani
koşul sağlanırken çalışır diyebiliriz.

``` cpp
while (koşul)
{
    yapılacak iş
}
```
Kullanım şablonu yukarıdaki gibidir. Koşul sağlandığı sürece **"{ }"** arasındaki
kodlar devamlı çalışır.

#### "For" Döngüsü
Bir diğer döngümüz **"for"** döngüsüdür. Türkçe anlamı "için" demektir. Yani koşul sağlandığı için döner anlamı taşır.

``` cpp
for(değişken=başlangıç değeri; koşul ; sayaç)
{
    Yapılacak İş
}
```

Kullanım şablonu yukarıdaki gibidir. "for"'un "while"'dan en büyük farkı, ilk satırda gerekli bilgileri veriyor olmasıdır
