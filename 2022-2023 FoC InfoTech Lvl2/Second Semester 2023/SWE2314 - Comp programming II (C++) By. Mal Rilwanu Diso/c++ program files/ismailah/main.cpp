#include <iostream>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        void setName(string n){
            name = n;
        }
        void setAge(int a){
            age = a;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        Person(string nm = "AJ", int ag = 89){
            name = nm;
            age = ag;
        }
        ~Person(){
        }
};

int main()
{

    cout << "No parameters" <<endl <<endl;

    Person man;
    // man.setName("AJ");
    // man.setAge(800);
    cout <<man.getName() <<endl;
    cout <<man.getAge() <<endl;




    return 0;
}
