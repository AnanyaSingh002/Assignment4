/*1.Discuss the ways using suitable examples in which inheritance promotes software reuse, saves time
during program development and helps prevent errors.*/
#include<iostream>
using namespace std;
class Pets {
public:
void What() {
cout << "Eat sleep Repeat" << "\n";
}
};
class Dogs : public Pets {
public:
void Woff() {
cout << "Let's go for a walk !" << "\n";
}
};
int main() {
Dogs Ed;
Ed.Woff();
Ed.What();
}
