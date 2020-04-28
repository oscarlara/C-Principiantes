//Programando con clases

#include <iostream>
using namespace std;

class CRectangulo {
    int x, y;
    public:
        void set_values (int, int);
        int area() {
            return(x*y);
        }
};

void CRectangulo::set_values(int a, int b) {
    x = a;
    y = b;
}
int main() {
    CRectangulo rect;
    rect.set_values(3,4);
    cout<<"El area es: "<<rect.area();
    return 0;
}