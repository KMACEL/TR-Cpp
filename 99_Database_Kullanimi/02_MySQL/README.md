# MySQL

### MySQL Yükleme

```bash
sudo apt-get install mysql-server
sudo apt install mysql-client
```

### Drive YÜkleme

#### 1. Yöntem

```cpp
wget https://cdn.mysql.com//Downloads/Connector-C++/mysql-connector-c++-8.0.13-linux-ubuntu18.10-x86-64bit.tar.gz
```

#### 2. YÖntem

```cpp
git clone https://github.com/mysql/mysql-connector-cpp.git
cd mysql-connector-cpp
git checkout 8.0
git pull
cmake .

sudo cmake --build . --target install --config CCC

```

sudo mysql_ssl_rsa_setup --uid=mysql


# Kaynak
> https://dev.mysql.com/doc/mysql-apt-repo-quick-guide/en/

> https://dev.mysql.com/doc/connector-cpp/8.0/en/

> https://dev.mysql.com/downloads/connector/cpp/

> https://downloads.mysql.com/docs/connector-cpp-8.0-en.pdf

> https://dev.mysql.com/doc/dev/connector-cpp/8.0/building.html

> https://www.digitalocean.com/community/tutorials/how-to-configure-ssl-tls-for-mysql-on-ubuntu-16-04