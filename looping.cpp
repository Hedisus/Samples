/*
 * Curious to learn about that loop function? See here now youngin'!
 */
 #include <iostream>
 using namespace std;

 int main() {
    int product = 1;      //makes the sum integer and dubs it 1 to start
    int upperbound, start;   //makes a variable that sets the ceiling to avoid infinity

    //demand upperbound from the user at the keys
    cout << "What would you like the highest number to be?" << endl;
    cin >> upperbound;
    cout << "Fine, where should I start? ";
    cin >> start;
    //here's the loopy bit....
/*    int number = 1;
  *  while (number <= upperbound) {
  *    sum = sum + number;
  *    ++number;
  *  }
*/
    int number = start;
        //while (number <= upperbound) {
      while (number <= upperbound) {
        product = product * number;


      //sum = sum + number;            //adds number to sum.
      //sum = sum + (number * number);  //finds the sum of the squares of the numbers.
      ++number;                     // increments by 1
      //number = number + 2;          //increments by 2
      //number = number + 7;            //increments by 7
    }

    // Printing time, lets clog that screen with results!!
    cout << "The product from " << start << " to " << upperbound << " is " << product << endl;


      return 0;
}
