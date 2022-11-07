#include <string>
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;
using std::sqrt;
using std::string;

struct Solution
{
	bool hasRoots;
	double root1;
	double root2;
};

Solution quadratic(double a, double b, double c)
{
	Solution s;
	double radical = std::pow(b, 2) - 4 * a * c;

	if (radical < 0)
	{
		s.hasRoots = false;
	}
	else
	{
		s.hasRoots = true;
		s.root1 = (-b + sqrt(radical)) / (2 * a);
		s.root2 = (-b - sqrt(radical)) / (2 * a);
	}
	return s;
}

int main()
{
	double a, b, c;
	cout << "Give me 3 coefficients: " << endl;

	cin >> a >> b >> c;

	Solution result = quadratic(a, b, c);
	if (result.hasRoots)
	{
		cout << "The solutions are: " << result.root1 << " " << result.root2 << std::endl;
	}
	else
	{
		cout << "There is no solution!" << std::endl;
	}
	return 0;
}

// Test: x^2 + 5x + 6 = 0, roots = -3, -2

// To run: first compile code --> make quadratic,
// then run the compiled code --> ./quadratic
