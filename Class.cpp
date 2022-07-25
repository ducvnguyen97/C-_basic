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
5. Access Specifiers
    In C++ there are three access specifier:
        - public: members are accessible from outside the class
        - private: mebers cannot be accessed( or viewd) from outside the class
        - protected: members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

        By default, all members of a class are private if you don't specify access specifier
6. Encapsulation
    6.1 Ecapsulation
        - Encapsulation is to make sure that sensitvie data is hidden from users.
        - To achieve this, you mist declare class variables/attribute as private.
        - If you want ohter to read or modify the value of a private member, you can provide public get and set method.
    6.2. Access provate members
        - To access a private member, use public get and set methods
        e.g
            #include <iostream>
            using namespace std;

            class employee
            {
                private:
                    int salary;
                
                public:
                 //setter:
                 void set_salary(int s)
                 {
                    salary = s;
                 }
                 //getter
                 int get_salary()
                 {
                    return salary;
                 }
            }

            int main()
            {
                employee my_ojb;
                my_obj.set_salary(5000);

                cout << my_obj.get_salary();
                return 0;
            }
    6.3 Why encapsulation
        - It is considered good practice to declare your calss attributes as private
        - Encapsulation ensures better contrl of your data, because you (or others) can change one part of the
            code without affecting other parts
        - Increased security of data.
7. Inheritance
    7.1. Inheritance
        - In C++, it is possible to inerit attributes and methods from one class to another.
        - Inheritance concept include two categories:
            - derived class (child): the class that inherits from another class
            - base class (parent): the class being inherites from
        - To inherit from a class, use the : symbol
        e.g
            // base class
            class vehicle
            {
                public:
                    string brand = "Honda";
                    void honk()
                    {
                        cout << "Tuut, tuut! \\n";
                    }
            };

            // derived class
            class car : public vehicle
            {
                public:
                    string model = "Wave RSX";
            }

            int main()
            {
                Car my_car;
                my_car.honk();
                cout << my_car.brand + " " + my_car.model;
                return 0;
            }

    --> Why and when to use Inheritance
        - It is useful for code reuseability: reuse attributes and methods of an exisiting class when you create a new class
    7.2. Mutilevel Inheritance
        - A class can also be derived from one class, which is already derived from another class
        - e.g:
            // base case
            class my_class
            {
                public: 
                    void my_function()
                    {
                        cout << "hello world";
                    }
            }

            // derived class
            class my_child: public my_class
            {
                ;
            }
            // derived class
            class my_grand_child: pubic my_child
            {
                ;
            }

            int main()
            {
                my_grand_child my_obj;
                my_ojb.my_function();
                return 0;
            }
    7.3. Mutiple Inheritance
        - A class can also be derived from more than one base class, using a comman-seprated list:
        e.g:
            //base class
            class my_class
            {
                public:
                    void my_function()
                    {
                        cout << "hello world";
                    }
            }
            // base class 1
            class my_class_1
            {
                public:
                    void my_function1()
                    {
                        cout << "hello world again";
                    }
            }

            // derived class
            class my_child: public my_class, pulic my_class_1
            {
                ;
            }

            int main()
            {
                my_child my_obj;
                my_obj.my_function();
                my_obj.my_function1();

                return 0;
            }

    7.4 Inheritance access
        - protected is similar private: members can onnly be accessed within the class.
        - But it can alss be accessed in the inherited class
        - eg:
            //base class
            class employee
            {
                protected:
                    int salary;
            }
            // derived class
            class programmer: public employee
            {
                pulic:
                    int bouns;
                    void set_salary(int s)
                    {
                        salary = s;
                    }
                    int get_salary()
                    {
                        return salary;
                    }
            }

            int main ()
            {
                programmer my_obj;
                my_obj.set_salary(5000);
                my_obj.bouns = 1500;

                cout << "salary:" << my_obj.get_salary() << "\n";
                cout << "Bouns:" << my_obj.bouns << "\n";

                return 0;
            }
8. Polymorphism
    - Polymorphism means many forms, and it occurs when we have many classes that are related to each other by inheritance.
    - Inheritance iherits attributes and methods from another class. Polymorphism uses those method to perform different tasks.
    - This allow us to perform a single action in different ways.

    -e.g:
        class animal
        {
            void animal_sound()
            {
                cout << "the animal makes a sound\n";
            }
        }
        
        class pig: pulic animal 
        {
            void animal_sound()
            {
                cout << "the pig say: wee wee \n";
            }
        }

        class dog : pulic animal
        {
            pulic: 
                void animal_sound()
                {
                    cout << "the dog say: bow bow\n";
                }
        }

        int main()
        {
            animal my_animal;
            pig my_pig;
            dog my_dog;

            my_animal.animal_sound();
            my_pig.animal_sound();
            my_dog.aniaml_sound();

            return 0;
        }
    
    - Why and when to use Inheritance and Polymorphism
         It is useful code reuseability: reuse attributes and methods of an exiting class when you create a new class.
9. Files
    9.1 Files
        The fstream library allow us to work with files
        To use fstream library, include both the standard iostrean and the fstream header file:
        - There are three class include in the fstream library:
            - ofstream : creates and writes to file
            - ifstream : reads from files
            - fstream  : combine ofstream and ifstream.
    9.2 Create and write to file
        -e.g:
            #include <iostream>
            #include <fstream>
            using namespace std;

            int main() {
              // Create and open a text file
              ofstream MyFile("filename.txt");

              // Write to the file
              MyFile << "Files can be tricky, but it is fun enough!";

              // Close the file
              MyFile.close();
            }
    9.3 Read a file
        e.g:
            #include <iostream>
            #include <fstream>
            using namespace std;     
            // Create a text string, which is used to output the text file
            string myText;

            // Read from the text file
            ifstream MyReadFile("filename.txt");

            // Use a while loop together with the getline() function to read the file line by line
            while (getline (MyReadFile, myText)) {
              // Output the text from the file
              cout << myText;
            }

            // Close the file
            MyReadFile.close();
        }
        --> Why do we close the file?
        It is considered good practice, and it can clean up unnecessary memory space.

10. Exceptions
    10.1. Exceptions
        - When executing C++ cpde. difference errors can occur: coding errors made by the programmer , errors
        due to wrong input, por ohter unforeseeable things.
    10.2. Try and catch
        - Exception handling in C++ consist of three keywords: try throw and catch
            - The try statement allows you to define a block of code to be tested for errors while it is being executed.
            - The throw keyword throws an exception when a problem is detected, which lets us create a custiom error.
            - The catch statment allows you to define a block of code to be excecuted, if an error occurs in the try block.

        - e.g:
            try
            {
                // block of code to try
                throw exception; // throw an exception when a problem arise
            }
            
            catch()
            {
                // block of code to handle errors
            }
    10.3 Handle any type of exception(...)
        - If you do not know the throw type used in the try block, you can use the "three dots" syntax(...) inside the catch block, which will handle any tye of exception.
        
*/
