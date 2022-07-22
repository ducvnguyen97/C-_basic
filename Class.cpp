/*
1. OOP
    1.1 What is OOP?
        - OOP stands for Object-Oriented Programming
        - Procedural programing is about writing procedures or functions that perform operations on the data,
        - Object-Oriented Programing is about creating objects that contain both data and functions.

         Object-Oriented Programing has several advantages over procedural programming:
         - OOP is faster and easier to execute
         - OOP provides a clear struture for the programs.
         - OOP help to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modifty and debug.
    1.2 What are classes and objects
        - OOP has 2 main aspects: class and object.
        - Class is template for objects, and object is an instance of a class.
        - When the individual objects are created, they inherit all the variables and functions from the class.
2. Classes and Objects
    2.1 Classes and objects
        - Everything in C++ is associate with classes and objects, along with its atributes and methods.
        - Attrubutes and methods are basically variable and functions that belong to the class.
        - A class is a user-define data type that we can use in our program, and it works as an object constructor, or blueprint for creating objects.
        e.g:
            class my_class         //The class
            {
                public:           // Access specifier
                    int my_num;       // Attrubute
                   string my_string; // Attribute
            }
    2.2 Create an Object
        - An object is created from a class
        - To creat an object from class, specify the class name, followed by the object name.
        - To access the class attributes, use the dot syntx (.) on the object.
        e.g:
            class my_class{
                pubic:
                    int my_num;
                    string my_stringl
            };

            int main()
            {
                my_class my_object;  // create an object of my_class
                // Access attributes and set value

                my_object.my_num = 1;
                my_object.my_string = "hello world";

                cout << my_object.my_num << "\n";
                cout << my_object.my_string << "\n";

                return 0;
            }   
    2.3 Multiples Objects
        -You can create multiple object of one class.

3. Class methods
    3.1 Class methods
        - Methods are functions that belongs to the class
        - There are two way to define functions that belongs to a class:
            - inside class definition
            = outside class definiton
        e.g : inside expamle
            class my_class
            {
                public:
                     void my_method()
                     {
                        cout << "hello world";
                     }
            }

            int main ()
            {
                 my_class my_obj;
                 my_obj.my_method();
                 return 0;
            }
        
        e.g: outside example
            class my_class
            {
                public:
                    void my_method();
            };

            // methid/ function definition outside the class
            void my_class::,y_method()
            {
                cout << "hello world";
            }

            int main()
            {
                my_class my_obj;
                my_obj.my_method();
                return 0;
            }
        
        --> To define a functon outside the class definition. you have to declare it inside the class
            and then define it outside of the class. This is done by specifiying the name of the class, 
            followed the scope resolotion :: operator, followed by the name of the function.
    3.2 Parameters
        - You can also add parameters in method.
4. Constructors
    4.1. Constructors
        - A construtors in C++ is a special method that is automatically called when an object of a class is created.
        - To create a constructor, use the same name as the class, followed by parenthese ()
        e.g :
            class my_class               //The class
            {
               public:                  // Access specifier
                    my_class()          // Construtor
                    {
                        cout << "hello world";
                    }
            }

            int main()
            {
                 my_class my_obj; // create an object ( this will call the constructor)
                 return 0;
            }
    4.2 Constructor Parameters
        -Constructors can also take parameters (just like regular functions), 
        which can be useful for setting initial values for attributes.
        - Just like functions, constructors can also be defined outside the class.
*/
