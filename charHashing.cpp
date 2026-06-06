#include <bits/stdc++.h>
using namespace std;
int main()
{
    /// for lower case character we have just to minus a from it to get the indexing to start from zero, this
    /// program perfoms the same for all type of character by just removing the minus part and increasing the
    ///  the hash array size to 256, which is the total characters in English language
    int x = 'a';
    cout << "ASCII of 'a' is : " << x << endl;
    string mystring;
    cout << "Enter the String to get its hash table: ";
    cin >> mystring;
    //===================
    // hashing
    int hash[26] = {0};

    for (int i{0}; i < mystring.length(); i++)
    {
        hash[mystring[i] - 'a']++; // for example ASCII of 'f' is 101 while that of a is 96 so we get 101 - 96 = 5
    }
    cout << "---------- hash table -------------\n";
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (hash[ch - 'a'] > 0)
            cout << ch << " occurs --> " << hash[ch - 'a'] << " times" << endl;
    }

    // for (int i = 0; i < mystring.length(); i++)
    // {

    //         cout << mystring[i] << " occurs --> " << hash[mystring[i] - 'a'] << " times" << endl;
    // }

    cout << "\n--------- Querry over the characters ---------\n";
    int querry;
    cout << "\n Enter querries: " << endl;
    cin >> querry;
    while (querry--)
    {
        char character;
        cout << "\nEnter character to show its frequency: ";
        cin >> character;
        cout << hash[character - 'a'];
    }
}