#include <iostream>
using namespace std;

class List
{
private:
    int *arr;
    int capacity;
    int size;

public:
    // Create (Constructor)
    List(int cap)
    {
        capacity = cap;
        size = 0;
        arr = new int[capacity];
    }

    // Add item at given index
    void Add(int index, int value)
    {
        if (size == capacity)
        {
            cout << "List is full!\n";
            return;
        }

        if (index < 0 || index > size)
        {
            cout << "Invalid index!\n";
            return;
        }

        for (int i = size; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        size++;
    }

    // Remove item from given index
    void Remove(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!\n";
            return;
        }

        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    // waSize (Returns size of list)
    int waSize()
    {
        return size;
    }

    // IsEmpty
    bool IsEmpty()
    {
        return size == 0;
    }

    // Get item at index
    int Get(int index)
    {
        if (index < 0 || index >= size)
        {
            cout << "Invalid index!\n";
            return -1;
        }

        return arr[index];
    }

    // Start (First element)
    int Start()
    {
        if (IsEmpty())
        {
            cout << "List is empty!\n";
            return -1;
        }

        return arr[0];
    }

    // End (Last element)
    int End()
    {
        if (IsEmpty())
        {
            cout << "List is empty!\n";
            return -1;
        }

        return arr[size - 1];
    }

    // Display List
    void Display()
    {
        if (IsEmpty())
        {
            cout << "List is empty.\n";
            return;
        }

        cout << "List: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor
    ~List()
    {
        delete[] arr;
    }
};

int main()
{
    List myList(10);

    myList.Add(0, 10);
    myList.Add(1, 20);
    myList.Add(2, 30);
    myList.Add(1, 15);

    myList.Display();

    cout << "Size: " << myList.waSize() << endl;
    cout << "Is Empty: " << (myList.IsEmpty() ? "Yes" : "No") << endl;
    cout << "Item at index 2: " << myList.Get(2) << endl;
    cout << "Start Element: " << myList.Start() << endl;
    cout << "End Element: " << myList.End() << endl;

    myList.Remove(1);

    cout << "\nAfter Removing index 1:\n";
    myList.Display();

    return 0;
}
