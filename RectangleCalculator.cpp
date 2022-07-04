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
	cout << "How wide are you-- I mean how wide is the rectangle?";
	cin >> width;								  //Assigns input to width
	
	//Time to compute this shit!!!
	area = length * width;
	perimeter = length + width + length + width;
	
	//Printing time!!!!
	cout << "Took you long enough to type that. Did you need a ruler to measure your ruler?" << endl ;
	cout << "The area is: " << area << endl ;
	cout << "No, I didn't need to make fun of you to buy myself time to compute! Humans..... sheesh" << endl ;
	cout << "The Perimeter would be: " << perimeter << endl << "I think................" << endl ;
	cout << "Whatever, I'm done with this peeper show. Creep you later!" << endl ;
	
	return 0;
}	
