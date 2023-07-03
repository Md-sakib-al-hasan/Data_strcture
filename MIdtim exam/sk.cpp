#include <iostream>
#include <list>
using namespace std;

void visit(list<string>& addresses, const string& address) {
    auto it = find(addresses.begin(), addresses.end(), address);
    if (it != addresses.end()) {
        cout << *it << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

void next(list<string>& addresses, list<string>::iterator& current) {
    if (current != addresses.end()) {
        ++current;
        if (current != addresses.end()) {
            cout << *current << endl;
        } else {
            cout << "Not Available" << endl;
        }
    } else {
        cout << "Not Available" << endl;
    }
}

void prev(list<string>& addresses, list<string>::iterator& current) {
    if (current != addresses.begin()) {
        --current;
        cout << *current << endl;
    } else {
        cout << "Not Available" << endl;
    }
}

int main() {
    list<string> addresses = {"www.google.com", "www.facebook.com", "www.twitter.com"};

    list<string>::iterator current = addresses.begin();

    // Handling queries
    visit(addresses, "www.google.com"); // Output: www.google.com
    next(addresses, current); // Output: www.facebook.com
    prev(addresses, current); // Output: www.google.com
    visit(addresses, "www.twitter.com"); // Output: www.twitter.com
    next(addresses, current); // Output: Not Available

    return 0;
}