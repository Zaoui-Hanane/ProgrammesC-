#include<iostream>
using namespace std;
class Mere{
    public: 
    void display(){
        cout << "C'est la classe Mere ."<< endl;
    }
};
class Fille : public Mere{
    public:
    void display(){
        cout << "C'est la classe Fille ."<< endl;
    }
};
int main(){
    Fille f1;
    f1.display();
    Mere m1;
    m1.display();
    return 0;
}