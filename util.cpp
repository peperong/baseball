#include <random>
#include <string>
#include <chrono>
 std::string util() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> dis(100, 987);
    int randomnum= dis(gen);
    int gen1= randomnum % 10;
    int gen2= randomnum / 100;
    int gen3= (randomnum /10) % 10;
    while (gen1 == gen2 || gen1 == gen3 || gen2 == gen3) {
        randomnum = dis(gen);
        gen1 = randomnum / 100;
        gen2 = (randomnum / 10) % 10;
        gen3 = randomnum % 10;
    }

    return std::to_string(randomnum);
 }
