#include <iostream>
#include <list>
#include <algorithm> // for std::find

using namespace std;

int main() {
    // Create a linked list (doubly linked list)
    list<int> myList;

    // Insert elements at the end of the list
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);

    // Insert elements at the beginning of the list
    myList.push_front(5);

    // Display the elements in the list
    cout << "List elements: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Remove elements from the list
    myList.pop_back();  // Removes the last element (40)
    myList.pop_front(); // Removes the first element (5)

    // Display the elements after removal
    cout << "List after removal: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Find an element in the list
    auto it = find(myList.begin(), myList.end(), 20);
    if (it != myList.end()) {
        cout << "Element 20 found in the list." << endl;
    } else {
        cout << "Element 20 not found in the list." << endl;
    }

    // Remove a specific element
    myList.remove(30);

    // Display the list after removal
    cout << "List after removing 30: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
