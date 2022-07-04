/*
 * odds and evens sorting and additions
 */
 #include <iostream>
 using namespace std;

 int main() {
    int sumOdd = 0;     //to accumulate the odd number waterdrops
    int sumEven = 0;    //to toss the even garbage into
    int upperbound;     //to keep the computer from killing itself by doing numbers infinitely

    //encourage the slave to give an upperbound numbers
    cout << "Enter the highest you want to go to find the sum of the evens and odds for: ";
    cin >> upperbound;

    //run him through the loop wringer now:
    int number = 1;
    while (number <= upperbound) {
      if (number % 2 == 0) {     //sort even numbers out, segregate them from their families
        sumEven = sumEven + number;
      } else {                  // now to send the odd numbers to the gas chambers
        sumOdd = sumOdd + number;
      }
      ++number;       //Move the line along to the next victim---- number..... I said number.
    }

    //Did you forget to print the results?
    cout << "The sum if the even numbers is: " << sumEven << endl;
    cout << "The sum of the odd numbers is: " << sumOdd << endl;
    cout << "the victims are--- I mean, difference is " << (sumOdd - sumEven) << endl;

      return 0;
}
