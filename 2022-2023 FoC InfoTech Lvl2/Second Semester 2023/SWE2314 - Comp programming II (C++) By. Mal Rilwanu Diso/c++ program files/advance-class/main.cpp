#include <iostream>
#include <string>

using namespace std;

// use to define and shorten code
#define nl endl;


// Base class person
class Person{

    private:
        string name;
        int age;

    public:
        void setName(string inName){
            name = inName;
        }
        void setAge(int inAge){
            age = inAge;
        }

        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }

};


// Derived class student
class Student: public Person{
    private:
        string regNum;
        string dept;
        string level;

    public:
        void setRegNum(string inRegNum){
            regNum = inRegNum;
        }
        string getRegNum(){
            return regNum;
        }

        void setDept(string inDept){
            dept = inDept;
        }
        string getDept(){
            return dept;
        }

        void setLevel(string inLevel){
            level = inLevel;
        }
        string getLevel(){
            return level;
        }

        string getStudentInfo(){
            string stuAge = to_string(getAge());
            string stuInfo = "Name: " +  getName() + " \n"
                + "Age: " + stuAge + " \n"
                + "Reg no: " + getRegNum() + " \n"
                + "Dept: " + getDept() + " \n"
                + "Level: " + getLevel() + " \n"
                + getName() + " is a student of BUK." + " \n\n";
            return stuInfo;
        }

};



struct Shape{
    double height;
    double length;
    double width;
    double Area(){
        return height * length * width;
    }
};

void getShapInfo(Shape);
// Main program function
int main()
{
    // nl; is the short form of end;
    cout <<"Hello world!" <<endl <<nl;

    // Using student class
    Student stu;
    stu.setName("Amtech");
    stu.setAge(34);
    stu.setLevel("level 4");
    stu.setRegNum("buk/20/com/00067");
    stu.setDept("computer");
    cout <<endl;
    cout <<stu.getStudentInfo();

    Shape Trian;
    cout << "Enter height: ";
    cin >>Trian.height;
    cout << "Enter length: ";
    cin >>Trian.length;
    cout << "Enter width: ";
    cin >>Trian.width;

    cout <<"Area: "<< Trian.Area();
    cout <<endl <<endl;
    getShapInfo(Trian);
    cout <<endl;

    // multi dim array
    cout << "Working on multidimention arrays";
    int rows = 3;
    int cols = 3;
    int sum_arr = 0;
    int multi_arr[rows][cols] = {
        {23, 45, 78},
        {32, 54, 87},
        {641, 108, 814}
    };
    cout << endl;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            sum_arr += multi_arr[i][j];
            cout << "[" <<multi_arr[i][j] <<"]" <<" ";
        }
        cout <<endl;
    }
    cout <<"The sum of the multi dim array is " <<sum_arr <<endl;
    cout <<endl;


    // Printing the reverse of a string
    string val = "VALUE";
    cout <<"Printing the reverse of a string"<<endl;
    string rev_val;
    for(int i = 4; i >= 0; i--){
        rev_val += val[i];
    }
    cout <<"The reverse of the string " <<val <<" is " <<rev_val <<endl;


    return 0;
}

// Get shape information function
void getShapInfo(Shape shape){
    cout <<"The shape has an height of " <<shape.height <<",";
    cout <<" a length of " <<shape.length;
    cout <<" and width of " <<shape.width <<endl;
    cout <<"The area of the shape is " <<shape.Area() <<endl;
}

