#include <iostream>
#include<windows.h>

using namespace std;



int main()
{
    float num1, num2;
    float add;
    float subtract;
    float multiply;
    float divide;
    string calculationType;
    int i;


    cout<< "Welcome to the calculator which can add, subtract, multiply and divide!"<< endl;



    Sleep(500); // Delay, just for fun
    cout<< "Loading----------------------------------------------------------------"<< endl;
    Sleep(500);
    cout<< "Please wait------------------------------------------------------------"<< endl;
    Sleep(500);


    cout<< "First of all please choose two random numbers: "<< endl;
    cin>> num1 >> num2;


    Sleep(500);
    cout<< "Loading----------------------------------------------------------------"<< endl;
    Sleep(500);
    cout<< "Please wait------------------------------------------------------------"<< endl;
    Sleep(500);




    cout<< "Please choose what do you want to do with these numbers: "<< endl;
    cout<< "Press + for addition."<< endl;
    cout<< "Press - for subtraction."<< endl;
    cout<< "Press * for multiplication."<< endl;
    cout<< "Press / for division."<< endl;

    cin>>calculationType;


    cout<< "Please wait------------------------------------------------------------"<< endl;
    Sleep(1000);

    if(calculationType == "+"){
        cout<< "You chose addition!"<<endl;
        add = num1 + num2;
        cout<< "The sum of these two numbers is: "<< add<<endl;

    }

    else if(calculationType == "-"){
        cout<< "You chose subtraction!"<<endl;
        subtract = num1 - num2;
        cout<< "Numbers subtracted, the result is: "<< subtract<<endl;
        }

    else if(calculationType == "*"){
        cout<< "You chose multiplication!"<<endl;
        multiply = num1*num2;
        cout<< "Numbers multiplied, the result is: "<< multiply<<endl;
    }
    else if(calculationType == "/"){
        cout<< "You chose division!"<<endl;
        divide = num1/num2;
        cout<< "Numbers divided, the result is: "<< divide<<endl;
    }
    else {
        for(i=0;i<=10;i++){
        cout<<"Fatal error! Fatal error! Fatal error! Fatal error! Fatal error! Fatal error!"<< endl;
        }
    }






    return 0;
}
