#include<iostream>
using namespace std;
class Box{
 public:
 double length;
 double breadth;
 double height;    

};
int main(){
    Box box1;
    Box box2;
    double volume=0;

    box1.height=10.0;
    box1.length=6.0;
    box1.breadth=7.0;

    box2.height=10.0;
    box2.length=8.0;
    box2.breadth=7.0;
     
    volume=box1.height*box1.length*box1.breadth;
    cout<<"Volume of box1 is:"<<volume<<endl;
    volume=box2.height*box2.length*box2.breadth;
    cout<<"Volume of box2 is:"<<volume<<endl;

    return 0;



}
