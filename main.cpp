#include <iostream>
#include<iomanip>
using namespace std;
//Write a program to print HELLO WORLD on screen.
/*
int main()
{
    cout << "HELLO WORLD" << endl;
    return 0;
}
*/
/*
Write a program to display the following output using a single cout
statement.
Subject Marks
Mathematics 90
Computer 77
Chemistry 69

int main() {

    cout << setw(5) << "Subject" << setw(12) << "Marks" << endl
    << setw(5) << "Mathematics" << setw(5) << 90 << endl
     << setw(5) << "Computer" << setw(8) << 97 << endl
    << setw(5) << "Chemistry" << setw(7) << 60 << endl;

    return 0;
}
*/

//Write a program which accept two numbers and print their sum.
/*
int main(){

    int num1,num2;
    cout <<"Enter two numbers: ";
    cin >>num1>>num2;

    cout <<"The sum of two numbers = " <<num1+num2 <<endl;
return 0;
}
*/
/*Write a program which accept temperature in Fahrenheit and print it in
centigrade.*/
/*
int main() {

    float farh,cent;

    cout <<"Enter the temperature in Fahrenheit: " << endl;
    cin >>farh;

    cent=(farh-32)*5/9;
    cout <<"The centigrade temperature= "<< cent <<endl;
return 0;
}
*/

/*Write a program which accept principle, rate and time from user and print
the simple interest.*/
/*
int main() {

int p,t;
float r,si;

cout << "Enter the principal , rate and time(in year) to calculate the simple interest : " << endl;
cin >>p>>r>>t;
si=(p*t*r)/100;

cout << "Simple Interest= " <<si<< endl;

return 0;
}
*/

/*
Write a program which accepts a character and display its ASCII value.*/
/*
int main() {

   char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "The ASCII value of " << c << " is " << int(c) << endl;

return 0;
}
*/

/*Write a program to swap the values of two variables.*/
/*
int main() {
    int var1, var2;
    int temp;
    cout <<"Enter 1st number :" ;
    cin >>var1;

    cout <<"Enter 2nd number : ";
    cin >>var2;
    cout <<"Before swapping the first number = " <<var1 << ",the second number = "<<var2 << endl;


        temp=var1;
        var1=var2;
        var2=temp;

        cout <<"After swapping the first number = "<<var1<<",the second number = "<<var2<<endl;

return 0;
}
*/


/*
Write a program to calculate area of circle.
*/
/*
int main () {

float radius,area;

cout <<"Enter the radius of the circle : " ;
cin >>radius;

area = 3.145*radius*radius;
cout <<"The AreaOfCircle = " << area;

return 0;
}
*/

/* Write a program to check whether the given number is positive or negative
(using ? : ternary operator) */
/*
int main () {

int number;

cout<<"Enter any number = ";
cin >> number;

    (number >= 0) ? cout << "The number is positive." << endl : cout << "The number is negative." << endl;


return 0;
}
*/


/* Write a program to check whether the given number is even or odd (using ?
: ternary operator) */
/*
int main() {

    int num;
    cout <<"Enter any number to find even or odd : ";
    cin >>num;

    (num%2==0)? cout <<"The number is even." << endl : cout << "The number is odd." << endl;

return 0;
}
*/
/* Write a program which input three numbers and display the largest number
using ternary operator. */
/*
int main() {

 int num1,num2,num3;

 cout << "Enter three numbers : " << endl;
 cin >>num1>>num2>>num3;
 (num1>num2&&num1>num3)? cout <<num1<<" is greater." << endl : (num2 >= num1 && num2 >= num3) ? cout <<num2 << " is greatest" << endl: cout <<num3 <<  " is the greatest" << endl;

return 0;
}
*/

/* .Write a program which accepts amount as integer and display total number
of Notes of Rs. 500, 100, 50, 20, 10, 5 and 1. For example, when user enter a
number, 575, the results would be like this:
500 : 1
100 : 0
50 : 1
20 : 1
10 : 0
5 : 1
1 : 0
*/
/*
int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    int notes[] = {500, 100, 50, 20, 10, 5, 1};
    int count[7] = {0};

    for(int i = 0; i < 7; i++) {
        count[i] = amount / notes[i];
        amount = amount % notes[i];
    }

    cout << "Notes count:" << endl;
    cout << "500 : " << count[0] << endl;
    cout << "100 : " << count[1] << endl;
    cout << "50 : " << count[2] << endl;
    cout << "20 : " << count[3] << endl;
    cout << "10 : " << count[4] << endl;
    cout << "5 : " << count[5] << endl;
    cout << "1 : " << count[6] << endl;

    return 0;
}
*/


/* Write a program which accepts a character and display its next character.*/
/*
int main() {

char ch;

cout <<"Enter any character : " <<endl;
cin >>ch;

ch=ch+1;

cout <<"The character next to input character is : " <<ch << endl;


return 0;
}
*/

/* Write a program which accepts days as integer and display total number of
years, months and days in it. For example: If user input as 856 days the
output should be 2 years 4 months 6 days. */
/*

int main(){
int days,years,months,daysLeft,remainingDays;

cout <<"Enter the days : "<<endl ;
cin >>days;



    years = days / 365;
    remainingDays = days % 365;
    months = remainingDays / 30;
    daysLeft = remainingDays % 30;

        cout << "The equivalent number of years, months, and days is: " << years << " years, " << months << " months, and " << daysLeft << " days." << endl;


return 0;
}
*/

