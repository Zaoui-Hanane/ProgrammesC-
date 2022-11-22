#include<iostream>
#include<math.h>
using namespace std ;
class Complexe{
    public:
      float real;
      float img;
    public:
    Complexe (int r = 0 , int i = 0){
        img = i;
        real = r;
    }
    Complexe operator-(Complexe const  &obj)
	{
		Complexe  rs;
		rs.real = real - obj.real;
		rs.img = img - obj.img;
		return rs;
	}
     Complexe operator+(Complexe const  &obj)
	{
		Complexe  rs;
		rs.real = real + obj.real;
		rs.img = img + obj.img;
		return rs;
	}
     Complexe operator*(Complexe const  &obj)
	{
		Complexe  rs;
		rs.real = (real * obj.real) - (img * obj.img);
		rs.img = (real * obj.img) + (img * obj.real);
		return rs;
	}
     Complexe operator/(Complexe const  &obj)
	{
		Complexe  rs;
		rs.real = (real * obj.real) + (img * obj.img) / pow(obj.real,2)+pow(obj.img,2) ;
		rs.img = (img * obj.real) - (real * obj.img) / pow(obj.real,2)+pow(obj.img,2);
		return rs;
	}
    bool operator=(Complexe const  &obj)
	{
		if((real == obj.real) && (img == obj.img))
            return 0;
        return 1;
	}
	

};
void Menu(){
    cout << "L operation : "<< endl;
    cout << "1 - egalite : "<< endl;
    cout << "2 - addition : "<< endl;
    cout << "3 - soustraction : "<< endl;
    cout << "4 - multiplication : "<< endl;
    cout << "5 - division : "<< endl;
} 
int main(){
    
    char operation;
    int option ;
    bool v;
    Complexe c1 , c2 ;
    cout << "Entrez la partie reelle de l'operateur 1:  " ;
    cin >> c1.real;
    cout << "Entrez la partie imaginaire  de l'operateur 1:  " ;
    cin >> c1.img;
    cout << "Operateur 1 : "<< c1.real << " + " << c1.img << "i" << endl;  
    cout << "Entrez la partie reelle de l'operateur 2:  " ;
    cin >> c2.real;
    cout << "Entrez la partie imaginaire de l'operateur 2:  " ;
    cin >> c2.img;
    cout << "Operateur 2 : "<< c2.real << " + " << c2.img << "i"  << endl;
    Menu();
    cout << "Etrez le nombre de votre operation ";
    cin >> option;
    
    switch (option)
    {
    case 1:
        v = (c1=c2);
        if (v == 0){
            cout << "les nombres complexes sont egale "<< endl;
        }else{
           cout << "les nombres complexes ne sont pas egale "<< endl; 
        }
        break;
    case 2:
        {Complexe c3 = (c1 + c2);
        cout << c3.real <<" + " << c3.img << "i" << endl;}
        break;
    case 3:
        {Complexe c3 = (c1 - c2);
        cout << c3.real <<" + " << c3.img << "i" << endl;
        break;}
    case 4:
        {Complexe c3 = c1 * c2;
        cout << c3.real <<" + " << c3.img << "i" << endl;
        break;}
    case 5:
        {Complexe c3 = c1 / c2;
        cout << c3.real <<" + " << c3.img << "i" << endl;
        break;}
    
    }

    return 0;
}