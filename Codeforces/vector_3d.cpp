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

    // Method to normalize the vector (careful of division by zero)
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
};

// Helper function to print a vector with 4 decimal places
void printVector(const Vector3D& vec) {
    cout << fixed << setprecision(4) << vec.x << " " << vec.y << " " << vec.z << endl;
}

int main() {
    float x1, y1, z1, x2, y2, z2;
    // Input: Six floating-point numbers
    cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

    Vector3D v1(x1, y1, z1);
    Vector3D v2(x2, y2, z2);

    // Magnitude of both vectors
    cout << fixed << setprecision(4) << v1.magnitude() << endl;
    cout << fixed << setprecision(4) << v2.magnitude() << endl;

    // Normalized form of both vectors
    Vector3D v1_norm = v1.normalize();
    Vector3D v2_norm = v2.normalize();
    printVector(v1_norm);
    printVector(v2_norm);

    // Dot product of both vectors
    cout << fixed << setprecision(4) << v1.dot(v2) << endl;

    // Cross product of both vectors
    Vector3D v_cross = v1.cross(v2);
    printVector(v_cross);

    // Angle between the two vectors
    cout << fixed << setprecision(4) << v1.angle(v2) << endl;

    return 0;
}
