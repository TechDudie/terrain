#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
static int SEED = 65536; //test seed
int main() {
    srand((unsigned)SEED);
    int radius;
    radius = (rand()%8)+8;
    cout << radius << "\n";
    // TODO SPHERE GEN
    return 0;
}
