#include <iostream>

using namespace std;

class Hexagon {
private:
    double side;

public:
    Hexagon(double s) : side(s) {}

    double calcArea() {
        return 1.5 * 1.732 * side ;
    }

    double calcPeri() {
        return 6 * side;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        cout << "Hexagon \n\tArea\t\t\t: " << calcArea() <<endl<< "\tPerimeter:\t\t: " << calcPeri()<<endl << "\tSum of Angles\t\t: " << calcAngleSum() <<endl<< endl;
    }
};

class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calcAreaSquare() {
        return side * side;
    }

    double calcPeriSquare() {
        return 4 * side;
    }

    void display() {
        cout << "Square \n\tArea\t\t: " << calcAreaSquare()<<endl << "\tPerimeter\t: " << calcPeriSquare() <<endl<< endl;
    }
};

int main() {
    int choice;
    int lastDigit = 9; //  The last digit of My CNIC is 9

    while (true) {
        cout << "-----------------CALCULATE THE SQUARE AND PARIMETER OF SQUARE AND HEXAGON-----------------\n";
		cout << "\t\t PRESS \n\t\t\t 1 to calculate Hexagon properties\n\t\t\t 2 for Square properties\n\t\t\t 3 to exit: ";
        cout<< "\n\n\t\t CHOICE: ";
		cin >> choice;
        

        switch (choice) {
            case 1: {
                Hexagon hex(lastDigit);
                hex.display();
                break;
            }
            case 2: {
                Square sq(lastDigit + 1);
                sq.display();
                break;
                cout<<	endl;
            }
            case 3: {
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            }
            default:
                cout << "Invalid input. Please enter 1, 2, or 3." << endl;
        }
    }

    return 0;
}

