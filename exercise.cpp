#include <iostream>

using namespace std;

//  Write a program that reads a group of numbers from
// the user and places them in an array of type float.
// Once the numbers are stored in the array, the
// program should average them and print the result.
// Use pointer notation wherever possible
class Number{
    protected:
        float x;
    
    public:
        void setNumber(){
            cout << "Enter number \n";
            cin >> x;
        }

        float getNumber(){
            return x;
        }
};


int main(){
    Number* num[30];
    int count = 0;
    char choice;

    do{
        num[count] = new Number;
        num[count]->setNumber();
        count ++;
        cout << "Enter another (y/n)";
        cin >> choice;

    }while(choice == 'y');

    float sum = 0;

    for(int i = 0; i < count; ++i){
        sum += num[i]->getNumber();
    }

    cout << "Average = "<< sum/float(count) <<endl;




    return 0;
}