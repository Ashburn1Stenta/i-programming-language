#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
int pos = 0;
std::string curr_toke;
    std::string result;




//for robotics
    std::string REPEAT = "repeat"; //repeat(INT OR fLOAT) it will be turn to in to a float
    std::string FOREVER = "forever";//like the repeat but forever
    std::string MOVE = "move";//move(INT OR fLOAT) it will be turn to in to a float











//ML AI and robotics
    std::string X = "x"; //This is the x coor
    std::string Y = "y"; //This is the y coor
    std::string Z = "z"; //This is the z coor
//ML AI














//pointeraaa

    std::string POINTER = "pointer"; //pointer 
    std::string POINTERNULL = "pointernull";


//VarType
    std::string FLOAT = "float";
    std::string INT = "int"; 
    std::string STR = "string";
    std::string BOOL = "bool";

//other_thing

    std::string single_BLACK_SLASH = "\\";
    std::string DOUBLE_BACK_SLASH = "\\\\";
    std::string ENDL = "endl";
    std::string ENDL2 = "n"; // "/n" or '/n'
    std::string F = "f";


    std::string ALL_FOR_THE_LIBARY = "*";
    std::string IMPORT = "import";
    std::string POUND = "#";//this is a comement Do not read computer
    std::string END = "end"; //end the promgaed
    
    std::string INPUT = "input";
    std::string PRINT = "print";


//file
    std::string FIll = "file";//file.something(file_name_and when the floder is)
    std::string OPEN = "open";//file.open(file_name_and when the floder is)
    std::string CLOSE = "close";//file.close(file_name_and when the floder is)
    std::string CHANGED_FILE = "changed";//file.changed(file_name_and when the floder is){"text go here"} This cna changed the file from .text to .text
    std::string COPY_FILE = "copy";//file.copy(file_name_and when the floder is)
    std::string PASTE_FILE = "paste";//file.paste(file_name_and when the floder is) can be store in var as a string
    std::string REMOVE_FILE = "remove";//file.remove(file_name_and when the floder is)
    std::string ADD_NEW_FILE = "add";//file.add(file_name_and when the floder is) ALlow you to file or folder3r432
//otherThing

    std::string RS = ")";
    std::string LS = "(";

    std::string RCurlyBrackets = "}";
    std::string LCurlyBrackets = "{";
    
    std::string RSquapeBrackets = "]";
    std::string LSquapeBrackets  = "[";

//Math
    std::string FLOOR = "floor";//round thing down
    std::string CELL = "cell"; //Round thing up
    std::string ABS = "abs"; //find the abor value of a number
    std::string MAX = "max";//find the max of a list or array or more
    std::string MIN = "min";//find the min  of a list or array or more

    std::string MUL = "*";
    std::string DIV = "/";
    std::string ADD = "+";
    std::string SUB = "-";
    std::string POW = "^";
    std::string MOD = "%";

//var
    std::string Assign = "=";
    std::string VAR = "var"; //var VarType name = data;
    std::string global; // this is global var |global VarType name = data;
   
   
//equalinmg sign/if and loop

    std::string BREAK = "break"; //this end the loop 
    std::string WHILE = "while"; //while (condueno) {}
    std::string FOR = "for";//for i in range(condende)

    std::string IF = "if";
    std::string ELSE = "else";
    std::string ELIF = "elif";

    std::string TRUE = "true";
    std::string FALSE = "false";

    std::string OOpGt = "!>";
    std::string OppLt = "!<";

    std::string Gt = ">";
    std::string Lt = "<";

    std::string EqGt = ">=";
    std::string EqLt = "<=";
    std::string Eq = "==";
    
    std::string OppeEp = "!=";
    std::string OppEqGt = "!>=";
    std::string OppEqLt = "!<=";


    std::string OR1 = "||";
    std::string OR2 = "or";
    std::string and1 = "&&";
    std::string and2 = "and";

//class, funce


    std::string MAIN = "main";
    std::string CLASS = "class";
    std::string DEF_FUNC = "def_func";//def_func(){          }
    std::string RETURN = "return"; //this allow you to return a value in a func|return var; \\ return VarType
    std::string VOID = "void";
    std::string nuLL = "null";

    //switch and case
    std::string SWITCH = "switch";
    std::string CASE = "case";  

    std::string TRY = "try";
    std::string EXCEPT = "expcept";






//number, lettle, for int and float and string
    std::string Double_Quotes = "\"";
    std::string Single_Quotes = "'";
    std::string DOT = ".";
    std::string AT = "@";
    std::string COMMA = ",";
    std::string COLON = ":";
    std::string SEMICOLON = ";";//go at the end of each line


    std::string Number = "1234567890";
    std::string letter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\\#$%^&*()_+=-\"{}[]|:;'<>,.?/~`|" + Number;
    std::string tokens;


    std::string VERSION_NUMBER = "Version >>>: 000.000.001";
    std::string NAME  = "i";




class token{
    int x;
    token(int x ,std::string  type_Token, std::string  value) : x(x){
        type_Token = type_Token;
        value = value;
    }
    
};

void ok(){
        std::cout << NAME + " >>>:" << std::ends << VERSION_NUMBER << std::endl;}