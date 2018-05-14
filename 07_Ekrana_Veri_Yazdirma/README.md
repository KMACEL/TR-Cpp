## using namespace std;
**Merhaba Dünya** projesinden farklı olarak **using namespace std;** kullandık. Dediğimiz gibi **namespace** konusunu ileride daha derin işleyeceğiz ama en basit anlamda, yine ileride işleyeceğimiz **fonksiyonlar**, **sınıflar**, **değişkenler** farklı kütüphanelerde, aynı isimde olabilir. Bunu kullanırken karışmaması ve hata almamak için **namespace** yani Türkçe olarak **İsim Uzayı** kullanılır.

Örnek verecek olursak **"yazdir"** diye iki farklı kütüphanede bulunan methodumuz var. Biri **ekrana** yazı yazdırıyor, diğeri **yazıcıdan** bazı verilerin çıktısını alıyor. İşte bu tarz işlemlerde karışıklık olmamaması için **"namespace"** kullanılıp ayırt edilmesi sağlanıyor.

Bizim **"using namespace std;"** kodu ise, **"std namespace"**inde bulunan kodların başına **"std::"** yazmaya gerek yok anlamı katmak için kullanılır. Yoksa her **"cout"** ve **"endl"** başına **"std::"** koymamız gerekecekti.

## endl
Bir önceki projeden farklı olarak **"endl"** gördük. Bunun anlamı bir alt satıra geç demek. Yani **"endl"** kodu, **"cout"** ile terminal ekranında yazılan yazıları bir alt satıra geçirmesini sağlar

### Not
Bilmediğiniz bir çok şeyi yukarıda anlatmış olabilirim. Amacım aklınızda ne yaptığımız konusunda bir şeyleri netleştirmek. Sakın bilmediğiniz terimler gözünüzü korkutmasın. Her şeyi elimizden geldiğince zamanı geldiğinde açıklayacağız.
