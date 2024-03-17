#include "MyFunctions.h"

void randomizeVector(std::vector<int> &intVec, int vecSize){
    // Seed with a real random value, if available
    std::random_device rd;
    //Set default random engine
    std::default_random_engine randomEngine(rd());
    //Set uniform int distribution in range 1 to 6
    std::uniform_int_distribution<int> uniformIntDistribution(1, vecSize);

    //Generate and add random numbers to the vector
    for (int i = 0; i < vecSize; ++i) {
        intVec.push_back(uniformIntDistribution(randomEngine));
    }
}
void randomizeVector(std::vector<float> &floatVec, int vecSize){
    // Seed with a real random value, if available
    std::random_device rd;
    //Set default random engine
    std::default_random_engine randomEngine(rd());
    //Set uniform int distribution in range 1.0 to 6.0
    std::uniform_real_distribution<float> uniformFloatDistribution(1.0, (float)vecSize);

    //Generate and add random numbers to the vector
    for (int i = 0; i < vecSize; ++i) {
        floatVec.push_back(uniformFloatDistribution(randomEngine));
    }
}
