### Makefile
Derleme srıasında bir çok işlem ve paremetre kullanırız. Seçtiğiniz derleyicinin parametreleri, kullandığınız kütüphanelerin parametreleri, kendi yazdığınız kütüphanelerin derleme paramtreleri gibi sayısını uzatabiliriz. Bunları her seferinde yazmak zordur. Hatta baştan yazmaya kalkarsanız, büyük bir ihtimalle bir şeyler unutacaksınız.

Makefile, bu sorunu ortadan kaldırmak için kullamılmakta. Sistematik olarak girilen komutları, siz her çalıştırdığınızda sorunsuz bir şekilde görevini yerine getirmektedir.

Bunun için bilgisayarınızda **"make"** programının olması gerekmektedir. Yüklemek için;

``` bash
sudo apt-get install make -y
```

**"make"**, hazırladığınız **"Makefile"** dosyalarını çalıştıran programdır. Bu program, bazı dosya isimlerini otomatik tanır. Bunlar; **GNUmakefile**, **makefile**, **Makefile**. Bunların dışında kullanım için komutları anlatırken göstereceğiz.

Makefile hazırlarken bazı katı kuralları vardır. Örneğin **"TAB"** tuşu. Komutları girerken editörden kaynaklı **"TAB"** boşluk sayısında problem var ise şöyle bir hata verecektir;

``` bash
Makefile:6:	***	missing	separator	(did	you	mean	TAB	instead	of	8	spaces?)
```

**"make"** zamandan tasarruf için eğer bir değişiklik yapılmamışsa ilgili işlemleri es geçer. Fakat sistem saatinde olan değişikliklerden bu durum olumsuz etkilenmektedir. Bu konuya dikkat etmek gerekmektedir.

Şimdide bir **"Makefike"** hazırlayalım;

``` makefile
CC = g++
CFLAGS = -O2 -Wall
LIBS = -lm

build: src/main.cpp
	$(CC) $(CFLAGS) $(LIBS) -o test src/main.cpp

run:
	./test

clean:
	rm -f test *.o
```
**"CC", "CFLAGS", "LIBS""** değişkenlerdir. **Makefile** içinde herhangibi yerde kullanılmak üzere tanımlanır. Siz istediğiniz şekilde tanımlayabilirsiniz. Bizim kullanımımıza göre;

> **CC :** Derleyiciyi bildiriyoruz. Derleyicimiz **"g++"**

> **CLAGS :** Derleyicimizin aldığı konfigürasyonlardır. Çok geniş yelpazesi bulunmaktadır. BKNZ: https://linux.die.net/man/1/g++

>  **LIBS :** Eklenen kütüphaneler. Örneğin -lm Matematiksel işlemleri gerçekleştirilen kütüphaneyi eklemeye yaramaktadır.

> **build: =** Dosyayı kaydedip, konsoldan ilgili ekrana girip, **"make"** komutu verirseniz, build altında yazan komutları çalıştıracaktır. Buraya istediğin şekilde isimlendirebilirsiniz.

>  **$(CC) $(CFLAGS) $(LIBS) -o test src/main.cpp =** Bu komutun açılmış hali **"g++ -O2 -Wall  -lm -o test src/main.cpp"**. Yani aslında bu komutu çalıştırmakta.

> **run: =** Eğer konsoldan "make run" derseniz, altında bulunan çalıştırma işlemi gerçekleştirecektir.

> **clean: =** Eğer konsoldan "make clean" derseniz, altıdna bulunan silme işlemini gerçekleştirecektir.

Şimdi biraz daha ileriki bir seviyeye geçip, yaptığımız bir kütüphaneyi derleyip nasıl programımıza dahil edeceğimize bakalım.

#### Klasör Yapısı
SelamlaProjesi:<br />
|<br />
|--- src<br />
|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|<br />
|  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---main.cpp<br />
	|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;|---SelamlaSinif.h
		|	|---SelamlaSinif.cpp<br />
|<br />
|---Makefile



``` makefile
CC = g++
CFLAGS = -O2 -Wall
LIBS = -lm
MAIN = src/main.cpp
OUT = test

build: SelamlaSinif.o
	$(CC) $(CFLAGS) $(LIBS) -o $(OUT) $(MAIN) SelamlaSinif.o

SelamlaSinif.o: src/SelamlaSinif.cpp
	$(CC) $(CFLAGS) -c src/SelamlaSinif.cpp

run:
	./$(OUT)

clean:
	rm -f $(OUT)

install: $(OUT)
	cp $(OUT) /usr/bin
```
> **build: SelamlaSinif.o** = Bu ifade, ilk önce **"SelamlaSinif.o"** parametresini çalıştır demek.

> **SelamlaSinif.o: src/SelamlaSinif.cpp** = Bu da ilk önce bizim yazmış olduğumuz kütüphaneyi derle demek. Böylece kütüphane derlenip, **.o** uzantılı binary dosyasına çevrilmiş olacak.

#### Bir Çok Kütüphane İle Çalışmak (Soyut Kurallar (Abstract Rules))
Hak verirsiniz ki bir çok kütüphane barındıran projelerde, bu şekilde tek tek uğraşmak çok zor olacaktır. **"make"** bize bu konuda da yardımcı olmaktadır. Mesela birden fazla olan kütüphaneler için;

 ``` makefile
 CC = g++
 CFLAGS = -O2 -Wall -std=c++11
 LIBS = -lm src/lib/*
 INCLUDES = -Isrc/include
 MAIN = src/main.cpp
 OUT = test
 CLIBS = src/lib
 CINCLUDE = src/include


 build: is
 	$(CC) $(CFLAGS) $(LIBS) $(INCLUDES) -o $(OUT) $(MAIN)

 is: $(CINCLUDE)/*.cpp #src/include/muhendis.cpp src/include/calisan.cpp
 	@if [ ! -d "$(CLIBS)" ]; then \
 		mkdir $(CLIBS); \
 	fi
 	$(CC) $(CFLAGS) -c $^
 	mv *.o $(CLIBS)

 run:
 	./$(OUT)

 clean:
 	rm -f $(OUT)

 install: $(OUT)
 	cp $(OUT) /usr/bin

 .PHONY: clean

 ```

### G++ Derleyici Parametreleri

 g++ -MM src/calisan.cpp

-c =

-o file =

-v =

-std= =

-Wall = Tüm uyarıları açar

-Wextra =  enables other important warnings 

-Werror = make all warnings into errors, causing compilations to fail if any warnings are reported.

-lm = matematik kütüphanesi

-lz = zip kütüphanesi

-lrt = Gerçek zaman kütüphanesi (POSIX)


    -g - turn on debugging (so GDB gives more friendly output)
    -Wall - turns on most warnings
    -O or -O2 - turn on optimizations
    -o <name> - name of the output file
    -c - output an object file (.o)
    -I<include path> - specify an include directory
    -L<library path> - specify a lib directory
    -l<library> - link with library lib<library>.a

https://www.gnu.org/software/make/manual/make.html
