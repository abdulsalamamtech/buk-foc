#include <iostream>
#include <string>
#include <cctype>

using namespace std;


// PRE DEFINED FUNCTIONS

// Print number function
double printNum(auto num)
{
    auto result = num;
    return result;
}

// Print value function
void printVal(int num)
{
    auto sum = 0, i = 0;
    while(i < num){
        sum = sum + num;
        cout << sum << endl;
        i++;
    }
    cout << "This is from printVal function summation:  " << sum << endl << endl;
    cout << "The multiplication of " << num << " is " << num * num << endl;
    cout << "The division of " << num << " is " << num / num << endl;
    cout << "The addition of " << num << " is " << num + num << endl;
    cout << "The subtraction of " << num << " is " << num - num << endl;
}

// Print triangle
void triangle()
{
    cout << "\n This is a triangle!";
    auto start = 6, i = 0;
    string star = "*";
    while(start){
        while(i < 6){
            for(int j = 0; j < i; j++){
                cout << star;
            }
            cout << endl;
            i++;
        }
        start--;
    }
}

// Print inverse triangle
void inverseTriangle()
{
    cout << "\n This is a inverse triangle!";
    auto start = 6, i = 0;
    string star = "*";
    while(start){
        while(i < 6){
            for(int j = 6; j > i; j--){
                cout << star;
            }
            cout << endl;
            i++;
        }
        start--;
    }
}



// User Class
// Names
class Names{
    protected:
        string first_name;
        string last_name;

    public:
        // First name
        void setFirstName(string firstname){
            first_name = firstname;
        }

        string getFirstName(){
            return first_name;
        }
        // Last name
        void setLastName(string lastname){
            last_name = lastname;
        }

        string getLastName(){
            return last_name;
        }

        string getFullName(){
            return first_name + " " + last_name + "\n";
        }

        void myName(){
            cout << "Hello Programmer \n" << endl;
        }
};


// Display Names Class Function
void displayNamesClass(Names person){
    cout <<"First name: " <<person.getFirstName() <<endl;
    cout <<"Last name: " << person.getLastName() << endl;
    cout <<"Full name: " <<person.getFirstName() <<" " <<person.getLastName() <<"\n" <<endl;
}

// Reference parameter
void pin(int& pi){
    pi = pi * pi;
    cout << "The pi inside fun is : " << pi << endl;
}




int fac(int f = 0){
    int res = 0;
    if(f > 0){
        res = fac(f - 1);
    }
    return res;
}


// THE MAIN FUNCTION
int main()
{
    // Welcome new users of this program
    string welcome = "Hello world!, Welcome To Amtech Digital CodeBlock...";
    cout << welcome << endl << endl;

    cout << "\n this is recursion function \n" <<fac(80) <<endl;
    cout <<endl;

    // Declare num variable
    auto num  = printNum(50);
    cout << num <<endl;

    // Call the print Val function
    printVal(num);

    // Call the triangle function
    triangle();

    // Call the inverse triangle function
    inverseTriangle();


    // working with name class
    Names person;
    person.setFirstName("Amtech");
    cout << person.getFirstName() << endl;

    person.setLastName("Digital Networks");
    cout << person.getLastName() << endl;

    cout << person.getFullName() << endl;
    person.myName();

    // Display Names class function
    displayNamesClass(person);

    // reference parameter
    cout << "Reference parameter" << endl;
    int pi = 80;
    cout << "The pi on <before fun> is : " << pi << endl;
    pin(pi);
    cout << "The pi on <after fun> is : " << pi << endl;


    cout << isupper('a') << endl;
    cout << welcome.length();

    // End of program
    // cout << "\a \n \t \r ";
    return 0;
}
