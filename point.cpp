// Ivan Stus cssc1719
// CS320Lab3 - point.cpp (Class) 

#include <cmath>
#include <iostream>
using namespace std;

class Point {
    private:    //Initialize inputted point as private
    float x1;
    float y1;
    public:     //(0,0) is a public point
    float x2;
    float y2;

    //Constructor
    Point(float x, float y) {   
        x1 = x;
        y1 = y;
    }    

    //Calculate distance between point and origin, return distance 
    float distance() {
        x2 = 0;
        y2 = 0;
        float x = x1 - x2; 
	    float y = y1 - y2;
	    float dist;
	    dist = pow(x, 2) + pow(y, 2); 
	    dist = sqrt(dist);    
        return dist;
    }
    
    //Less than
    friend bool operator < (Point& lhs, Point& rhs) {
        if (lhs.distance() < rhs.distance()) {
            return true;
        }
        else {
            return false;
        }
    }

    //Greater than
    friend bool operator > (Point& lhs, Point& rhs) {
        if (lhs.distance() > rhs.distance()) {
            return true;
        }
        else {
            return false;
        }
    }

    //Greater than or equal to
    friend bool operator >= (Point& lhs, Point& rhs) {
        if ((lhs > rhs == true) || (lhs.distance() == rhs.distance())) {
            return true;
        }
        else {
            return false;
        }
    }

    //Less than or equal to
    friend bool operator <= (Point& lhs, Point& rhs) {
        if ((lhs < rhs == true) || (lhs.distance() == rhs.distance())) {
            return true;
        }
        else {
            return false;
        }
    }

    //Equal
    friend bool operator == (Point& lhs, Point& rhs) {
        if (lhs.distance() == rhs.distance()) {
            return true;
        }
        else {
            return false;
        }
    }

    //Not equal
    friend bool operator != (Point& lhs, Point& rhs) {
        if (lhs.distance() != rhs.distance()) { 
            return true;
        }
        else {
            return false;
        }
    }

    //Override << operator for proper printing to output stream
    friend ostream& operator << (ostream& os, const Point& obj) {
        return os << "X:" << obj.x1 << " Y:" << obj.y1;    
    }
};