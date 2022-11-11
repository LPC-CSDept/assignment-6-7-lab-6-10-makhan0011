//

#include <iomanip>
#include <iostream>
using namespace std;


void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b, int &c) {
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap (b, c);

}

void swap(int &a, int &b, int &c, int &d) {
    swap(a, b);
    swap(b, c);
    swap(c, d);
}