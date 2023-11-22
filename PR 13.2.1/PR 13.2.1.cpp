#include <iostream>
#include <cmath>

using namespace std;

#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))
#define abs_val(a) ((a) >= 0 ? (a) : -(a))

#define POWER(x, y) pow(x, y)
#define SQUARE(x) ((x) * (x))

int main() {
    float x, z;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of z (should be between 5 and 10): ";
    cin >> z;

    if (z > 5 && z < 10) {
        float w = min(x, z) * max(x + z, x * z);
        cout << "w = min(x, z) * max(x + z, x * z) = " << w << std::endl;
    }
    else if (z <= 5 || z >= 10) {
        float w = SQUARE(max(abs_val(x - z), z));
        cout << "w = max^2(|x - z|, z) = " << w << std::endl;
    }
    else {
        cout << "Invalid value of z entered." << std::endl;
    }

    return 0;
}
