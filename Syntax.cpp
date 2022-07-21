// example
#include <iostream>
using namespace std;

int main ()
{
    cout << "hello world";
    return 0;
}
/*
1. Omitting Namespace
the using namespace std line can be ommitted and replaced with the std keyword, follow by the :: operateor for some object

#include <iostream>

int main() 
{
    std::cout << "hello world";
    return 0;
}

2. User Output
    The cout object together with the << operator is use to output values/print text
    New line: you can use \n character
    Signle line comment can use with slashes //
    Mult-line comments can use with 
3. Variable
    There are different type of variables in C++
    - int: interger number such as 1 2 3 
    - doubke: float number such as 1.1 2.3 4.1
    - char: character such as 'A', 'B'
    - string: text susch as " hello world"
    - bool: boolean such as true or false
4. Identifiers
    Variable must be identified with unique names and name shall be easy to understandable and maintainable.
    Some genral rules for naming variable:
    - Name contain letters, digits and underscores
    - Name must begin with a letter or an underscore(_).
    - Names are case sensitive (myVar and myvar are different varaiable)
    - Name cannot contain whitespace or special charcaters like !, # %..
    - Reserved words (like keyword: eg int) cannot be used as names.
5. Constants
    Variable with keyword const: is constants variable which means unchangable and read-only
    e.g: const int num = 15;
6. User Input
    The cin will use to get user input
    cin is a predefined variable that reads data from keyboard with the extraction operator >>
    e.g : cin >> "type a number"
7. Data types
    Basic data type
    Data type        Size                 Descriptions
    boolean          1 byte               Store value is true or false
    char             1 byte               Store single character
    int              2 or 4 bytes         Store value without decimal, like 35, 1000
    float            4 bytes              Store value in floating point type with signle precision 
    double           8 bytes              Store value in floating point type with double precision
    
    Other type:
    string           n byte               Sotre a sequence of characters (text). String values must be surrounded by doble quotes
8. Operator
    Operators are used to perform operations on variables and values
    8.1 Arithmetic operations
    Operator         Name                 Descriptions
    +                Addition
    -                Subtraction
    *                Multiplication
    /                Division
    %                Modulus
    ++               Increment
    --               Decrement

    8.2 Assignment operators
        Assignment operator (=)

    8.3 Comparision Operatiors
        A list of all comparision operators
    Operator        name
    ==              Equal to
    !=              Not equal
    >               Greater than
    <               Less than
    >=              Greater than or equal to
    =<              Less than or equal to
    8.4 Logical Operators

    Operators       Name                Description
    &&              Logical and         return true if both statement are true
    ||              Logical or          return true if one of the statments is true
    !               Logical Not         Reverse the result. return false if the result is true              Store value in floating point type with signle precision 
9. Strings
    String are used for storing text
    9.1. String conatenation : + operator can use between two string to add them together to make a new string
    e.g: 
    string first_name;
    string last_name;
    string full_name = first_name + last name;
    cout << full_name;

    9.2 Append  
        is an object, which contain functons that can perform certain operations on string
        e.g: concatenate
        string first_name;
        string last_name;
        string full_name = first_name.append(last_name);
        cout << full_name;
   
    9.3 String length
        To get the length of a string, use the length() funciton
  
    9.4 Access strings
    You can access the characters in a string by referring to its index number inside square brackets []
    eg: string my_string = "hello"
        cout << my_string[0];

    9.5 User input strings

    string full_name;
    cin >> full_name;
    cout << "Your name is:" << full_namel
10. String Namespace
    the using namespace std can be ommited and replaced with std keyword
    e.g: 
        std:: string full_name = "A";
        cout <<full_name;
11. Math
    functions that allow perform mathematical task on numbers.
    Library #include <cmath>
    Some function in cmath library:
        abs(x)
        acos(x)
        asin(x)
        atan(x)
        cbrt(x)
        pow(x)
        fdim(x)
        ...
12. Booleans
    True /False Yes/No ON/OFF ... 
    bool type : can take value True(1) or False(0)
    boolean expression: return value true or false ( comperasion opearator such as greater than, equal ..)
13. Condition 
    13.1 If
        if (condition) 
        {
            // block of code to be executed if the condition is true
        }
    13.2 If else
        if (condition) 
        {
              // block of code to be executed if the condition is true
        } else 
        {
              // block of code to be executed if the condition is false
        }
    13.3 Else if
        if (condition1) 
        {
          // block of code to be executed if condition1 is true
         }
        else if (condition2)
        {
          // block of code to be executed if the condition1 is false and condition2 is true
        } 
        else
        {
          // block of code to be executed if the condition1 is false and condition2 is false
        }
    13.4 Short hand If else (Tenary Operator)
        Syntax: 
        variable = (condition) ? expressionTrue : expressionFalse;
        --> It can be use to replace multiples line of code with a signle line.
    13.4 Switch case
        Syntax:
            switch(expression) 
            {
                case x:
                // code block
                 break;
                case y:
                  // code block
                  break;
               default:
                  // code block
            }
        The switch expression is evaluate one
        The value of expression is compare with the value of each case
        --> if there is match, the associate block of code is excuted
        Key word: break: it break out of the switch block. Ignores the excution of all the rest of the code in the switch block.
                  default: specifices some code to run if there is no case match
14. While Loop
    Loop can execute a block of code as long as a specificed condition is reached
    Loop are handy because they save time, reduce error, and they make code more reable
    
    14.1 While loop
        Syntax:
            while(condition)
            {
                // code block to be executed
            }
     14.2 Do/While loop
        The loop wil be excute the code block once, before checking condition. 
        If condition is true, then it will repeate the loops.

        Syntax:
            do
            {
                //code block to be executed
            }   
            while(condition);
15. For loop
    For loop use when knoew exactly how many time you want to loop through a block of code.
    Syntax:
        for (statement 1; statement 2; statement 3)
        {
            // code blcok to be executed
        }
    
    with statement 1: execute one time before the executeion of the blcok code
         statement 2: condition for executing
         statement 3: execute very time after the block code has been executed
16. Break and Continue
    The break statement can be used to jump out of a loop, switch
    The continue statement breaks one iteration (in the loop), if a specified condition occurs, and continues with the next iteration in the loop
17. Array
    17.1 Array
        Array are used to store multiples values in a single variable, instead of declaring seperate variables for each value.

         e.g:
        string car[5];
        int number[3] ={1, 2, 3};
    17.2 Loop through an Array
        You can loop through the array elements with the for loop:
        e.g
            int num[3] = {1, 2, 3};
            for (int i = 0; i < 4 ; i++)
            {
                cout << num[i] << "\n";
            }
    17.3 Omit Array size
        You don't have to specify the size of the array.
        But if you don't, it will only be as big as the elements that are inserted into it.
        --> If you want extra space for futher elements. You must specify the size.
    17.4 Array size
        To get array size, use sizeof() operator.
    17.5 Mutil-demensional arrays
        -Is an array of arrays
        e.g
         string letter[2][2];
         int number[2][2][4];
         --> the more dimension an array has, the more complex the code becomes
18. Structures
    Structures are a way to group several related variables into one place.
    Each variable in struct is a member of the structure.
    --> struct can contain many different data types

    18.1 Create struct
    e.g:
        struct {
            int number;
            string name;
        } my_struct;
    18.2 Access struture members
        use the dot syntax(.)
        e.g
        my_struct.number;
        my_struct.name;
    18.3 One structure in multiple variables
        you can use a comma to use one structure in many variables;
        e.g:
            struct{
                int number;
                string name;
            } my_struct1, my_struct2, my_struct3;
19. References
    -it is created with the & operator
    e.g:
      string food = "meat";
     string &meal = food;
     cout << food << "\n"; // output meat
     xour << meal; << "\n"; // output meat
    - Operater & can also be used to get the memory address of a variable, which is the location of where
    the variable is stored on the computer.
20. Pointers
    20.1. Pointers
        Pointer is a variable that store the memory address as its value.
        It is created with the * operator. The address of the variable you 're working with
        is assigned to the pointer.

        e.g:
            string food = "meat";
            string* ptr = &food;

            cout << &food << "\n";
            cout << ptr   << "\n";

            cout << food << "\n";
            cout << *ptr << "\n";
    20.2 Dereference
        operate & can get address of memory
        operate * can get the value of variable is located at address of memory.
        --> * operator can be confusing
            --> when used in declaration. it creates a pointer variable
            --> when not used in declaration, it act as a dereference operator.
    20.3 Modify the pointer value
        You can change the pointer's value, but it will also change the value of the original variable.
*/  