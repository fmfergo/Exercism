#include "hello_world.h"

using namespace std;

namespace hello_world {

string hello() { return "Hello, World!"; }

int main() {
    hello_world::hello();

    return 0;
}
    
}  // namespace hello_world

