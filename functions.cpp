#include <iostream>

using namespace std;

int main(){
    int addTwo(int, int);
    int fact(int);
    int a = 23;
    int b = 32;
    int *poin = &a;
    int &ref = a;
    int c = a;



    // cout << ref << endl;

    // ++a;

    // cout << ref << " .... " << c << endl;
    // cout << "Before switch " <<"a = " <<  a << " " << "b = " << b << endl;

    swap(a, b);

    // cout << "After switch " <<"a = " <<  a << " " << "b = " << b << endl;

    cout << fact(6) << endl;
    return 0;
} 

void swap(int c, int d){
    int temp;

    c = temp;
    c = d;
    d = temp;
}


int addTwo(int a, int b){
    return a + b;
}

// recursions

int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

