### Koşullu İfadeler

### If - Else
Aslında hayatımız koşullar içinde geçmekte. Örneğin;
Eğer bu projedeki uygulamaları kendiniz yazarsanız, başarılı olursunuz.

Bunu şimdi sistematik bir biçimde yazalım;

 ``` bash
Eğer (bu kitaptaki uygulamaları yaparsanız)
{
    Başarılı olursunuz.
}
```
Koşullu ifadelerimiz tamamen böyledir.

 ``` bash
if(koşul)
{
    Koşul sağlandığında olacaklar
}
```

**"if"**'in kelime anlamı **"Eğer"** demektir. Kısaca bu da dediğimiz gibi günlük hayatımızda fazlasıyla karşılaştığımız bir durum. Programlamada da oldukça kullanacağımız bir kavram.

Koşulları yazarken karşılaştırma operatörleri kullanılmaktadır. Şimdi bunları
görelim;

| Operatör | Açıklama  |
|:--------:|:---------:|
| ==       | Koşulda verilen ilk ifadenin, diğerine eşit olup olmadığı durumu sorgulamak içinkullanılır."X==Y", X ifadesi Y ifadesine eşit mi sorusunu sorar. Dikkat etmemiz gereken bir unsur daha, "=" atama operatörü, "==" karşılaştırma operatördür |
| <        | Koşulda verilen ilk ifadenin, diğerinden küçük olup olmadığı durumu sorgulamak için kullanılır. "X<Y", X ifadesi Y ifadesinden küçük müdür sorusunu sorar.      |
| >        | Koşulda verilen ilk ifadenin, diğerinden büyük olup olmadığı durumu sorgulamak için kullanılır. "X>Y", X ifadesi Y ifadesinden büyük müdür sorusunu sorar.      |
| <=       | Koşulda verilen ilk ifadenin, diğerinden küçük ve eşit olup olmadığı durumu sorgulamak için kullanılır. "X<=Y", X ifadesi Y ifadesinden küçük ya da eşit midir sorusunu sorar.     |
| >=       | Koşulda verilen ilk ifadenin, diğerinden büyük ve eşit olup olmadığı durumu sorgulamak için kullanılır. "X>=Y", X ifadesi Y ifadesinden büyük ya da eşit midir sorusunu sorar.      |
| !=       | Koşulda verilen ilk ifadenin, diğerine eşit olup olmadığı durumu sorgulamak için kullanılır. "X==Y", X ifadesi Y ifadesine eşit değil mi sorusunu sorar.      |

### Else
Eğer birkaç koşul vereceksek "Else" ifadesi kullanılır. Türkçe anlamı "Değilse - Yoksa" demektir. Bunu ilk önce örnek ile pekiştirip o şekilde açıklamak daha iyi olacaktır.


### && - ||

| Operatör      | Açıklama      |
|:-------------:|:-------------:|
| &&            | Anlamı "ve" demektir. Yani, bu operatör kullanıldığında, verilen ifadelerin hepsi sağlanıyorsa kod çalışır. Yani örneğimizde ilk "if" bloğunda ortalama hem 100'den küçük olmak zorunda, hem de 85 ten büyük olmak zorunda. Bu iki koşul da sağlanmalı. Aksi taktirde "if" işlemi sağlanmadan bir sonraki bloğa geçer. |
|  II   | Anlamı "veya" demektir. Yani, bu operatör kullanıldığında, verilen ifadenin en az biri sağlanıyorsa, kod çalışır. Yani örneğin, Kimliği veya Ehliyeti varsa içeri girebilir ifadesinde bu belgelerin biri olması yeterlidir.      |

### Switch - Case
"switch - case" aslında "if - else"'nin kardeşidir. Bununla yapılacak her işlem,
"if - else" ile yapabilir. Sadece "switch - case" belirli bir koşulu, daha kısa
sürede yapmamızı sağlar.

``` bash
switch(koşul değeri)
{
case x:
.

.
case y:
.
.
}
```

"Switch"'in kelime anlamı anahtardır. "Case"'nin kutudur.
İlk olarak 1. Satırda "switch" ifadesinden sonra değerlendirme yapacağı
değişkeni veriyoruz. Yani üzerinde işlem yapacağı anahtar değişken ismini
veriyoruz.
Ardından süslü parantezler "{ }" arasına "case" bloklarımızı yazıyoruz. "case" yanına yazdığı ifade, yukarıda verilen koşul değişkeni değeri ise alt satıra
geçip işlemlerini yapmakta. Dikkat etmemiz gereken diğer bir unsur "case"'nin "{ }" parantezi bulunmamakta, onun yerine sonuna ":" yazılmaktadır.
