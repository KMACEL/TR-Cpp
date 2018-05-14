### GIT Nedir?
**GIT** en kısa tabiri ile **versiyon yönetim sistemidir**. Biraz daha anlamlandıralım bu tanımı.

* İleride bir yazılım projesi geliştireceğiniz zaman, bir çok **sınıf, dosya, klasör vb.** gibi birleşenler olacak. Bunlar zaman içinde değiştirilmesi, geliştirilmesi gerekecek. **GIT** sayesinde, projenize daha sonra kolaylıkla **eklemeler, değiştirmeler** sağlayabilirsiniz. Fakat asıl önemli noktası, eğer yaptığınız **değişiklikler, eklentiler** programınızın akışında **istenmeyen bir duruma sokuyorsa**, **kodlarınızı daha önceki bir tarihe geri almanızı yada kodlarınızın arasındaki farkları incelemenizi** sağlar.

* Projenizi bir **ekip** ile **birlikte** geliştiriyorsanız, yapılan **değişiklikleri bir araya getirmek olduka zordur**. Hatta aynı dosya üzerinde yapılan değişiklikleri satır satır incleyerek bir araya getirmek gerekir. Fakat **GIT** sayesinde **aynı anda bir çok farklı kişiler** ile proje geliştirilebilir.  

* Kodlarınızı bilgisayarınızda barındırdığınızda onları **kaybetme** olanağınız çok yüksektir. **Silinebilir, bilgisayarınız bozulabilir, zararlı yazılımlardan etkilenebilir.** Eğer bir **GIT** kullanırsanız, kodlarınızın her zaman bir kopyası bulunur.

* Ek olarak benim en çok kullanma sebebim; hayatta aynı anda bir çok şeyi öğrenmek, birçok şey ile aynı anda çalışmak gerekebilir. Bir projeyi, yeni uğraşmaya başladığım bir programlama dilini öğrenme sırasında yaptığım örnekleri **GIT** yardımı ile kayıt ediyorum. Eğer araya başka bir durum girerse bile, tekrardan geri dönüp baktığımda kaldığım yerden devam edebiliyorum.  

### Nasıl Kullanılır ?
Bununla ilgili bir çok kaynak mevcut. Ama ben en azından bu proje ile ilgili kısmın üzerinden geçeceğim.

İlk önce bilgisayarınızda **GIT** yüklü olması gerekmekte. Bunun için terminale şu komutu giriniz.

 > sudo apt-get install git -y

 Bizim projemiz **"GITHUB"** ortamında. En büyük **GIT** platformu **"GITHUB"**. Ücretsiz kayıt olabileceğiniz, ücretsiz kod paylaşabileceğiniz bir ortam. Ama yazacağınız kodların herkese açık olması gerekmektedir. Eğer sadece kendiniz yada izin vereceğiniz kişiler tarafından kodlarınız geliştiilmesini istiyorsanız, o zaman belli bir meblağ ödemeniz gerekmektedir.

 Şimdi projemizi bilgisayarımıza indirelim;

  > git clone https://github.com/KMACEL/TR-Cpp.git

  **git clone** : Bir **GIT** reposunu bilgisayarınıza indirmenizi sağlayan komuttur.

  > git add --all

   **git add --all** : Bu komut, yapılan değişiklikleri bilgisayarınıza indirilen **GIT** üzerine eklemenizi sağlar.

   > git commit -m "Commit Mesaji"

   **git commit** : Commit, yapılan değişiklikleri, **"-m"** parametresi ile etiketlemeye yarar.

   > git push orgin master

   **git push** : Yapılan **commit**'i uzak repodaki, bizim bu durumda **GITHUB**'a gönderme işlemini gerçekleştirir.
