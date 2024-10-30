//define a structure for representing a point
//each point should have x and y coordinates
//then overload the equality operator (==)
//and stream insertion operators (<<)
//for points

#include <iostream>
using namespace std;

struct myStruct{
    int xValue;
    int yValue;
    bool operator == (myStruct& other) {
        //return this -> value == other.value;
        bool boolOne = (xValue == other.xValue);
        bool boolTwo = (yValue == other.yValue);
        return boolOne & boolTwo;
    }
};
ostream& operator << (ostream& stream, myStruct coords){
    cout << "(" << coords.xValue << ", " << coords.yValue << ")";
    return stream;
}

int main(){
    myStruct firstPoint = {4, 5};
    myStruct secondPoint = {2, 3};
    myStruct thirdPoint = {2, 3};
    if(firstPoint == secondPoint){
        cout << "The first and second points, " << firstPoint << " and " << secondPoint << ", are equal" << endl;
    }
    if(firstPoint == thirdPoint){
        cout << "The first and third points, " << firstPoint << "and " << thirdPoint << ", are equal" << endl;
    }
    if(secondPoint == thirdPoint){
        cout << "The second and third points, " << secondPoint << " and " << thirdPoint << ", are equal" << endl;
    }
    return 0;
}
