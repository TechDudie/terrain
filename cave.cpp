#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;
static int SEED = 65536; //test seed
int sphere(x,y,z,r) {
    int xx = 0, yy = 0, zz = 0;
    int pos[3] = [x,y,z]
    for (xx = 0 - r; xx < r + 1; xx++) {
        for (yy = 0 - r; yy < r + 1; yy++) {
            for (zz = 0 - r; zz < r + 1; zz++) {
                pos[0] = x + xx;
                pos[1] = y + yy;
                pos[2] = z + zz;
            }
        }
    }
    return 0;
}
int main() {
    srand((unsigned)SEED);
    int radius;
    radius = (rand()%8)+8;
    cout << radius << "\n";
    // TODO SPHERE GEN
    return 0;
}
