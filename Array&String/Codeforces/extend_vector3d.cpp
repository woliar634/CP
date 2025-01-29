#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Vector3D {
public:
    float x, y, z;

    // Default constructor: initializes the vector to (0, 0, 0)
    Vector3D() : x(0), y(0), z(0) {}

    // Constructor with three float arguments
    Vector3D(float x, float y, float z) : x(x), y(y), z(z) {}

    // Method to compute the magnitude of the vector
    float magnitude() const {
        return sqrt(x * x + y * y + z * z);
    }

    // Method to normalize the vector
    Vector3D normalize() const {
        float mag = magnitude();
        if (mag == 0) return Vector3D(0, 0, 0);
        return Vector3D(x / mag, y / mag, z / mag);
    }

    // Method to compute the dot product of two vectors
    float dot(const Vector3D& other) const {
        return x * other.x + y * other.y + z * other.z;
    }

    // Method to compute the cross product of two vectors
    Vector3D cross(const Vector3D& other) const {
        return Vector3D(
            y * other.z - z * other.y,
            z * other.x - x * other.z,
            x * other.y - y * other.x
        );
    }

    // Method to compute the angle (in degrees) between two vectors
    float angle(const Vector3D& other) const {
        float dotProduct = dot(other);
        float magA = magnitude();
        float magB = other.magnitude();
        if (magA == 0 || magB == 0) return 0.0; // Avoid division by zero
        return acos(dotProduct / (magA * magB)) * 180.0 / M_PI;
    }

    // Operator overloading for vector addition
    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }

    // Operator overloading for vector subtraction
    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }

    // Operator overloading for scalar multiplication
    Vector3D operator*(float scalar) const {
        return Vector3D(x * scalar, y * scalar, z * scalar);
    }

    // Operator overloading for scalar division
    Vector3D operator/(float scalar) const {
        if (scalar == 0) {
            throw invalid_argument("Division by zero is undefined.");
        }
        return Vector3D(x / scalar, y / scalar, z / scalar);
    }

    // Operator overloading for equality
    bool operator==(const Vector3D& other) const {
        return fabs(x - other.x) < 1e-4 && fabs(y - other.y) < 1e-4 && fabs(z - other.z) < 1e-4;
    }

    // Helper function to print the vector with 4 decimal places
    void print() const {
        cout << fixed << setprecision(4) << x << " " << y << " " << z << endl;
    }
};

int main() {
    float x1, y1, z1, x2, y2, z2, scalar;
    
    // Input: six floating-point numbers for two vectors and one scalar
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2 >> scalar;

    Vector3D v1(x1, y1, z1);
    Vector3D v2(x2, y2, z2);

    // Perform vector addition (a + b)
    Vector3D sum = v1 + v2;
    sum.print();

    // Perform vector subtraction (a - b)
    Vector3D difference = v1 - v2;
    difference.print();

    // Perform scalar multiplication (a * c)
    Vector3D scaled_v1 = v1 * scalar;
    scaled_v1.print();

    // Perform scalar division (b / c)
    try {
        Vector3D scaled_v2 = v2 / scalar;
        scaled_v2.print();

        // Check if the two resulting vectors are equal (a * c == b / c)
        if (scaled_v1 == scaled_v2) {
            cout << "Equal" << endl;
        } else {
            cout << "Unequal" << endl;
        }
    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
