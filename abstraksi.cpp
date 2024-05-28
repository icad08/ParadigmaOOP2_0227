#include <iostream>
using namespace std;

class abstraksiKlas{
    private: string x, y;

    public:

    //method untuk mengisi nilai
    //private member
    void setXY(string a, string b){
        x=a;
        y=b;
    }
    //menampilan nilai
    void display(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main(){
    abstraksiKlas ak;
    ak.setXY ("Yogyakarta", "kampus");
    ak.display();

    return 0;
}