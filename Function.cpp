/*
1. Functions
    A function is block of code which only runs when it is called.
    Functions are used to perform certain actions, and they are important for reusing code.
    1.1 Create a function
        void function_name(){
            // code to be executed
        }
    1.2 Call a function
        Declared function are not executed immediately. Function will be executed when they are called.
        e.g:
            void my_funciton()
            {
                cout << "hello world";
            }

            int main(){
                my_function();
                return 0;
            }
    1.3 Function declaration and definition
        Function consist of two parts:
        - Declaration: the return type, the name of function, and parameters
        - Definition: the body of the function( code to be executed)
        e.g:
            void my_function()  // decalration
            {
                //the body of the function (definition)
            }
        
        e.g:
            // function declaration
            void my_function();

            // The main method
            int main(){
                my_function();
                return 0;
            }

            // Function definition
            void my_function()
            {
                cout << "hello world";
            }
        
        --> seprate declaration and definition of the function--> for code optimization.

2. Functin parameters
    2.1. Parameters and Arguments
        - Infomation can be passed to functions as a parameter. Parameters act as variables inside the function
        e.g
            void my_function(parameter1, parameter2, parameter3)
            {
                // code to be executed
            }
        - When a parameter is passed to the function, it call an argument.
    2.2. Default parameters
        - You can also use a default parameter value, by using equals sign(=).
        - If we call the function without an argument, it uses the default value.
        e.g
            void my_function(string your_name = "Jonh")
            {
                cout << your_name;
            }
        - A parameter with a default value, is often known as an optional parameter.
    2.3. Mutiple paramters
        - Inside the function, you can add as many parameter as you want.
    2.4. The return keyword
         - Return values
         void: not return a value
         int, string: return value of data type.
    2.5. Pass by reference
        -You can pass a reference to the function. This can be useful when you need to change the value of the arguments.
        e.g 
           void swap_number(int &x, &y)
           {
            int z = x;
            x = y;
            y = z;
           }
    2.6 Pass Array as function parameter
        e.g
            void my_function(int number[5])
            {
                for (int i = 0; i < 5; i ++)
                {
                    cout <<number[i] << "\n";
                }
            }
        It is poor appoarch. May be use pointer is helpful
            e.g:
                void my_function(int *number)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        coout << number[i] << "\n";
                    }
                }
3. Function Overloading
    With function overloading, multiple functions can have the same name with different parameters.
    e.g:
        int addition(int x, int y);
        float addidion(float x, float y);
        double adddtion(double x, doble y);
    --> Instead if defining two function that should do the same thing, it is better overload one.
4. Recursion
    - Recursion is the techique of makeing a function call itself.
    - This technique provides a way to break complicated problems down into simple problems which are easier to slove.
    - There are two thing to considers:
        - inital value of recursion
        - condition to end recursion.
    e.g:
        int sum(int number)
        {
            if (number > 0)
            {
                return number + sum(number - 1);
            }
            else
            {
                return 0;
            }
        }

    -->Note: if end condition never meet, function never terminates or excess amounts of memory or processor power.

Reference: W3Schools
*/

