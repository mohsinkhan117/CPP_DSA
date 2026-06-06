#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, string>> triplerPair = {1, {2, "khan"}};
    cout << triplerPair.first << " " << triplerPair.second.first << " " << triplerPair.second.second << endl;
}

/*
std::pair in C++ is a versatile STL container used to bundle two related, potentially heterogeneous values into a single unit, enhancing code readability and efficiency. Common practical applications include returning multiple values from functions, storing key-value pairs (like in std::map), implementing graph algorithms, and managing coordinate data (e.g., \(x,y\)). Here are the key practical applications of std::pair in C++: Returning Multiple Values: Functions can return two related values (e.g., a success boolean and a result value) using std::pair<T1, T2> without creating a specific struct.Graph Representations: In competitive programming and graph algorithms (like Dijkstra's), pairs are used to store edge information, such as {weight, destination_node}.Ordered Maps and Sets: std::map and std::multimap internally use std::pair<const Key, Value> to store key-value pairs, allowing efficient lookups and ordered traversal.Coordinate Systems: Representing 2D points or vectors (\(x,y\) or \(r,\theta \)) in graphics, physics engines, or game development.Sorting and Organizing Data: Pairs are used to associate a value with a sort key, allowing std::sort to organize data based on the first element while keeping the second element paired with it.Pairing Data in Containers: Storing related pairs within std::vector or std::list (e.g., vector<pair<int, string>> for ID-name pairs
*/