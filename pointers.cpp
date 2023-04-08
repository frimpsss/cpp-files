#include <iostream>
#include <cstring>

using namespace std;

int add(int a, int b){

    return a + b;
}

int subtract(int a, int b){
    return a - b;
}


int calculate(int x, int y, int (*callback)(int, int)){

    return (*callback)(x, y);
}


// array of pointers to objects

class Person{
    protected:
        char name[40];
    
    public:
        void setName(){
            cout << "Enter name: ";
            cin >> name;
        }

        void printName(){
            cout << "Name is " << name <<endl;
        }
};

int main(){


    cout << calculate(33, 7, add) <<endl;
    cout << calculate(37, 7, subtract) <<endl;


    int x = 40;
    int* ptr = &x;

    cout << ptr <<endl;

    // derefrencing the pointer
    cout << *ptr << endl;

    // void pointer - can point to any data type

    void* voidptr;

    float b = 943.4;
    char a = 'a';


    // no errors as seen
    voidptr = &b;
    voidptr = &a;
    voidptr = &x;






    // pointers to pointer

    // wont work must have same data type as parent ptr

    // float** ptr2ptr = &ptr; 
    // format [dataType]** name = &[name_of_pointer];
    int** ptr2 = &ptr;

    int** ptr3 = &ptr;

    


    // null pointer
    // pointers that point to 0

    int* null_ptr;

    null_ptr = 0;


    // new operator
   const char* str = "I hate school";
   int len = strlen(str);

//    cout << "\n\n\n " << str <<endl;

//    cout << "hi";

    Person* perPtr[100];
    int n = 0;
    char choice;


    do{
        perPtr[n] = new Person;
        cout <<"\n\nAddress " <<  perPtr[n];
        perPtr[n]->setName();
        n++;
        cout << "Enter another (y/n)";
        cin >> choice;
    }
    while(choice == 'y');


    for(int j = 0; j < n; ++j){
        cout << "Person number " <<j+1; 
        perPtr[j]->printName();
    };
    return 0;
}