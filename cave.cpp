#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
using namespace std;
static int SEED = 65536; //test seed
int sphere(x,y,z,r) {
    int xx = 0, yy = 0, zz = 0;
    for (xx = 0 - r; xx < r + 1; xx++) {
        for (yy = 0 - r; yy < r + 1; yy++) {
            for (zz = 0 - r; zz < r + 1; zz++) {
                //TODO
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
