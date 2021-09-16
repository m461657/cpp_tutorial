# C++: Data Types and Naming Conventions

## Data Types

### Primitive Data Types

Primitive data types are built-in to a programming language. This means they are pre-defined, and can be used to 
to directly declare variables.

**The primitive data types in C++ are:**
- Integer (int)
- Character (char)
- Boolean (bool)
- Floating point (float)
- Double floating point (double)
- Valueless or void (void)
- Wide character (wchar_t)

### Derived Data Types

C++ also has derived data types, which aren't technically built-in types, but are derived from built-in primitive types.

**The derived types in C++ are:**
- Functions
- Arrays
- Pointers
- Reference

### Declaring and Initializing Primitive Types

In C++, the type of a variable has to be specified before the variable can be initialized. This is very similar to Java.
For example, to initialize an **integer**, you would do the following:

`int myInt = 5;`

### Strings in C++

In C++, strings are actually objects. In order to use strings in any form, the `#include <string>` package
needs to be loaded at the beginning of the file. Strings operate in terms of bytes (a string of chars encoded as bytes).
Once the **string library** is loaded, to create a string, do as follows:

`string myStr = "Hello C++";`

### Arrays

In C++, there are Arrays (as opposed to, for example, Python Lists). In order to create an Array, the data type
has to be specified beforehand. This is similar to the methods of Java. The size of the Array also has to be determined
in order to use it. To create an Array in C++, follow this example code. This will create an Array of type integer (int).

`int intArray [3] = {1, 2, 3};`

This will create an Array named intArray of size 3, with the integers 1, 2 and 3.

### Maps

C++ has maps, which are equivalent to Python Dictionaries. Maps are made up of key-value pairs. To create a
map, the type of the keys and values has to be specified when creating the map. Here is an example map:

`map<string, int> myMap;  //this creates an empty map myMap`
`myMap["key 1"] = 1; //this adds a key named "key 1", and it's value, 1`
`myMap["key 2"] = 2;`
`myMap["key 3"] = 3;`

## Naming Conventions

Because C++ doesn't have an official documentation, the following naming conventions were pulled from multiple
different sources. 

To start off, it is important to note that the naming conventions in C++ are not formally enforced by the language.
They are mostly just recommendations. An interesting thing to note is that a variable can be named just an
underscore. 

### Naming Convention "Rules"

1. CamelCase should be used for all names across the board, if multiple words are used in the name.
2. Types like Classes should start with a capital letter
3. Classes should be names purposefully, and not include "_"
3. Class attribute names should start with "a"
3. Function/variable and other names should start with a lowercase letter
4. Function names should be verbs (because they perform and **action**)
4. Global variables should start with "g" (ex: global variable name would be gName)
5. Static Class variables should start with "s"
6. Global constants start with "c"
7. All file names should be lowercase
8. For naming files, if a file's main purpose is the implement a Class, the file should share a name with
the class
9. If a variable represents a unit of measure (ex: weight, time, etc.) that should be included in the name

## C++ Language Characteristics

C++ is a statically typed language. Because data types must be declared, C++ is a statically typed language. 
C++ is technically considered strongly typed, but has some weak components. Although the creator of C++ considered it
strongly typed, there are ways to subvert the type system, so it isn't technically fully strongly typed. Although
this argument popped up in multiple places, I found a thread on stack overflow (add link) discussing it. 

## Sources
[Source 1 on naming conventions](https://manual.gromacs.org/documentation/5.1-current/dev-manual/naming.html) 
[Source 2 on naming conventions](https://users.ece.cmu.edu/~eno/coding/CppCodingStandard.html#names) 
[Source on variables in C++](https://www.cplusplus.com/doc/tutorial/variables/)
[C++ strings](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
[C++ arrays](https://www.tutorialspoint.com/cplusplus/cpp_arrays.htm)
[C++ maps](https://en.cppreference.com/w/cpp/container/map)
[Stackoverflow discussing strongly/weakly typed](https://stackoverflow.com/questions/26753483/is-c-considered-weakly-typed-why#:~:text=C%20and%20C%2B%2B%20are%20considered,an%20integer%20as%20a%20pointer.)
