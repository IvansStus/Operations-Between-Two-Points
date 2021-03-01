// Ivan Stus cssc1719
// CS320Lab3 - lab3.cpp (Driver) 

#include "point.cpp"

int main() {
    Point obj1(5.5f, 10.5f);    //Point class initializations
    Point obj2(7.0f, 12.0f);
    Point obj3(5.5f, 10.5f);
    cout << "True = 1, False = 0" << endl;  //Compile Info
    cout << "obj1: " << obj1 << endl;       
    cout << "obj2: " << obj2 << endl; 
    cout << "obj3: " << obj3 << endl;     
    cout << "obj1 < obj2 = " << (obj1 < obj2) << endl;  //Operators being tested
    cout << "obj1 > obj2 = " << (obj1 > obj2) << endl;
    cout << "obj1 <= obj2 = " << (obj1 <= obj2) << endl;
    cout << "obj1 >= obj2 = " << (obj1 >= obj2) << endl;
    cout << "obj1 == obj2 = " << (obj1 == obj2) << endl;
    cout << "obj1 != obj2 = " << (obj1 != obj2) << endl;
    cout << "obj1 < obj3 = " << (obj1 < obj3) << endl;  //Operators being tested
    cout << "obj1 > obj3 = " << (obj1 > obj3) << endl;
    cout << "obj1 <= obj3 = " << (obj1 <= obj3) << endl;
    cout << "obj1 >= obj3 = " << (obj1 >= obj3) << endl;
    cout << "obj1 == obj3 = " << (obj1 == obj3) << endl;
    cout << "obj1 != obj3 = " << (obj1 != obj3) << endl;
}