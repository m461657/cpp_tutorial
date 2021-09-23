#include <iostream> //needed for print (cout) and input
#include <string> //needed to create strings
#include <map> //needed for map (dictionary)

using namespace std; //also needed to create a string

int main(){
    //create int, string, float, boolean, Array, and map, then print
	int numOne = 5;
	std::string myString = "Welcome to C++"; //not sure if I need std::
	float floatOne = 3.2;
	bool myBool = true;

	int intArray[3] = {1, 2, 3};

	cout << numOne << endl; 
	cout << myString << endl;
	cout << floatOne << endl;
	cout << myBool << endl;//prints out 1
	cout << intArray;//this just prints the location array is stored in

	//create a map
	map<string, int> myMap;
	myMap["key 1"] = 1;
	myMap["key 2"] = 2;
	myMap["key 3"] = 3;

}



