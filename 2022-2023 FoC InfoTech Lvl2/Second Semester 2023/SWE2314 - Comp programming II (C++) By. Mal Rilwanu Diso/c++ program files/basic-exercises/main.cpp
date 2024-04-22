#include <iostream>

using namespace std;

int main()
{
    cout <<"Hello world! by Amtech Digital" << endl;
    cout <<endl;


    // Finding the computation of two numbers
    cout <<"Finding the computation of two numbers" <<endl;
    double num1, num2;
    cout <<"Enter first number: ";
    cin >>num1;
    cout <<"Enter second number: ";
    cin >>num2;
    cout <<"Sum: " << num1 + num2 <<endl;
    cout <<"Mul: " << num1 * num2 <<endl;
    cout <<"Sub first: " << num2 - num1 <<endl;
    cout <<"Sub second: " << num1 - num2 <<endl;
    cout <<"Div first: " << num2 / num1 <<endl;
    cout <<"Div second: " << num1 / num2 <<endl;
    cout <<"Mod first: " << int(num2) % int(num1) <<endl;
    cout <<"Mod second: " << int(num1) % int(num2) <<endl;
    cout <<endl;


    cout <<"Calculating score" <<endl;
    int score = 0;
    string grade;
    cout <<"Enter your score from 0-100: ";
    cin >>score;
    cout <<endl;
    // Using switch case
    switch(int(score / 10)){
    case 0:
        grade = "P";
        break;
    case 1:
        grade = "F";
        break;
    case 2:
        grade = "E";
        break;
    case 3:
        grade = "D";
        break;
    case 4:
        grade = "C+";
        break;
    case 5:
        grade = "C+";
        break;
    case 6:
        grade = "B-";
        break;
    case 7:
        grade = "B+";
        break;
    case 8:
        grade = "A";
        break;
    case 9:
        grade = "A-";
        break;
    case 10:
        grade = "A+";
        break;
    default:
        grade = "Invalid!";
    }
    cout <<"Your point grade is: "<<grade;
    cout <<endl;

    // Using if else statement
    if(score >= 70){
        grade = "A";
    }else if(score >= 60){
        grade = "B";
    }else if(score >= 50){
        grade = "C";
    }else if(score >= 45){
        grade = "D";
    }else if(score >= 40){
        grade = "E";
    }else if(score < 40){
        grade = "F";
    }else{
        grade = "Invalid!";
    }
    cout <<"Your grade is: "<<grade;
    cout <<endl;




    return 0;
}
