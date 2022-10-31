/* program to calculate a rectangle area and perimeter
 * Seriously, keep it long form.
 * Teach yourself fool....
 */
 
#include <iostream>
 using namespace std;
 
 int main () {
    double length, width, area, perimeter;        //Declaring the variables to use, double keeps floating decimals as they are.
	
    cout << "Enter the length: ";                 //demands the length from the user
	cin >> length;                                //Assigns the user input to length
	cout << "How wide is the rectangle?";
	cin >> width;								  //Assigns input to width
	
	//Time to compute this!!!
	area = length * width;
	perimeter = length + width + length + width;
	
	//Printing time!!!!
	cout << "The area is: " << area << endl ;
	cout << "The Perimeter would be: " << perimeter << endl << "I think................" << endl ;
	cout << "That's Everything! Run me again sometime." << endl ;
	
	return 0;
}	
