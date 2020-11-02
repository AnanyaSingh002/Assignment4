/*Create a base Shape class which is inherited by TwoDShape and ThreeDShape and these shapes are
further extended by their derived classes like square, rectangle, sphere etc. You should provide
necessary methods like calculateArea, calculateVolume in these shapes.*/
#include<iostream>
using namespace std;
class shape {
public:
void propertiesOfshape() {
cout << "A shape is the form of an object or its external boundary, outline, orexternal surface, as opposed to other properties such as color, texture or material" << "\n";
}
};
class twoDshape : public shape {
public:
void propertiesof2d() {
cout << "Two D shape just have Length and Breath" << "\n";
}
};
class Square : public twoDshape {
public:
int calculateArea(int s) {
return s * s;
}
};
class Rectangle : public twoDshape {
public:
int calculateArea(int a, int b) {
return a * b;
}
};
class threeDshape: public shape {
public:
void propertiesof3d() {
cout << "a 3-d shape has Length ,Breath and height" << "\n";
}
};
class Sphere : public threeDshape {
public:
int areaofSpehere(int radius) {
return 4 / 3 * 3.17 * radius * radius * radius;
}
};
int main() {
Sphere Ball;
cout << Ball.areaofSpehere(3) << "\n";
Square Something;
cout << Something.calculateArea(4) << "\n";
}
