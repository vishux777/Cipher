#include <iostream>
using namespace std;
class Distance{
    private:
    int meter;

    public:
    Distance(){
        this->meter=10;
    friend int hi(Distance);
    }
};
int hi(Distance d1){
    d1.meter+=20;
}
int main(){
    
}