#include<iostream>
using namespace std ;
 static int counter = 0;
class T{
    protected: 
    string nom ;
    public: 
    T(string nom = "Salim"){
        this->nom = nom;
    }
    void call(){
        cout << "Nom : " << nom << endl ;
        counter ++;
    }

};
int main(){
    T t1;
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    t1.call();
    T t2;
    t2.call();
    t2.call();
    t2.call();
    t2.call();
    t2.call();
    cout << "La fonction call a ete appelee : "<< counter << " fois." << endl;
    return 0;
}