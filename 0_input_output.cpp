// lib for olympiad's algos
#include <bits/stdc++.h>
// dirty code feature(
using namespace std;

int main() {
    // message for user
    cout << "Input: ";
    // string input
    string what_was_printed;
    // getline(cin, what_was_printed);
    cin >> what_was_printed;
    // notice: \n works faster than endl
    cout << "Your input: " << what_was_printed << "\n";
    /*
    Example
        Input: bim-bum
        Your input: bim-bum
    */
    cout << "Input-2: ";
    getline(cin, what_was_printed);
    cout << "Your input-2: " << what_was_printed << "\n";
    /*
    Output
        Input-2: Your input-2:

    Feature in the work of the function: need cin.ignore() to fix it (after 12-line)

    In general it's a bad idea to mix cin and getline
    */
    return 0;
}