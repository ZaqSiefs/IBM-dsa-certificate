#include<iostream>
using namespace std;
class Circle
{
private:
    int radius;

   //Include appopriate methods for the class
    
public:
    Circle(int x) {
        radius = x;
    }
    
    int getRadius() {
        return radius;
    }
    
};
class Utility
{
    //Include appopriate methods for the class
public:
    static double calculateArea(Circle c) {
        return (3.14 * c.getRadius() * c.getRadius());
    }
};
int main()
{
    //Input statements are provided as part of the code skeleton
    int radius=0;
    cout<<"Enter the radius(in cm)"<<endl;
    cin>>radius;
    
    //Fill the code here
    Circle c(radius);
    double circleArea = Utility::calculateArea(c);
    std::cout << "Circle Area=" << circleArea << "cm2\n";
    
    return 0;

}
