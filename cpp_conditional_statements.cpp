#include <iostream>;

using namespace std;

int main(){
	int x = 6;
	//one condition if/else
	if (x < 10){
		cout << "x is less than 10";
	}
	else{
		cout << "x is greater than 10";
	}
	//multi condition if/else
	int y = 11;
	if (x < 10 && y < 10){
		cout << "both x and y are less than 10";
	}
	else{
		cout << "either x or y (or both) aren't less than 10";
	}
	//if/else/else if
	int z = 2;
	if(x < 10){
		cout << "x is less than 10";
	}
	else if(x > 10){
		cout << "x is greater than 10";
	}
	else{
		cout << "x equals 10";
	}
	//short-circuit evaluation
	bool a = false;
	bool b = true;
	//this statement will only check the first condition (a) because it is false
	//it won't bother checking the second condition at all, enters "else"
	if(a && b){
		cout << "true";
	}
	else{
		cout << "false";
	}
	//switch statements
	int day = 3;
	switch(day){
    	case 1:
    	    cout << "Sunday";
    	    break;
    	case 7:
    	    cout << "Saturday";
    	    break;
    	default:
    	    cout << "Almost the weekend!";
    	    break;
	}
	//in the above switch statement, as you can see, there is not a case for 3, so the default 
	//statement is used. We use break to end checking cases once a match (or default) is found
}

