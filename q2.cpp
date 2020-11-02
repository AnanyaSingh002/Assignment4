/*Draw an inheritance hierarchy for students at a university. Use Student as the base class of the
hierarchy, then include classes UndergraduateStudent and GraduateStudent that derive from Student .
Continue to extend the hierarchy as deep (i.e., as many levels) as possible. For example, Freshman,
Junior and Senior might derive from UndergraduateStudent , and DoctoralStudent and MastersStudent
might derive from GraduateStudent . After drawing the hierarchy, discuss the relationships that exist
between the classes. Also, implement the above hierarchy using C++ code.*/
#include<iostream>
using namespace std;
class Student {
public:
void Study() {
cout << "I will study after 3 hours" << "\n";
}
};
class UndergradStudent: public Student {
public:
void Btech() {
cout << "I am doing Btech from Graphic Era Deemed To be University" << "\n";
}
};
class Freshman: public UndergradStudent {
public:
void Motivation() {
cout << "i will score highest marks in this sem" << "\n";
}
};
class Junior: public UndergradStudent {
public:
void coding() {
cout << "My program doesn't work" << "\n";
}
};
class Senior: public UndergradStudent {
public:
void coding() {
cout << "What am i doing here?" << "\n";
}
};
class GradStudent: public Student {
public:
void Knowledge()
{
cout << "I want to get more Knowledge" << "\n";
}
};
class MasterStudent : public GradStudent {
public:
void Master() {
cout << "I will give my best to  this subject" << "\n";
}
};
class DoctoralStudent : public GradStudent {
public:
void Doctoral() {
cout << "I will explore new things in this subject" << "\n";
}
};
int main() {
Junior Rachel;
Rachel.Btech();
Rachel.coding();
Rachel.Study();
DoctoralStudent Green;
Green.Doctoral();
Green.Study();
}
