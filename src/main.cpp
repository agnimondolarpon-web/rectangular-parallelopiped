// C++

#include <iostream>
using namespace std;

int main() {

    int l, w, h;
    int area, volume;


    // user input
    cout << "Rectangular Parallelopiped\'s Area and Volume Calculator" << "\n" << endl;

    cout << "Enter the length of Rectangular Parallelopiped:";
    cin >> l;

    cout << "\n";

    cout << "Enter the width of Rectangular Parallelopiped:";
    cin >> w;

    cout << "\n";

    cout << "Enter the height of Rectangular Parallelopiped:";
    cin >> h;

    cout << "\n";


    //calculate the value of area and volume
    area =  2 * ( (l * w) + (w * h) + (h * l) );
    volume = l * w * h;


    //Calculate the value of area
    cout << "The length, width, height of Rectangular Parallelopiped is " << l << ", " << w << ", " << h << "\n" << endl;
    cout << "That's means " << "\n" << endl;
    cout << "l = " << l << endl;
    cout << "w = " << w << endl;
    cout << "h = " << h << "\n" << endl;
    cout << "we know that," << "\n" << endl;
    cout << "The Area of Rectangular Parallelopiped is, " << "\n" << endl;
    cout << "Area = 2 * ( (length * width) + (width * height) + (height * length) )" << endl;
    cout << "     = 2 × ( (" << l << " × " << w << ") + ("
         << w << " × " << h << ") + ("
         << h << " × " << l << ") )" << endl;
    cout << "     =" << area << "\n" << endl;


    //calculate the value of volume
    cout << "Again," << "\n" << endl;
    cout << "we know that," << "\n" << endl;
    cout << "The Volume of Rectangular Parallelopiped is, " << "\n" << endl;
    cout << "Volume = (length × width × height)" << endl;
    cout << "       = ( "
         << l << " × "
         << w << " × "
         << h << " )" << endl;
    cout << "       =" <<  volume << endl;


    return 0;
}

