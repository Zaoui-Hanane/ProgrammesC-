#include<iostream>
using namespace std;
class MyClass{
    public : 
    MyClass() ;
    ~MyClass();
    void afficher(){
        cout << "Bonjour ." << endl ;
    }
    void display(){
        cout << "Aurevoir." << endl ;
    }
};
MyClass :: MyClass(){
    cout << "C'est un constrecteur par defeaut !!"<<endl;
}
MyClass :: ~MyClass(){
    cout << "C'est un deconstrecteur par defeaut !!"<<endl;
}
int main(){
   
    MyClass MA;
    MA.afficher();
    MA.display();
    return 0;
}