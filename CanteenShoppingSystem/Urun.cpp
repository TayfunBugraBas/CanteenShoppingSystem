
#include "Urun.h"

Urun::Urun(string isim, string kategori, string tip, double ucret, int id)
{
    urunIsmi = isim;
    urunKategori = kategori;
    urunTipi = tip;
    fiyat = ucret;
    urunId = id;
}

void Urun::setIsim(string isim)
{
    urunIsmi = isim;

}

string Urun::getIsim()
{
    return urunIsmi;
}

void Urun::setKategori(string kategori)
{
    urunKategori = kategori;
}

string Urun::getKategori()
{
    return urunKategori;
}

void Urun::setTipi(string tip)
{
    urunTipi = tip;
}

string Urun::getTipi()
{
    return urunTipi;
}

void Urun::setFiyat(double ucret)
{
    fiyat = ucret;
}

double Urun::getFiyat()
{
    return fiyat;
}

void Urun::setId(int id)
{
    urunId = id;
}

int Urun::getId()
{
    return urunId;
}
