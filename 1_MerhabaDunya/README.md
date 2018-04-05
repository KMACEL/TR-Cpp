## Merhaba Dünya
Bu uygulama, genel anlamda programlamaya yeni başlayanlar için ilk örnektir.

Eğer sizde yeni başlamışsanız önerim, koldarı kopyala yapıştır yapmadan her projede tekrar tekrar yazmanız. Emin olun faydasını göreceksiniz.

Şimdi kodumuzu inceleyelim.

### 1. Açıklama Satırları
Programlarımızın bir çok yerinde açıklama satırları yer almaktadır. Bunlar kodlamadan sonra makine diline çevirilince herhangi bir  işleme tabi tutulmamaktadır. Bunların görevleri, daha sonra koda tekrar baktığınızda, ilgili kodun ne yaptığını anlamak yada kodu başkası incelediğinde, yapılan işlemin ne olduğunu anlamaları yada tamamen okunabilirliği arttırmak için kullanılır.

İki yöntem bulunmaktadır.


**1. Tek Satır Açıklama**

Eğer sadece bir satırı açıklama olarak kullanacaksanız "//" iki bölü çizgisi yan yana koymanız yeterlidir.
> //  Merhaba Bu bir açıklama satırı

**2. Birden Fazla Açıklama**

Eğer bir çok satırı açıklama satırı hale getirmek isterseniz "*/" ile /""
> /*

>  Buda bir kaç

> Açıklama satırı

> */

### 2. #include < iostream >
İlk önce **"#""** anlamak lazım. Bu ifade, ön işlemci komutu demektir. **Nedir Ön İşlemci ?**

> Ön işlemci, Programın derlemeye girmeden önce çalışan komutlardır.

Şimdi gelelim **"include"** ifadesine. Bu kelimenin Türkçe karşılığı **"dahil etmek"** demektir. Yani diyor ki; benden sonra gelen **""<...>""** içindeki ifadeyi programa dahil et.

Sırada **"iostream"** kısmına. Bu da, ekrana yazı yazdırma, kullanıcıdan veri alma gibi işlemleri yapmamızı sağlayan standart kütüphanedir.

### 3. int main()
Bu satır programımızın çalıştırılması için kesin gereklidir. **"main"** Türkçe de, **"ana, başlangıç"** anlamına gelmektedir. Yazacağınız bütün projelerin başlangıç noktası burasıdır. İster yüzbinlerce satır programınız olsun, **"C++"** dilinde eğer **"main"** fonksiyonu yoksa çalıştırılmaz. O yüzden önemi büyüktür.

### 4. { }
Süslü parantez, aidiyet belirtmektedir. Yani, **"main"**den sonra gelen **"{"** ve en son satırda olan **"}"** arasında kalan bütün satırlar, **"main"** fonksiyonuna aittir anlamına gelmektedir.

### 5. std::cout << "Merhaba Dünya" ;
**"std"** ifadesini şu an anlatmamayı yeğliyorum. Bunu ileriki konularda (name space) detaylıca inceleyeceğiz.

**"cout"** ifadesi, verileri ekrana çıkartmak için yaramaktadır. Yani bu satır diyor ki, **"Merhaba Dünya"** yazısı **"<<"** yardımı ile terminale çıkart.

#### Not :
Merak etmeyin. Her program satırını tek tek bu şekilde inceleyemeyeceğiz. Bu programlamaya girmek adına önemli bir adım olduğu için olabildiğince açıklamak istedim.

Umarım yararlı olmuştur.
