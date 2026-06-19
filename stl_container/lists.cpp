#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    list is doubly link list where front operations can be very easy and cheap
    rather than vectors and arrays. In vector insert operation can take a lot of time

   Key Characteristics
   Header: To use a list, you must include the <list> header file.
   Memory: Elements are stored in non-contiguous memory locations.
   Access: Direct access to elements by index (e.g., list[0]) is not possible. Traversal must be done sequentially using iterators. The first and last elements can be accessed directly using front() and back() functions.
   Efficiency: Insertion and deletion operations anywhere in the list are highly efficient (constant time, O(1)) because only the pointers of the neighboring elements need to be updated.
   Pointers: Each element (node) contains a value, a pointer to the next element, and a pointer to the previous element, enabling bidirectional traversal.
    */
    list<int> ls = {1, 2, 3, 6, 7, 8, 8};
    int my_var = 3;
    // Source - https://stackoverflow.com/a/24139474
    // how to find an element in list in c++
    bool found = (std::find(ls.begin(), ls.end(), my_var) != ls.end());
    cout << found << endl;
    // my_var in ls; // in python occurence of an element can be found through this method

    ls.push_back(2);
    ls.emplace_back(5);
    for (auto x : ls)
    {
        cout << x << " ";
    }
    cout << endl;
    // how to insert on a specific index
    auto it = ls.begin();
    advance(it, 2);
    ls.insert(it, 4);
    cout << "Using next ==> " << *next(ls.begin(), 2) << endl; // next element after second index
    for (auto x : ls)
    {
        cout << x << " ";
    }
    cout << endl;
    // updating
    cout << "======= updating operations =========" << endl;
    ls.front() = 11;
    // iterator
    auto it2 = ls.begin();
    cout << *it2 << endl;
    advance(it2, 2);
    *it2 = 10;
    // Traversing using iterators
    for (auto it = ls.begin(); it != ls.end(); ++it)
        cout << *it << " ";

    cout << endl;
    ls.pop_front();
    ls.pop_back();
    for (auto x : ls)
    {
        cout << x << " ";
    }
    cout << endl;
    // all other operations like empty, clear,rend, rbegin, swap, insert, size can be done on list
}