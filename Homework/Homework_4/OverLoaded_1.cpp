// Overload ++ when used as prefix

#include <iostream>

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ ();

    void display() {
        std::cout << "Count: " << value << std::endl;
    }
};
void  Count::operator ++ () {
        ++value;
    }



int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}