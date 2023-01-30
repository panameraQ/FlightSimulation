#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double vel, angle, dist;

	cout << "Please enter the velocity (m/s): " << endl; // prompt user for velocity in m/s
	cin >> vel;           // store velocity in variable

	cout << "Please enter the angle (degrees): " << endl; // prompt user for angle in degrees
	cin >> angle;                  // store angle in variable

	dist = (vel * vel * sin(2 * (angle * 3.14 / 180))) / 9.81; // calculate distance of flight using formula d = v^2sin(2θ)/g

	cout << "The distance of the flight is: " << dist << endl; // output distance of flight

	return 0;
}