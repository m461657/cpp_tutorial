# C++: Conditional Statements and More!

## Boolean Values

In C++, the two boolean values are `true` and `false`. 

## Conditional Statements

C++ supports:
- `if`
- `else if`
- `else`
- `switch`

To write an if/else statement, the syntax is the same as Java (if you're familiar with Java)

Here is an example:

<pre><code>boolean x = true;
if(x == true){
	System.out.println("true");
}
else{
	System.out.println("not true");
}
</code></pre>

### "The dangling else problem"

In C++, the "dangling else" problem isn't an issue. The language has a way of handling it to avoid any
ambiguity. To recap, the dangling else problem is this:

<pre><code>boolean x = true;
if(x == true){
	System.out.println("true");
}
if(x == false){
	System.out.println("false");
}
else{
	System.out.println("not true");
}
</code></pre>

It is difficult to tell which "if" the else belongs to. In C++, the else is always associated with the
nearest if. So, in the above example, the else would follow the "if(x == false)".

To have the else be associated with the first if statement, enclose the second if in a set of curly 
brackets ('{}').

## Switch Statements

C++ does support switch statements (`switch(...)`).

Switch statements can be used to compare the switch value to the different cases. 

To define a switch statement:

<pre><code>int x = 3;
switch(x){
	case 1:
		cout << "It is Sunday";
		break;
	case 7:
		cout << "It is Saturday";
		break;
	default:
		cout << "It's not the weekend yet...";
		break;
}
</code></pre>

The `break` and `default` statements are both optional, but still very important and helpful. Break is used
to ensure that once a case is satisfied, the other cases aren't tested. However, because it isn't required,
if break is not used, each case will be checked. There is no `continue` option in switch statements.

Using break decreases execution time, which is always something to take into consideration.

`Default` is used as the default case. This is used when there is no case match found. In the above example,
if `x` was any integer other than 1 or 7, the default case will be checked. However, if `x=1`, case 1 would be checked.

## Short-Circuit Evaluation

Short-circuit evaluation is a concept in programming languages regarding whether or not the language/compiler
will execute or evaluate a sub-part of a logical expression. An example would be, if you had an expression
checking `if x AND y`, if the compiler checks x, and x is false, it won't even bother checking y. This
is an example of short circuit evaluation. The attached C++ file (**name of file**) gives and example of
short-circuit evaluation. 

**note:** the above example is not syntactically correct


## Sources

[Short-circuit evaluation](https://www.geeksforgeeks.org/short-circuiting-in-c-and-linux/) 
["Dangling else" in C++](http://www.mathcs.emory.edu/~cheung/Courses/561/Syllabus/2-C/dangling-else.html)
[C++ switch statements](https://www.w3schools.com/cpp/cpp_switch.asp)
