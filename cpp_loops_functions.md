# Loops and Functions

## Types of Loops

C++ has 3 different types of loops.
- **while**
- **do-while**
- **for**

While loops continue while a certain condition holds. Do-while loops continue while a condition holds, but the condition
is checked after the loop is run. For loops run for some specified condition. 

## Functions

### Function Declaration

In C++, to declare a function, the return type has to be specified when the function is declared. 
The general syntax for a function is this:
<pre><code>functionType functionName(parameter...){
	function body;
}
</code></pre>
Functions in C++ have to be declared before the main() function. However,
they can be defined after main once they are declared. The function declaration
is just specifying the return type, function name, and if it takes in any parameters.
The body of the function would be considered the function definition.

### Recursive Functions

C++ also supports recursive functions (functions that call themselves). There is an example of
a recursive function in the **.cpp** file on loops and functions.

### Parameters

Functions in C++ can accept multiple parameters, as well as parameters
of different types. However, they can only return 1 value at a time. There are
some ways to get around this (using **pointers** seems to be the most common way) 
You can read more about these methods for returning multiple values from a function [here](https://www.delftstack.com/howto/cpp/return-multiple-values-in-cpp/).

### Pass-by-reference vs. Pass-by-value

I had a lot of trouble determining whether C++ is pass-by-reference or value, and when it is either or
(since it seems to change based on the scenario).There was a lot of conflicting 
information on this issue, and it seems that it is pass-by-value for everything
**except** pointers. However, many sources mentioned that there are ways around this,
so it wasn't totally clear on how C++ is implemented.

However, in the **.cpp** file, I wrote a function that takes in an integer,
adds one to it, but doesn't return the value, and then has the value printed in main().
This results in no change to the value, which indicates pass-by-value. This is consistent with what I 
stated above, that C++ is pass-by-value for everything **but** pointers. 

# Sources
- [Recursive functions](https://www.programiz.com/cpp-programming/recursion)
- [W3 Schools:functions](https://www.w3schools.com/cpp/cpp_functions.asp) 
- [W3 Schools: while loops](https://www.w3schools.com/cpp/cpp_while_loop.asp)
- [W3 Schools: for loops](https://www.w3schools.com/cpp/cpp_for_loop.asp)
- [Splitting strings](https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/)
