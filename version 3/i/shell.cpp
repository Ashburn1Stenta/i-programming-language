#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "SourceCode/Token.cpp"
    std::string text;
    std::string result; 

int main() {
    bool show_info = true;
    while (show_info) {
        ok();
        show_info = false;
        break;
        //show_info = false;


    }
    while (show_info == false) {
        std::cout << ">>>:";
        std::cin >> text;

        result = text;
        std::cout << result << std::endl;
    }
    return 0;
}
//goal


/*
The goal is to be fast as must c/c++ and use syntax of C/C++ but easy as Python
also have pointer


Main(){#This will allow you to run everthing in this



}




 
#if stantment 
spaceing will not matter
if (c = a and 6 = 6){
    print("cat") #This is a string
    print(1) #this is a int
}
elif (c > a || 7 =7){
    print("hello");


}

or 

if (c = a && 6=6)
{
print("cat") #This is a string
print(1) #this is a int
print('a') # this is a char and iit have to be like this 'lettle' ''
}

#funcuter

def_funac(data or the thing you put it in){

return;
} 
# this is conment or do not read computer

#import

import the_name_of_the_libary;

import from the_name_of_the_libary *;

#var
var  NAME = VALUE;
var number = 5;
var number2 = 1.5;
var word = "word";
*/