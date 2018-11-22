# PostgreSQL Kullanımı

```bash
/etc/apt/sources.list.d/pgdg
deb http://apt.postgresql.org/pub/repos/apt/ bionic-pgdg main

wget --quiet -O - https://www.postgresql.org/media/keys/ACCC4CF8.asc | sudo apt-key add -
sudo apt-get update

sudo apt-get install postgresql-10
sudo apt install postgresql postgresql-contrib

sudo -u postgres psql postgres

sudo apt install libpq-dev
sudo apt install libpq5

sudo apt install libpqxx-*
```

# Kaynak

> https://www.tutorialspoint.com/postgresql/postgresql_c_cpp.htm
> https://www.digitalocean.com/community/tutorials/how-to-install-and-use-postgresql-on-ubuntu-18-04
> https://medium.com/coding-blocks/creating-user-database-and-adding-access-on-postgresql-8bfcd2f4a91e
