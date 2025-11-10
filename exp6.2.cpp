#include <iostream> 
using namespace std; 
//base class 
class Vehicle{
     public: Vehicle() {cout << "This is a Vehicle\n"; }
}; 
//first subclass 
class Car: public Vehicle { 
    public:
     Car() { cout << "This Vehicle is Car\n";}
};
// second subclass 
class Bus : public Vehicle {
     public: 
     Bus() {cout << "This Vehicle is Bus\n";}
};
// main function 
int main()
{
     cout<<"Name: Devendra S Bagi "<<endl;
    cout<<"div: B"<<endl;
    cout<<"Roll No: 32"<<endl; 
    
// Creating object of subclass will
 // invoke the constructor of base ciass. 
Car objl; 
Bus obj2; 
return 0;
}