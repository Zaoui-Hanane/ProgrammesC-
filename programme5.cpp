#include <iostream>
using namespace std;

class Animal{
    protected:
    int age ;
    string nom;
    public:
    void set_value(string nom, int age){
        this->nom = nom;
        this->age = age;
    }
};
class Zebra: public Animal{
    public:
    void display(){
        cout << "Zebra : " << endl;
        cout << "Nom : " << nom << "." << endl << endl;
        cout << "Age : " << age << " ans." << endl;
        cout << "Le lieu d'origine : Afrique." << endl;
    }
};
class Dolphin: public Animal{
    public:
    void display(){
        cout << "Dolphin : " << endl << endl;
        cout << "Nom : " << nom << "."<<endl;
        cout << "Age : " << age << " ans." << endl;
        cout << "Le lieu d'origine : New Zeland." << endl ;
    }
};


int main (){
    Zebra z1;
    z1.set_value("Lila",2);
    z1.display();
    Dolphin d1;
    d1.set_value("Black",5);
    d1.display();
    return 0;
}