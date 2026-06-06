#include <bits/stdc++.h>
using namespace std;

/*
 Vector:
 - Dynamic array (resizable)
 - Stored in contiguous memory
 - Faster random access than list
*/

int main()
{
    // ---------------- BASIC VECTOR ----------------
    vector<int> v;

    v.push_back(1);    // Adds element at the end
    v.emplace_back(2); // Faster than push_back (constructs in-place)

    cout << "Vector v elements: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // ---------------- VECTOR OF PAIRS ----------------
    vector<pair<int, int>> pairVector;

    pairVector.push_back({1, 2});
    pairVector.emplace_back(3, 5); // No need for {}

    cout << "Pair Vector elements:\n";
    for (auto p : pairVector)
        cout << p.first << ", " << p.second << endl;

    // ---------------- INITIALIZATION ----------------
    vector<int> vec(5, 100); // Size = 5, all values = 100
    vector<int> vec1(5);     // Size = 5, default initialized to 0
    vector<int> vec2(vec1);  // Copy constructor

    // ---------------- ITERATORS ----------------
    vector<int>::iterator it = v.begin(); // Points to first element
    cout << "First element using iterator: " << *it << endl;

    it++;
    cout << "Second element using iterator: " << *it << endl;

    // End iterator (points AFTER last element)
    vector<int>::iterator itEnd = v.end();

    // Reverse iterators
    vector<int>::reverse_iterator rit = v.rbegin();
    cout << "Last element using reverse iterator: " << *rit << endl;

    // ---------------- ACCESS METHODS ----------------
    cout << "v[0] = " << v[0] << endl;       // No bounds checking
    cout << "v.at(1) = " << v.at(1) << endl; // Bounds-checked

    cout << "Front element: " << v.front() << endl;
    cout << "Back element: " << v.back() << endl;

    // ---------------- SIZE & CAPACITY ----------------
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // ---------------- MODIFY VECTOR ----------------
    v.pop_back(); // Removes last element

    cout << "After pop_back(): ";
    for (int x : v)
        cout << x << " ";
    cout << endl;



    // ---------------- CLEAR VECTOR ----------------
    v.clear();
    cout << "Vector empty? " << v.empty() << endl; // bool, true is empty else false

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// // vector stores data in similar fashion as array but vector is dynamic in nature
// // where array is of constant size ones allocated
// int main()
// {
//     vector<int> v;
//     v.push_back(1); // this adds the element to the vector
//     cout << v[0];
//     v.emplace_back(2); // push_back and emplace_back both adds element to array end but emplace_back is faster than push_back
//     // we can also define a vector of pair
//     vector<pair<int, int>> pairVector;
//     pairVector.push_back({1, 2});
//     pairVector.emplace_back(3, 5); // emplace_back can automatically assume that this is a pair

//     // we can also define a vector of an initial size and can also initialize values to them
//     vector<int> vec(5, 100); // this makes a vector of 5 indeces and stores 100 on each index
//     vector<int> vec1(5);     //{0,0,0,0,0}
//     vector<int> vec2(vec1);  // copy of vec1
//     // iterator vector
//     vector<int>::iterator it = v.begin(); // it points to the memory address of the first element, not the value itself
//     cout << *it << endl;                  // this will now print the element because of the reference operator used
//     it++;                                 // shift to the next element, because we have incremented the address

//     vector<int>::iterator it1 = v.end();    // points to the next location after the end of the vector, it-- will give the last location
//     vector<int>::iterator it2 = v.rend();   // reverse end
//     vector<int>::iterator it3 = v.rbegin(); // reverse begin

//     //---------
//     cout << v[0] << " " << v.at(1);
//     v.back(); // last element
// }