#include <iostream>
using namespace std;

class baseClass final{
    public:
    virtual void perkenalan(){
        cout << "Hello saya funtion dari base class" << endl;
    }
};

class derivedClass : public baseClass{
    public:
    void perkenalan(){
        cout << "Hello saya funtion dari derived class" << endl;
    }
};
int main(){

}