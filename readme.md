OOPS: classes and objects
C++ --> intially called --> C with classes by stroustroup
class--> extension of structures in C
structure had limmitations:
 -->members are public
 -->no methods
classes--> structures + more/classes--> can have methods and properties
classes--> can make some members private and some public
structures in c++ are typedef
you can declare object along with class declaration
     class employee {
          //data
     }chandan, shubham,ankit;
     return 0;
chandan.salary dont make sense if salary is private variable

Notes:
By default variables or functions in a class is private.
we cannot access private variables  but we can get variables by making a public functions in the class and that variable.
static variable by deffault intialize with zero value. and visibilty will be within class.
Static function will access only static members.


friend functions:
--> Not in the scope of class.
--> we can not access it through class object. EX: type classObject.friendFunction()  [invalid].
-->usually used to pass object as a argument;
--> we can call friend funtion independently. EX friendFunction();

Constructor:
-->It should be declared in the public section of the class.
-->They are automatically invoked Whenenver the object is created.
-->It is used to initialize the object of class.
-->Do can not return values and do not have return types.
-->It can have default arguments.
-->We can not refer to their address.

Inheritance:

-->Reusability(inheritance) is a important feature in C++.
-->Reusing  classes saves time and money.
-->DRY: Do not Repeat Yourself.
-->Existing  class is known as "Base" class.
-->New class is known as "Derived" class.
-->Single Inheritance: A Derived class with a Base class. 
-->Multiple Inheritance: A Derived class with more than one Base class.
-->Hierarchical Inheritance: Several  classes from a single class.
-->Multiple Level Inheritance: Deriving a class from a Derived class.
-->Hybrid Inheritance: It is a combination of  mutiple inheritance and multi level inheritance. 

Derived Class:
/*
     class {{Derived-class-name}} : {{visibility}} {{base-class-name}}{
          class member//method/etc..
     }
*/

Note:
1. Default visibility mode is private.
2. public visibility mode: Public members of a base clas becomes public in derived class.
3. Private visibility mode: Public members of a base class becomes private in derived class.
4. private members of a base class can never be inherited.

Multi Level Inheritance:
Notes:
     If we are inheriting B from A and C from B[A-->B-->C] 
     1. A is the base class of B and B is the  base class of C.
     2. A-->B-->C is called Inheritance path.

Constructor In Derived Class:

Case1: 
     class B: public A{
          //Oreder of execution of constructor: first A() then B().
     }

Case2: 
     class A: public B, public C{
          //Order of execution of constructor: first B() then C() and A().
     }

case3:
     class A: public B, virtual public C{
          //Order of execution of constructor: first C() then B() and A().
     }


Polymorphism:
--> One name multiple forms.
--> Ex: Function overloading, operator overloading
--> Ex: Virtual Functions

Polymorphism can be of two types:
1. Compile time polymorphism
     Compile time polymorphism in C++ is achieved using:
     1.1 Function overloading
     1.2 Operator Overloading
2. Run time ploymorphism
     Run time polymorphism in C++ is achieved using:
     2.1 Virtual function
     
Abstract base class:
1. It do nothing.
2. It is creates so that we can create derived classes from abstract base class
3. virtual void display()=0;//Do nothing function--> pure virtual function

The useful classes for working with file in C++:
1. fstreambase [base class]
2. ofstream --> derived from fstreambase [To read file]
3. ifstream --> derived from fstreambase [To write in file]

In order to work with files in C++ , you will have to open it. primarily, there are two ways to open a file:
1. using constructor.
2. using the member function 'open()' of the class.

STL[Standard Template Library]: is used because its not a good idea to reinvent the wheel
Components of STL
     1. Containers(vectors,stores data, uses template classes)
     2. Algorithms(sorting , searching, merging, copying, uses template functions)
     3. Iterators(It is a object points to an element in a conatainer. Handles just like pointers. connects algo with the containers.)