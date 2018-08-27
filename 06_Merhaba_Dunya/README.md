## Merhaba Dünya
Bu uygulama, herhangi bir programlama diline ilk başladığınızda karşınıza gelecek olan projedir. Bizde bu geleneği bozmayalım.

Eğer siz, kodlamaya yeni başlamışsanız önerim, kodları kopyala yapıştır yapmadan, her projede tekrar tekrar yazmanız. Emin olun faydasını göreceksiniz.

Şimdi kodumuzu inceleyelim.

### 1. Açıklama Satırları
Programlarımızın bir çok yerinde açıklama satırları yer almaktadır. Bunlar kodlamadan sonra makine diline çevirilince herhangi bir  işleme tabi tutulmamaktadır. Bunların görevleri, daha sonra koda tekrar baktığınızda, ilgili kodun ne yaptığını anlamak yada kodu başkası incelediğinde, yapılan işlemin ne olduğunu anlamaları yada tamamen okunabilirliği arttırmak için kullanılır.

C++'ta, yazıanların açıklama satırı haline getirebilmek için iki yöntem bulunmaktadır.


**1. Tek Satır Açıklama**

Eğer sadece bir satırı açıklama olarak kullanacaksanız "//" iki bölü çizgisi yan yana koymanız yeterlidir.
> //  Merhaba Bu bir açıklama satırı

> // ve bunlar programın işleyişini değiştirmiyoor.

**2. Birden Fazla Açıklama**

Eğer bir çok satırı açıklama satırı hale getirmek isterseniz **"\*/"** ile **"\*/"** arasına istediğiniz satırı, açıklama satırı haline getirebilirsiniz.
> /*

>  Buda bir kaç

> Açıklama satırı

> */

### 2. #include < iostream >
İlk önce **"#""** anlamak lazım. Bu ifade, ön işlemci komutu demektir.

**Nedir Ön İşlemci ?**

> Ön işlemci, Programın derlemeye girmeden önce çalışan komutlardır. Yani derleyici ile ilişkilidir.

Şimdi gelelim **"include"** ifadesine. Bu kelimenin Türkçe karşılığı **"dahil etmek"** demektir. Yani diyor ki; benden sonra gelen **""<...>""** içindeki ifadeyi bu programa dahil et.

Sırada **"iostream"** kısmına. Bu da, başlangıç adımlarında çokça kullanacağımız **ekrana yazı yazdırma**, **kullanıcıdan veri alma** gibi işlemler başta olmak üzere **bir çok işlemi** yapmamızı sağlayan **standart kütüphanedir**.

### 3. int main()
Bu satır programımızın çalıştırılması için kesin gereklidir. **"main"** Türkçe de, **"ana, başlangıç"** anlamına gelmektedir. Yazacağınız bütün projelerin başlangıç noktası burasıdır. İster yüzbinlerce satır programınız olsun, **"C++"** dilinde eğer **"main"** fonksiyonu yoksa çalıştırılmaz. O yüzden önemi büyüktür.

### 4. { }
Süslü parantez, aidiyet belirtmektedir. Yani, **"main"**den sonra gelen **"{"** ve en son satırda olan **"}"** arasında kalan bütün satırlar, **"main"** fonksiyonuna aittir anlamına gelmektedir. İleriki konularda bir çok **{ }** iç içe kullanıldığını göreceğiz.

### 5. std::cout << "Merhaba Dünya" ;
**"std"** ifadesini şu an anlat**ma**mayı yeğliyorum. Bunu ileriki konularda **(name space)** detaylıca inceleyeceğiz.

**"cout"** ifadesi, verileri ekrana çıkartmak için kullanılmaktadır. Yani bu satır diyor ki, **"Merhaba Dünya"** yazısı **"<<"** operatör yardımı ile terminale çıkart.

**Dikkat** edilmesi gereken önemli bir durum vardır. Siz eğer sözel yani karaktersel bir ifade yazdıracaksanız bunu **-"..."-** **çift tırnak** içinde yazdırmanız gerekmektedir.

### 6. return 0;
**return** **Türkçede** geri dönüş anlamına gelmektedir. Fonksiyonlar kısmında detaylıca inceleyeceğimiz bir komut. Fakat burada basitçe söylemek gerekirse 0 değerini geri döndür anlamına gelmektedir. Bu da programın sorunsuz bir şekilde tamamlandığını belirtmektedir. 0 yerine **"EXIT_SUCCESS"** ifadesi de yazılabilir.

#### Not :
Merak etmeyin. Her program satırını tek tek bu şekilde inceleyemeyeceğiz :) Bu programlamaya girmek adına önemli bir adım olduğu için olabildiğince açıklamak istedim.

Umarım yararlı olmuştur.
