#include<iostream>
using namespace std ;
class Media{
    protected:
    string titre;
    public:
    virtual void imprimer();
    virtual char *id();
};
class Audio : public Media{
    protected :
    string typeAudio;
    public:
    Audio(string typeAudio){
        this->typeAudio = typeAudio;
    }
    void display(){
        cout << "Type de la Audio : " << typeAudio << endl;
    }
};
class Livre : public Media{
    private:
    string auteur;
    string titre ;
    float prix;
    public:
    Livre (string auteur,string titre ,float prix){
        this->auteur = auteur;
        this->titre = titre ;
        this->prix = prix;
    }
    void display(){
        cout << "Auteur : " << auteur << endl;
        cout << "Titre : " << titre << endl;
        cout << "Prix : " << prix << endl;
    }
};
class Presse : public Media{
    protected :
    string typePresse;
    public:
    Presse(string typePresse){
        this->typePresse = typePresse;
    }
    void display(){
        cout << "Type de la Presse : " << typePresse << endl;
    }
};
class CD : public Audio{
    protected:
    string typeCD;
    public:
    CD(string typeAudio,string typeCD) : Audio(typeAudio){
        this->typeCD = typeCD ;
    }
    void display(){
        Audio :: display();
        cout << "Type du CD : " << typeCD << endl;}
};
class Cassette : public Audio{
    protected:
    string typeCassette;
    public:
    Cassette(string typeAudio,string typeCassette) : Audio(typeAudio){
        this->typeCassette = typeCassette ;
    }
    void display(){
        Audio :: display();
        cout << "Type du Cassette : " << typeCassette << endl;}
};
class Disque : public Audio{
    protected:
    string typeDisque;
    public:
    Disque(string typeAudio,string typeDisque) : Audio(typeAudio){
        this->typeDisque = typeDisque ;
    }
    void display(){
        Audio :: display();
        cout << "Type du Disque : " << typeDisque << endl;}
};
class Magazine : public Presse{
    protected:
    string nomMagazine;
    public:
    Magazine(string typePresse,string nomMagazine) : Presse(typePresse){
        this->nomMagazine = nomMagazine ;
    }
    void display(){
        Presse :: display();
        cout << "Nom de Magazine : " << nomMagazine << endl;}
};
class Journal : public Presse{
    protected:
    string nomJournal;
    public:
    Journal(string typePresse,string nomJournal) : Presse(typePresse){
        this->nomJournal = nomJournal ;
    }
    void display(){
        Presse :: display();
        cout << "Nom de Journal : " << nomJournal << endl;}
};
class Revue : public Presse{
    protected:
    string nomRevue;
    public:
    Revue(string typePresse,string nomRevue) : Presse(typePresse){
        this->nomRevue = nomRevue ;
    }
    void display(){
        Presse :: display();
        cout << "Nom de Revue : " << nomRevue << endl;}
};
int main(){
   
    return 0;
}