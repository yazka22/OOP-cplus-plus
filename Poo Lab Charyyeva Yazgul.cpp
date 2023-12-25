#include <iostream>
#include <string>
using namespace std;

// Abstract class- Currency 
class Currency {
    protected:
        double count; //field - amount of currency
        string name; // field - currency name
    public:
        // Class constructor
        Currency(double count, string name) {
            this->count = count;
            this->name = name;
        }

        // Pure virtual method
        // converting currency to dollar
        virtual const double convertToDollar() = 0;

};

// Child class - euro
class Euro : public Currency {
    public:
        // Class constructor
        Euro(double count, string name): Currency(count, name) {}

        // Overriding the convertToDollar method
        virtual const double convertToDollar() {
            return count * 0.9;
        }

        // Overloading data input / output methods
        // But first, let's list them as friendly to our class.
        friend ostream& operator<< (ostream& out, const Euro& euro);
        friend istream& operator>> (istream& in, Euro& euro);
};

// Overloading the output operator
ostream& operator<< (ostream& out, const Euro& euro) {
    out << "[Currency - " << euro.name << "]" << endl;
    out << "Number: " << euro.count << endl;

    return out;
}

// Overloading the input operator
istream& operator>> (istream& in, Euro& euro) {
    cout << "Amount of currency: ";
    in >> euro.count;

    return in;
}

//Overload itself:


// Testing the developed class
void main() {
    // Installing the Russian language in the console
    setlocale(LC_ALL, "Rus");

    // Create a class object
    Euro euro(100, "European currency");

    // We display it on the screen
    cout << euro << endl;

    // Entering new values
    cin >> euro;

    // We display it again on the screen
    cout << euro;

    // Testing an overloaded virtual method
    cout << "In dollars: " << euro.convertToDollar() << endl;
}