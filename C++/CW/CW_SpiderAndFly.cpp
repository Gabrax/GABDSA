#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <unordered_map>
#include <string>

std::pair<double, double> toCartesian(const std::string& coordinate) {
    std::unordered_map<char, int> radialMap = {
        {'A', 0}, {'B', 1}, {'C', 2}, {'D', 3},
        {'E', 4}, {'F', 5}, {'G', 6}, {'H', 7}
    };
    
    char radial = coordinate[0];
    int ring = std::stoi(coordinate.substr(1));
    
    double theta = radialMap[radial] * 45.0 * M_PI / 180.0; 
    double x = ring * cos(theta);
    double y = ring * sin(theta);
    return {x, y};
}

double distance(const std::pair<double, double>& p1, const std::pair<double, double>& p2) {
    return sqrt(pow(p2.first - p1.first, 2) + pow(p2.second - p1.second, 2));
}

int main() {
    std::string spiderPosition, flyPosition;

    std::cin >> spiderPosition >> flyPosition;
    
    std::pair<double, double> spiderPos = toCartesian(spiderPosition);
    std::pair<double, double> flyPos = toCartesian(flyPosition);
    
    std::cout << distance(spiderPos, flyPos);
}

