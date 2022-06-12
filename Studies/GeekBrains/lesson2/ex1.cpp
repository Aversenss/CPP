#include <iostream>

using namespace std;

class Person {
    protected:
        string _name;
        int _age;
        bool _gender;
        int _weight;
    public:
        Person(string name, int age, int weight, bool gender): _name(name), _age(age), _weight(weight), _gender(gender) { count++; };
        void setName(string name);
        void setAge(int age);
        void setWeight(int weight);
        void setGender(bool gender);

        static int count;

};

int Person::count = 0;

class Student: public Person {
    private:
        int _studyYear;
    public:
        Student(string name, int age, int weight, bool gender, int studyYear):Person(name,age,weight,gender), _studyYear(studyYear) {};
        void giveYear();
        void changeYear(int year);    
        void display();
};


void Person::setName(string name) {
    _name = name;
}

void Person::setAge(int age) {
    _age = age;
}

void Person::setWeight(int weight) {
    _weight = weight;
}

void Person::setGender(bool gender) {
    _gender = gender;
}

void Student::display() {
    string gender;
    if(_gender)
        gender = "Male";
    else
        gender = "Female";
    cout << "Name: " << _name << ", Age: " << _age << ", Gender: " << gender << ", Weight: " << _weight << " kg. Study: " << _studyYear << endl;
}

void Student::giveYear() {
    _studyYear++;
}

void Student::changeYear(int year) {
    _studyYear = year;
}



int main(const int argc, char* argv[]) {
    Student student1("Egor", 18, 54, true, 2022);
    Student student2("Vladimir", 24, 78, true, 2018);
    Student student3("Dmitriy", 21, 65, true, 2019);

    student1.display();
    student2.display();
    student3.display();

    student1.setName("Nikolay");
    student2.setAge(22);
    student2.changeYear(2020);
    student3.setAge(23);
    student3.giveYear();

    cout << "/--------------/" << endl;

    student1.display();
    student2.display();
    student3.display();


    cout << "Count: " << Person::count << endl;
    return 0;
}
