#include<iostream>

using namespace std ;
class shape {
    protected :
    float largeur ;
    float hauteur ;
    public:
    shape(float largeur, float hauteur ){
        this->largeur = largeur ;
        this->hauteur = hauteur;
    }
    };
class triangle : public shape{
    public :
    triangle(float largeur, float hauteur ) : shape( largeur, hauteur ){    
    }
    float area(){
        float Area = largeur * hauteur * 1/2;
        return Area;
    }
};
class rectangle : public shape{
    public :
    rectangle(float largeur, float hauteur ) : shape( largeur, hauteur ){   
    }
    float area(){
        float Area = largeur * hauteur;
        return Area;
    }
    
};

int main(){
    rectangle t1(4,5);
    
    cout << "L'aire du rectangle :" << t1.area() << endl;
    triangle t2(4,5);
    
    cout << "L'aire du triangle :" << t2.area() << endl;
    return 0;
}