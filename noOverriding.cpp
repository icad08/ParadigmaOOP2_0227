#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() final{
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
    derivedClass a;
    a.perkenalan();

    return 0;
}