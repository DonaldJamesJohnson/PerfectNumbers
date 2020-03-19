/*
  prog2.cc
  Donald Johnson
  9/14/18
  
  Implementation file for prog2
*/

#include "prog2.h"

int main(){                        // the main function iterates through integers 1-9999 and calls the isPerfect function to test whether an integer is a perfect number
    for (unsigned i=1; i<=SIZE; i++){
        isPerfect(i);
    }
    return 0;
}

bool isPerfect(unsigned n){        // the isPerfect function determines whether the unsigned integer passed to it is a perfect number and outputs the perfect numbers along with their constituents
    vector<int> v;                 // creates a vector to store the integers that divide evenly into the integer passed to the isPerfect function
    unsigned sum = 0;              // creates an unsigned integer used to store the sum of the integers stored in the previously created vector
    
    for (unsigned i=1; i<n; i++){  // iterates through integers from 1 to n-1 to see if n % i divides evenly. If so then i is added to the vector and i is added to sum
        if (n % i == 0) {
           v.push_back(i);
           sum += i;
        }
    }
     
    if (sum == n){                 // if the sum is equal to n then we know this is a perfect number and we will display n = d1 + d2 + ... + dm
        cout << n << " = ";
        for (unsigned z=0; z<v.size() - 1; z++){
            cout << v.at(z) << " + ";
        }
        cout << v.back() << endl;
        cout << endl;
        return true;
    } else return false;           // else not a perfect number and return false 
}

