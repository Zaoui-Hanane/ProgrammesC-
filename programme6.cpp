#include<iostream>
using namespace std;
class Personne{
    private:
    string nom;
    string prenom;
    string date_naissance;
    public:
    Personne(string nom,string prenom,string date_naissance){
        this->nom = nom ;
        this->prenom = prenom ;
        this->date_naissance = date_naissance;
    }
    void Afficher(){
        cout << "Nom : " << nom << endl;
        cout << "Prenom : " << prenom << endl;
        cout << "Date de naissance : " << date_naissance<< endl;
    }
};
class Employe : public Personne{
    float salaire;
    public :
    Employe(string n, string p, string d , float salaire) : Personne(n , p, d){
        this->salaire =  salaire;
    }
    void Afficher(){
        Personne :: Afficher();
        cout << "Salaire : " << salaire<< endl;
    }
};
class Chef : public Employe{
    string service;
    public:
    Chef(string n, string p, string d , float s, string service) : Employe(n , p, d , s){
        this->service =  service;
    }
    void Afficher(){
        Employe :: Afficher();
        cout << "Service : " << service << endl;
    }
};
class Directeur : public Chef{
    string societe;
    public:
    Directeur(string n, string p, string d , float s, string sv , string societe):Chef(n , p, d , s, sv ){
        this->societe=  societe;
    }
    void Afficher(){
        Chef :: Afficher();
        cout << "Societe : " << societe << endl;
    }
};
int main(){
    Directeur em1("Salim","Malki","10/12/1999",9000,"Gere l'equipe","MBC");
    em1.Afficher();
    return 0;
}