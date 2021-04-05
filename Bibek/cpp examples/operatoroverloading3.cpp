//loading binary operator using member function
#include<iostream>
class distance
{
    int feet,inches;
public:
    distance(){}
    distance(int f,int i){
        feet = f;
        inches = i;
    }
    void display(){
        std::cout<<feet<<"."<<inches<<std::endl;
    }
    distance operator +(distance &d1){
        distance temp;
        temp.inches = inches + d1.inches;
        temp.feet = feet + d1.feet +(temp.inches/12);
        temp.inches = temp.inches%12;
        return temp;
    }

};
int main(){
    distance d1,d3;
    d1 = distance(5,6);
    d1.display();
    distance d2(5,7);
    d2.display();
    std::cout<<"Total distance = "<<std::endl;
    d3 = d1+d2;
    d3.display();
    return 0;
}
