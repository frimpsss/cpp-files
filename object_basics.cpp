#include <iostream>

using namespace std;

class Test
{
public:
    int age;
};

class SmallObj
{
private:
    int someData;

public:
    void setData(int n)
    {
        someData = n;
    }
    void showData()
    {
        cout << "Data is " << someData << endl;
    }
    void addData(int n)
    {
        someData += n;
    }
};
class Part
{
private:
    string name;
    string model;

public:
    void setPart(string n, string m)
    {
        name = n;
        model = m;
    }
    void showPart()
    {
        cout << name << " " << model << endl;
    }
};

class Counter
{
private:
    unsigned int count;

public:
    Counter() : count(20) {}

    void inc_count()
    {
        count += 1;
    }

    void inc_count(int n)
    {
        count += n;
    }
    void dec_count()
    {
        count -= 1;
    }

    void dec_count(int n)
    {
        count -= n;
    }

    int show_count()
    {
        return count;
    }
};

// objects as function arguments
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0) {}
    Distance(int f, float i) : feet(f), inches(i) {}

    void getDistance()
    {
        cout << "\n Enter feet: ";
        cin >> feet;
        cout << "\n Enter inches: ";
        cin >> inches;
    }

    void showDistace(){
        cout << feet << "'-" << inches << "\"" <<endl;
    }

    void addDistance(Distance, Distance);
};



void Distance::addDistance(Distance a, Distance b){
    float inches = a.inches + b.inches;
    int feet = 0;
    if (inches >= 12.0) {
        inches -= 12.0;
        feet += 1;
    }

    feet += a.feet + b.feet;
}


// void Counter::clear(){

// }


int main()
{
    Test test;
    // cout << test.age << endl;
    // instance of class to create object
    SmallObj s0, s1, s2, s3;
    // set data
    s1.setData(3);
    s2.setData(234);

    // output datas
    s2.showData();
    s1.showData();

    Part part;
    part.setPart("Toyota", "Civic");
    part.showPart();

    Counter c1, c2;
    c1.inc_count();
    c1.inc_count(32);
    c1.dec_count();
    c1.dec_count(6);

    // cout << c1.show_count() << endl;


    Distance d1(5, 11);
    Distance d2(d1);
    Distance d3 = d2;

    d1.showDistace();
    d2.showDistace();
    d3.showDistace();

    return 0;
}
