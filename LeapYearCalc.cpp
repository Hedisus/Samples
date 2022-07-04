/*
 * Now we get difficult, adding arguments for finding a specific subset of numbers
 */
 #include <iostream>
 using namespace std;

 int main() {                  //sets names and types
  int count = 0;
  int upperbound = 2020;
  int number = 1;

  cout << "Let's figure out how many leap years there are. " << endl;

  while (number <= upperbound) {
    if (((number % 4 == 0) && (number % 100 != 0)) || (number % 400 == 0)) {
    // you need to increment count, and save the number as a seperate variable

    ++count;

    cout << "There's a leap year in " << number << ", you assjaq" << endl;

  }

    ++number;

        }

  cout << "Wow my brain hurts, lets see if that worked: " << endl;
  cout << "Here's how many years there were: " << count << endl;
  cout << "|a73r n00b" << endl;

      return 0;
}
