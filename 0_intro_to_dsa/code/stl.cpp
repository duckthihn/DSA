// STL: Standard Template Library
#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>

using namespace std;

int main() {
    // Vector
    //vector<string> cars = {"Volvo", "BMW", "Ford", "Mercedes"};

    // for-each to print all elements of a vector
    // for (string car : cars) {
    //     cout << car << endl;
    // }

    // // Access a vector
    // cout << cars.front() << endl;
    // cout << cars.back() << endl;

    // // Add an element to the end of the vector
    // cars.push_back("Toyota");
    // cars.push_back("Tesla");
    // cout << cars.back() << endl;    // Tesla

    // // Remove the last element of the vector
    // cars.pop_back();
    // cout << cars.back() << endl;    // Toyota

    // // Vector size
    // cout << cars.size() << endl;    // 5

    // // Check if vector is empty
    // cout << cars.empty() << endl;   // 0

    // List
    /* A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
    However, two major differences between lists and vectors are:
    You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.
    Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers */
    // list <string> cars = {"Volvo", "BMW", "Ford", "Mercedes"};

    // // for-each to print all elements of a list
    // for (string car : cars) {
    //     cout << car << endl;
    // }

    // // Access a list
    // cout << cars.front() << endl;
    // cout << cars.back() << endl;

    // // Add an element at the beginning
    // cars.push_front("Tesla");

    // // Add an element at the end
    // cars.push_back("VW");

    // // Remove the first element
    // cars.pop_front();

    // // Remove the last element
    // cars.pop_back();

    // Stack
    // You cannot add elements to the stack at the time of declaration, like you can with vectors
    // stack <string> cars;
    // cars.push("Volvo");
    // cars.push("BMW");
    // cars.push("Ford");
    // cars.push("Mercedes");

    // // Access the top element
    // cout << cars.top() << endl;

    // // Modify the top element
    // cars.top() = "Toyota";
    // cout << cars.top() << endl;

    // // Remove the top element
    // cars.pop();
    // cout << cars.top() << endl;

    // Queue
    // queue <string> pets;

    // // Add elements to the queue
    // pets.push("Dog");
    // pets.push("Cat");
    // pets.push("Cow");
    // pets.push("Horse");

    // // Access the front element
    // cout << pets.front() << endl;
    // cout << pets.back() << endl;

    // // Remove the front element
    // pets.pop();
    // cout << pets.front() << endl;

    // Deque
    // A deque (stands for double-ended queue) however, is more flexible, 
    // as elements can be added and removed from both ends (at the front and the back). You can also access elements by index numbers. 
    // deque <string> vegetables = {"Carrot", "Potato", "Onion"};

    // // Add elements to the deque
    // vegetables.push_back("Tomato");

    // // Access the front and back elements
    // cout << vegetables.front() << endl;
    // cout << vegetables.back() << endl;
    // cout << vegetables.at(2) << endl;

    // Set
    // A set is a collection of unique elements. Sorted in ascending order by default. 
    // set <string> valorantAgents = {"Jett", "Raze", "Sova", "Breach"};

    // for (string agent : valorantAgents) {
    //     cout << agent << endl;
    // }

    // // Descending order
    // set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    // // Print the elements
    // for (int num : numbers) {
    // cout << num << "\n";
    // }

    // // Add an element to the set
    // valorantAgents.insert("Phoenix");
    // cout << valorantAgents.size() << endl;

    // // Remove an element from the set
    // valorantAgents.erase("Sova");
    // valorantAgents.erase("Breach");
    // cout << valorantAgents.size() << endl;

    // Map
    map <string, int> people = {
        {"John", 25},
        {"Doe", 30},
        {"Jane", 22}
    };

    // Access the value of a key
    cout << "John is " << people["John"] << + " years old" << endl;
    cout << "Adele is " << people.at("Jane") << " years old\n";

    // Add new key-value pairs
    people["Liam"] = 24;
    people.insert({"Emma", 26});

    // Remove a key-value pair
    people.erase("John");

    // Remove all elements
    people.clear();
}