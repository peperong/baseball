#include <random>
#include <string>
#include <chrono>
 std::string util() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> dis(100, 987);
    int randomnum= dis(gen);
    return std::to_string(randomnum);
}
