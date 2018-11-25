# MySQL

### MySQL Yükleme

```bash
wget -c https://dev.mysql.com/get/mysql-apt-config_0.8.10-1_all.deb 
sudo dpkg -i mysql-apt-config_0.8.10-1_all.deb 
sudo apt update
sudo apt-get install mysql-server
sudo mysql_secure_installation
sudo systemctl status mysql
sudo systemctl enable mysql
sudo apt-get install mysql-workbench-community libmysqlclient21
```

### Drive Yükleme

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

#### En Kolay Yöntem

```cpp
sudo apt-get install  libmysqlcppconn-dev
```


# Kaynak
> https://dev.mysql.com/doc/mysql-apt-repo-quick-guide/en/

> https://dev.mysql.com/doc/connector-cpp/8.0/en/

> https://dev.mysql.com/downloads/connector/cpp/

> https://downloads.mysql.com/docs/connector-cpp-8.0-en.pdf

> https://dev.mysql.com/doc/dev/connector-cpp/8.0/building.html

> https://www.digitalocean.com/community/tutorials/how-to-configure-ssl-tls-for-mysql-on-ubuntu-16-04

> https://www.tecmint.com/install-mysql-8-in-ubuntu/

> https://dev.mysql.com/doc/connector-cpp/1.1/en/connector-cpp-examples-complete-example-2.html