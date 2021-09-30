#include <iostream>

#include <string>'

using namespace std;

//function that takes in two numbers, multiplies them, returns output
int multiply(int a, int b){
    int c = 0;
    c = a*b;
    return c;
}
//recursive function to find factorial of a number (code from programiz.com)
int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}
/*writing a function that takes in a string, splits it, and returns both strings
ended up being very difficult, since there are no built-in ways to split strings.
The different options are fairly confusing, but here is a link that explains those
options: https://www.fluentcpp.com/2017/04/21/how-to-split-a-string-in-c/ */
//checking pass-by-reference vs. pass-by-value
void passByCheck(int d){
    d ++;
}
int main()
{
    //example of a while loop
    int i = 0;
    while(i<5){
        cout << i;
        i++;
    }
    //example of a do-while loop
    int j = 0;
    do{
        cout << j;
        j++;
    }
    while(j<5);
    //example of a for loop
    for (int k = 10; k>1; k--){
        cout << k;
    }
    int a = 5;
    int b = 6;
    int aTimesB = multiply(a, b);
    cout << aTimesB;
    int n = 4;
    int result = factorial(n);
    cout << result;
    int d = 10;
    passByCheck(d);
    //this prints 10, which means C++  is pass-by-value (at least for ints/functions)
    cout << d;
}

