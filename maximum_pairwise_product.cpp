#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Solving the Maximum Pairwise Product Programming Challenge: Improving the Naive Solution, Testing, Debugging.
    Given a sequence of  non negative integers ( 0 <= a0,......a0-1, ), we are to find the maximum pairwise product, that is max()
*/

/*
    Notes:
    Basically what they want is that, which number from the second input can we multiply by the first input which will give us,
    a value in which the first input will divide without a remainder, as well the highest one we can multiply to do so.
*/

// this parameter is passed by reference, but restricted of modifications, meaning, this function is the same as the one in main


long long naiveMaximumPairWiseProduct( const vector<int>&numbers ){
    long long result = 0;
    int n = numbers.size();

    vector<int> matched_divisibles;

    /*
        A NAIVE APPROACH::
        We can take the n and multiply it by every member of the vector
        Then we check if n divided by the result thus not have a remainder
        We then store the result in an array
        Then when done with this
        We check which member in the array is the highest and return it as the result
    */

    for(int i = 0; i < n; i++){
        int d = n  * ((long long)numbers[i]);
        if( d%n == 0 ){
            matched_divisibles.push_back(d);
        }
    }

    sort(matched_divisibles.begin(), matched_divisibles.end());

    // just for debugging and clarity purposes
    for(int i =0; i < matched_divisibles.size(); i++){
        cout<< "Sorted vector array:" << i << matched_divisibles[i]<<endl;
    }

    result = matched_divisibles.back();

    return result;
}


long long fastMaximumPairwiseProduct(const vector<int>&numbers){

    // here we use a different approach to the problem
    // we first, make it such that we find the two largest values in the array and then multiply them to get the value

    int max_index = 1;
}

int main(){

    while(true){

        // generate a input for stress testing
        int n = rand() % 10 + 2;
        cout << n <"\n";

        vector<int> numbers;

        // generate an array of inputs of n size
        for(int i = 0; i < n; i++){
            numbers.push_back(rand() % 100000);
            cout<< numbers[i] << ' ';
        }

        // now call the function that computes the maximum pairwise
        long long result = naiveMaximumPairWiseProduct(numbers);
        cout << "Maximum Pairwise is:: " << result;

    }
}
