#include <iostream>
using namespace std;

class Oyuncu{
public:
    string isim;
    int level;
    Oyuncu(string isim):isim(isim),level(1){  }
    void sutCek(){
        cout<< isim << " oyuncusu " <<level * 10 << "hizinda bir sut cekiyor " << endl;
    }
    void antremanYap(){
        cout << isim << " antreman yapiyor ... " << endl;
        level++;
    }
};
class Tsubasa:public Oyuncu{
public:
    Tsubasa() : Oyuncu("Tsubasa"){  }
    void kartalSutuCek(){
        cout<< isim << " oyuncusu " << level * 20 << "hizinda bir Kartal sutu cekiyor " << endl;
    }
};

int main(){
    Oyuncu o1("Bekzod");
    Oyuncu o2("Sanjar");

    o1.sutCek();
    o1.antremanYap();
    o1.sutCek();
    cout << endl;
    o2.sutCek();
    Tsubasa t;
    t.sutCek();
    t.kartalSutuCek();
    t.antremanYap();
    t.antremanYap();
    t.antremanYap();
    t.sutCek();
    t.kartalSutuCek();

    return 0;
}
