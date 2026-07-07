






















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

enum tokenType    {


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
    IMPORT, //  import                                                         21
    POUND, // #   //this is a comement Do not read computer                    22
    END,  //end //end the promgaed                                             23
    
    INPUT,//input and print work as the same in python but with a ; at the end of it 24
    PRINT,                                                                         //25


//file
    FIll,  //file //file.something(file_name_and when the floder is)                                                           26
    OPEN,            // open,//file.open(file_name_and when the floder is)                                                     27
    CLOSE,           //  close //file.close(file_name_and when the floder is)                                                  28
    CHANGED_FILE,    // changed //file.changed(file_name_and when the floder is){text go here} This can changed .text to .text 29
    COPY_FILE,       // copy  //file.copy(file_name_and when the floder is)                                                    30
    PASTE_FILE,      // paste    //file.paste(file_name_and when the floder is) can be store in var as a                       31
    REMOVE_FILE,     // remove     //file.remove(file_name_and when the floder is)                                             32
    ADD_NEW_FILE,    // add    //file.add(file_name_and when the floder is) ALlow you to file or folder3r432                   33
//otherThing

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
//equalinmg sign/if and loop

    BREAK, // break //this end the loop     55
    WHILE,  //while//while (condueno) {}    56
    FOR, // for//for i in range(condende)   57

    IF,   // if     58
    ELSE, // else   59
    ELIF, // elif   60

    TRUE, // true   61
    FALSE,// false  62

    OppGt, // !>    63
    OppLt, // !<    64

    Gt,   //  >     65
    Lt,   //  <     66

    EqGt,  //  >=   67
    EqLt,  //  <=   68
    Eq,    //  ==   69
    
    OppeEp,   //  !=  70
    OppEqGt,  //  !>= 71
    OppEqLt,  //  !<= 72


    OR1,   //  ||     73
    OR2,   //  or     74
    and1,  //  &&     75
    and2,  //  and    76

//class, funce


    MAIN,     // main() {   code      }                                                            77
    CLASS,    // class                                                                             78
    DEF_FUNC, //def_func(){   code     }
    RETURN,   //return //this allow you to return a value in a func|return var; \\ return VarType  79
    PASS,     //pass //this allow a func do have no code in                                        80

    //switch and case
    SWITCH, //switch;   81
    CASE,   //case;     82

    TRY, //try;         83
    EXCEPT, // expcept; 84






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
    tokenType type;
};

bool is_number(char* ) noexcept ;
if is_number{

}

void ok(){
        std::cout << NAME +  ">>>:" << '\n' << VERSION_NUMBER << '\n';}



