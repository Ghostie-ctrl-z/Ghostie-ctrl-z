#include<iostream>

int main()
{ 
    //explains program to user
    std::cout<<"Welcome! Enter two numbers \nI will sum them.\n";
    //Declares Input variables
    int x, y;
    //Declares output variables
    int sum;


    //Prompts User for inputs
    std::cout<<"Type a number: ";
    std::cin >> x;
    std::cout << x <<"\n";
    std::cout << "Type another number: ";
    std::cin >> y;
    std::cout<< y  <<"\n";
    //Operates on User Input

    sum = x+y;
    //Prints Results
    std::cout<<"Sum is: "<<sum;
    return 0;
      









}