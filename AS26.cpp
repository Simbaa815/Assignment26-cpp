// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void showData()
    {
        cout << "real = " << real << " imaginary = " << imaginary << endl;
    }

    Complex add(Complex c1, Complex c2)
    {
        cout << "The sum of real part is " << c1.real + c2.real;
        cout << "\nThe sum of imagainary part is " << c2.imaginary + c2.imaginary << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.setData(3, 5);
    c1.showData();
    c2.setData(5, 3);
    c2.showData();
    c1.add(c1, c2);
}

// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int a, int b, int c)
    {
        h = a;
        m = b;
        s = c;
    }
    void showTime()
    {
        cout << "Hour = " << h << " minute = " << m << " second = " << s << endl;
    }
    void normalize()
    {
        m = m + s / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
    }

    Time add(Time t)
    {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    t1.setTime(6, 55, 38);
    t1.showTime();
    t2.setTime(7, 50, 26);
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();
}

// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
public:
    Cube(int x)
    {
        cout << "Cube of" << x << " is " << (x * x * x) << endl;
    }
};
int main()
{
    Cube c(4);
}
// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class Counter
{
private:
    int count = 0;

public:
    Counter() { cout << ++count; }
};
int main()
{
    Counter c1;
}
// 5. Define a class Date and write a program to Display Dateand initialise date object
// using Constructors.
#include <iostream>
using namespace std;
class Date
{
private:
    int d, m, y;

public:
    Date(int a, int b, int c)
    {
        d = a;
        m = b;
        y = c;
    }
    void dis_date()
    {
        cout << "Day is " << d << " month is " << m << " year is " << y;
    }
};
int main()
{
    Date d1(12, 6, 2002);
    d1.dis_date();
}
// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include <iostream>
using namespace std;
class Student
{
private:
    int rollno, age, clss;
    static int num;
    string name;

public:
    Student(int r, string n, int a, int c)
    {
        rollno = r;
        name = n;
        age = a;
        clss = c;
    }
    void showDetail()
    {
        cout << "Student " << ++num << endl;
        cout << "rollno. " << rollno << " , name: " << name << ", age: " << age << ", class: " << clss << endl;
    }
};
int Student::num; // num is static so we do this for given the memory
int main()
{
    Student s1(1, "Rohan Balgotra", 19, 10), s2(2, "Rajat sharma", 17, 9);
    s1.showDetail();
    s2.showDetail();
}
// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include <iostream>
using namespace std;
class Box
{
private:
    int len, bred, hght;

public:
    Box(int l, int b, int h)
    {
        len = l;
        bred = b;
        hght = h;
    }

    void cal_vol()
    {
        cout << "volume of the box is " << len * bred * hght << endl;
    }
};
int main()
{
    Box b(3, 6, 8), b1(5, 3, 6);
    b.cal_vol();
    b1.cal_vol();
}
// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
private:
    int p, r, t;

public:
    Bank(int principal, int roi, int time)
    {
        p = principal;
        r = roi;
        t = time;
    }
    void SI()
    {
        cout << (p * r * t) / 100 << endl;
    }
};

int main()
{
    Bank b1(1000, 5, 1), b2(1000, 5, 2);
    b1.SI();
    b2.SI();
    return 0;
}

// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
using namespace std;
class Bill
{
private:
    int houseno, units, amount;
    string name;

public:
    void get(int h, int u, string n)
    {
        houseno = h;
        units = u;
        name = n;
    }
    void calculateBill()
    {
        if (units <= 100)
        {
            amount = 1.20 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
        else if (units > 100 && units <= 200)
        {
            amount = 2 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
        else
        {
            amount = 3 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
    }
};

int main()
{
    Bill b1, b2;
    b1.get(10, 55, "Amash");
    b2.get(20, 300, "Ansari");
    b1.calculateBill();
    b2.calculateBill();
    return 0;
}
// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{
    private:
        static int count;
    public:
        void Increment()
        {
            count++;
            cout<<count<<endl;
        }
};
int StaticCount:: count ;

int main(){
    StaticCount s;
    s.Increment();
    s.Increment();
    s.Increment();
}