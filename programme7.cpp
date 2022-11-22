#include<iostream>
#include<math.h>
using namespace std;
class Vecteur3d{
    protected:
    float x;
    float y;
    float z;
    public:
    Vecteur3d(float x=0, float y=0, float z=0){
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void affiche(){
        cout << "(" << x <<"," << y <<","<< z << ")" << endl;
    }
    Vecteur3d sommeVect(Vecteur3d &obj){
        Vecteur3d res ;
        res.x = x + obj.x;
        res.y = y + obj.y;
        res.z = z + obj.z;
        return res;
    }
    float produit(Vecteur3d &obj) {
		return x*obj.x + y*obj.y + z*obj.z;
	}
    bool coincide(Vecteur3d & obj) {
		return (x == obj.x && y == obj.y && z == obj.z);
	}
    float norme() {
		return sqrt(x*x + y*y + z*z);
	}
    //renvoyé par valeur
    Vecteur3d  normax(Vecteur3d  obj){
        if (this->norme() > obj.norme())
            return *this;
        return obj;
    } 
    //le résultat est renvoyé par adresse
    Vecteur3d * normax(Vecteur3d * v) {
		if( this->norme() > v->norme())
		    return this;
		    
		return v;
	}
    //le résultat est renvoyé par référence
	Vecteur3d & normaxR(Vecteur3d &v) {
		if( this->norme() > v.norme())
		    return *this;
		    
		return v;
	}


};
int main(){
    Vecteur3d v1(5,9,1);
	cout << "Vecteur V1";
	v1.affiche();
	Vecteur3d v2(5,6,7);
	cout << "Vecteur V2";
	v2.affiche();
	cout<<endl;
	cout << "La somme des vecteurs v1 et v2 est : ";
	(v1.sommeVect(v2)).affiche();
	cout << "Le produit scalaire des vecteurs v1 et v2 est : " << v1.produit(v2) << endl << endl;

	if(v1.coincide(v2) == 0)
	    cout << "Les vecteurs v1 et v3 coincident " << endl <<endl; 
	else
	    cout << "Les vecteurs v1 et v3 ne coincident pas " << endl <<endl;
	
	cout << "Le vecteur qui a la plus grande norme est (par valeur): ";
	(v1.normax(v2)).affiche();
	cout << "Le vecteur qui a la plus grande norme est (par adresse): ";
	(v1.normax(&v2))->affiche();
	cout << "Le vecteur qui a la plus grande norme est (par reference) :";
	(v1.normaxR(v2)).affiche();
	cout<<endl;
    return 0;
}
