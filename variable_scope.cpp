#include <iostream>

int main() {
    float getAvrg(float);
    float data, avg;

    while (data != 0)
    {
       std::cout << "Enter number: ";
       std::cin >> data;
       avg = getAvrg(data);
       std::cout << "New average is " << avg << "\n";
    }
    


    return 0;
}

// static variables

float getAvrg(float newdata){
    static float total = 0;
    static int count = 0;


    ++count;

    total += newdata;
     
    return total / count;
}