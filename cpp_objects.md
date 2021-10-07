• Create an object that inherits from the first object (e.g., Student) with some attributes and
functions of its own
• Test how to instantiate both types of objects, call their functions, and modify their variables.
For your write-up, address the following items:

# Classes, Objects and Inheritance

## Classes/Objects

C++ supports objects/classes, because C++ is an object-oriented programming language. Classes
are user defined data type, that act as a "blueprint" to create an object of that class.

Classes have attributes and methods.

A very simple [explanation on w3schools](https://www.w3schools.com/cpp/cpp_oop.asp) is that classes are
templates for objects, and objects are instances of classes. For example, if you had a class Car,
some Car objects would include Toyota, Honda, and Volvo. These are all **types** of Cars.

Classes also can have methods that go along with them. These methods can be called for an object if you want
to, or can be made as a constructor method, which is automatically called when an object is created.

To build on the Car class example, Cars may have methods to `accelerate`, `break` etc. These are things
that Car objects can do. 

### Creating a Class in C++

Classes are created using the keyword **class**. The following template can be used to create a class:
<pre><code>class ClassName{
	accessSpecifier:
		type attributeName;
		. . .
} ;
</code></pre>

It is important to note that after the closing curly bracket for defining a class, it must be followed
by a ";". This is different from defining functions in C++, and is necessary for compiling the program.

### Naming Conventions

C++ does have recommended (and some enforced) naming conventions for classes and objects.

- Class names: Always start with a capital letter, use CamelCase.
- Class attribute names: Always start with a lower case letter, use camelCase.
- Objects: follow the same naming conventions as class attributes.
- Constructor method: Same name (and case) as the class name (THIS IS ENFORCED)

### Standard Methods

C++ doesn't have any standard methods (such as toString() in java, for example). There are constructors,
which as mentioned above, are automatically called when a class object is created. This can be used
to set attribute values, for example.

## Inheritance

C++ does have inheritance. The child and parent classes are referred to as the derived class and base class,
respectively. The ":" is used to reference the parent class. This is what the syntax would look like:
<pre><code>Class ChildClass: public/private... ParentClass{
	. . .
} 
</code></pre>

C++ also supports multiple inheritance. This is when a derived class inherits attributes and methods
of more than one base class. The syntax for multiple inheritance is as follows:
<pre><code>Class ChildClass: public ParentClass1, public ParentClass2...{
	. . .
} 
</code></pre>

C++ has variables called pointers. This is just a very brief introduction to pointers so that you
can se how inheritance works in C++ (pointers are needed for inheritance). Pointers store the memory
location of a value in the variable, as opposed to the value itself.

To inherit class attributes from the base class, the `this->` pointer can be used. This points to the 
location in memory where the class attributes are stored, as a way to essentially access the attributes
of the base class and it's constructor (which is typically not inherited otherwise). [Here](https://www.w3schools.com/cpp/cpp_pointers.asp)
is a bit more information on pointers. 

In the **cpp_objects.cpp** file in this repository, there is code creating a Person class, a
Student class that inherits Person, as well as methods and attributes for each class.

### Overloading

If a method name is overloaded, that means that it has been given the same name (in, say, the child class)
as the method in the parent class, but takes in different parameters (types) and has a different return type.

In C++, overloading is allowed as long as the compiler can determine what "version" of the method to
use based on the input parameters (not the return type). 

# Sources
- [Cplusplus: inheritance](https://www.cplusplus.com/doc/tutorial/inheritance/)
- [W3 Schools: inheritance](https://www.w3schools.com/cpp/cpp_pointers.asp)
