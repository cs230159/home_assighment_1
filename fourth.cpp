#include <iostream>

using namespace std;

int main() {
    double width, length, area, perimeter;

    cout << "Can you please write the width of the area: ";
    cin >>  width;

    cout << "Can you please write the length of the area: ";
    cin >> length;

    area = width * length;
    perimeter = 2 * ( length + width);

    cout <<"The area: " << area << " " << " The perimeter of the rectangle area " << "perimeter" << endl;

    return 0;
}