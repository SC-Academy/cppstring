#include <iostream>
#include <string>

using namespace std;

int main() {
    // Creating a string
    string greeting = "Hello, world!";

    // Accessing string characters
    char firstChar = greeting[0];
    char lastChar = greeting[greeting.length() - 1];

    cout << "First character: " << firstChar << endl;
    cout << "Last character: " << lastChar << endl;

    // Modifying a string
    greeting[7] = 'W';

    cout << "Modified string: " << greeting << endl;

    // Appending strings
    string name = "Alice";
    string message = "Welcome, " + name + "!";

    cout << "Message: " << message << endl;

    // Getting the length of a string
    cout << "Length of message: " << message.length() << endl;

    // Checking if a string is empty
    string emptyString = "";
    if (emptyString.empty()) {
        cout << "The string is empty." << endl;
    } else {
        cout << "The string is not empty." << endl;
    }

    return 0;
}