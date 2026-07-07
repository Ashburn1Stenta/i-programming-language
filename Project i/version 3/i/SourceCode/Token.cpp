#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cctype>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <fstream>
int pos = 0;

enum TokenType     {


//for robotics
    REPEAT, //repeat  // repeat(INT OR fLOAT) it will be turn to in to a float                      1
    FOREVER,//forever//like the repeat but forever|or a while that is true and can not be false     2
    MOVE, // move //move(INT OR fLOAT) it will be turn to in to a float                             3

//ML AI and robotics
    X,  //x //This is the x coor                                               4
    Y, // y //Thi s is the y coor                                               5
    Z,  //z //This is the z coor                                               6
//ML AI


//pointeraaa

    POINTER, //pointer; //pointer                                              7 
    POINTERNULL, // pointernull;                                               8        


//VarType
    FLOAT, //= float;                                                          9
    INT, //= int;                                                              10    
    STR, //= ;                                                                 12
    STR2,  //'                                                                 13    
    BOOL,//  bool;                                                             14

//other_thing

    SINGLE_BLACK_SLASH,                                          //            15
    DOUBLE_BACK_SLASH,                                           //            16
    ENDL,          //endl                                                      17
    ENDL2, // /n or '/n'                                         //            18
    F, //f;                                                                    19


    ALL_FOR_THE_LIBARY, // *                                                   20 
    IMPORT, //  import           
                                                  21
    POUND, // #   //this is a comement Do not read computer                    22
    END,  //end //end the promgaed                                             23
    RS,  // )          34          
    LS,  // (          35

    RCurlyBrackets, //  }  36
    LCurlyBrackets, // {   37
    
    RSquapeBrackets, // ]  38
    LSquapeBrackets, // [  39

//Math
    FLOOR, //floor//round thing down                           40  
    CELL, //cell //Round thing up                              41
    ABS, //abs //find the abor value of a number               42
    MAX, //max;//find the max of a list or array or more       43
    MIN, //min;//find the min  of a list or array or more      44

    MUL, //         *                   45
    INT_DIV,//      /                   46
    FLOAT_DIVE, //   //                 47
    ADD,//          +                   48                                    
    SUB,//          -                   49
    POW,//          ^                   50
    MOD,//          %                   51

//var
    Assign,//   =                                               52                                                                                                                         
    VAR,//var name = data;                                      53
    GLOBAL,// this is global var |global VarType name = data;   54



//number, lettle, for int and float and 
     Double_Quotes, // "                         85
     SINGLE_Quotes, // '                         86
     DOT,           // .                         87
     AT,            // @                         88
     COMMA,         // ,                         89
     COLON,         // :                         90
     SEMICOLON, // ; //go at the end of each line 91


     Number, //= "1234567890";
     letter, //= abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\\#$%^&*()_+=-\{}[]|:;'<>,.?/~`| + Number;

};
    std::string VERSION_NUMBER = "Version >>>: 000.000.001";
    std::string NAME  = "i";


    
struct Token
{
    std::string value;
    TokenType type;
};



void ok(){
        std::cout << NAME +  ">>>:" << '\n' << VERSION_NUMBER << '\n';}



