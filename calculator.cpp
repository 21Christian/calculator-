#include<iostream>
using namespace std;


void calculator(){
    
    // needed variables
    char myoperator;
    double num1, num2;
    
    // user input 
    cout<< "Enter first number: ";
    cin >> num1;
    cout<<"Enter operator (+, -, /, *): ";
    cin>>myoperator;
    cout<< "Enter second number: ";
    cin >> num2;
    double result;
    
    // operations 
    if(myoperator == '+'){
        result = num1 + num2;
    } else if (myoperator == '-'){
        result = num1 - num2;
    } else if(myoperator == '/'){
        result = num1 / num2;
    }else if (myoperator == '*'){
        result = num1 * num2;
    } else {
        cout<<"Invalid input";
    }

    cout<<result; 
}



//main function 
int main()
{   
    calculator();
    return 0;

}
