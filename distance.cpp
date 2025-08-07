#include <bits/stdc++.h>
#include"point.h"

using namespace std;
int main() {
   Point coordinate1={0,0};
   Point coordinate2={0,0};

    // Input the coordinates of the first point
    cout << "Enter the x-coordinate of the first point: ";
    cin >> coordinate1.x;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> coordinate1.y;

    // Input the coordinates of the second point
    cout << "Enter the x-coordinate of the second point: ";
    cin >> coordinate2.x;
    cout << "Enter the y-coordinate of the second point: ";
    cin >> coordinate2.y;

    // Calculate the Manhattan distance
   double manhattanDistance = abs(coordinate2.x - coordinate1.x) + abs(coordinate2.y - coordinate1.y);

    // Display the result
    cout << "The Manhattan distance between the two points is: " << manhattanDistance << endl;

    return 0;
}
