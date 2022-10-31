/*
 * odds and evens sorting and additions
 */
 #include <iostream>
 using namespace std;

 int main() {
    int sumOdd = 0;     //to accumulate the odd number waterdrops
    int sumEven = 0;    //to toss the even numbers into
    int upperbound;     //to keep the computer from killing itself by doing numbers infinitely

    //encourage the user to give an upperbound numbers
    cout << "Enter the highest you want to go to find the sum of the evens and odds for: ";
    cin >> upperbound;

    //run him through the loop wringer now:
    int number = 1;
    while (number <= upperbound) {
      if (number % 2 == 0) {     //sort even numbers out, segregate them from their odd neighbors
        sumEven = sumEven + number;
      } else {                  // now to send the odd numbers to the calculator
        sumOdd = sumOdd + number;
      }
      ++number;       //Move the line along to the next number.
    }

    //Did you forget to print the results?
    cout << "The sum if the even numbers is: " << sumEven << endl;
    cout << "The sum of the odd numbers is: " << sumOdd << endl;
    cout << "The difference is " << (sumOdd - sumEven) << endl;

      return 0;
}
