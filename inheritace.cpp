#include <iostream>

using namespace std;
const int len = 80;
class employee
{
private:
    char name[len];
    int employee_number;

public:
    void getInfo()
    {
        cout << "\nEnter name: ";
        cin >> name;

        cout << "\nEnter employee number: ";
        cin >> employee_number;
    }

    void displayInfo() const
    {
        cout << "Name : " << name;
        cout << "\nEmployee number: " << employee_number;
    }
};

class manager : public employee
{
private:
    char title[len];
    double dues;

public:
    void getInfo()
    {
        employee::getInfo();
        cout << "\nEnter title: ";
        cin >> title;

        cout << "\nEnter dues amount: ";
        cin >> dues;
    }

    void displayInfo() const
    {
        employee::displayInfo();
        cout << "Title : " << title;
        cout << "\nGolf club dues: " << dues;
    }
};

// friend class and functions

class RRect
{
private:
    int w, h;

public:
    void setValues(int, int);
    void getValues();

    friend RRect duplicate(RRect);
};

void RRect::setValues(int x, int y)
{
    w = x;
    h = y;
};

void RRect::getValues()
{
    cout << w << " " << h << endl;
}

RRect duplicate(RRect x)
{
    RRect y;
    y.w = x.w * 2;
    y.h = x.h * 2;

    return y;
}

class CRectangle
{
    int l, w;

public:
    int area()
    {
        return l * w;
    }
    void setSides(int, int);
    friend void convert(CRectangle);
    void checkOthers (CRectangle);
};

void CRectangle::checkOthers(CRectangle b){
    cout << b.l;
}

void convert(CRectangle t)
{
    cout << t.l  << " "<< t.w << endl;
}

void CRectangle::setSides(int a, int b){
    l = a;
    w = b;
}

class CSquare
{
};
int main()
{
    RRect a, b;
    a.setValues(2, 3);
    b = duplicate(a);

    b.getValues();

    CRectangle c;
    c.setSides(3, 5);
    convert(c);

    return 0;
}