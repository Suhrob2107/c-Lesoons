#include <iostream>
using namespace std;

class Nokta{
public:
    int x,y,z;
};


int main(){
    Nokta n;
    n.x=0;
    n.y=5;
    n.z=6;

    cout << n.x << "+" << n.y << "+" << n.z << endl;

    return 0;
}
