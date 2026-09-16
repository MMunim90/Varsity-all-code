#include <iostream>
enum TrafficLight {
    Red,
    Yellow,
    Green
};
void printTrafficLightState(TrafficLight light) {
    switch (light) {
        case Red:
            std::cout << "The traffic light is Red. Please stop." << std::endl;
            break;
        case Yellow:
            std::cout << "The traffic light is Yellow. Please prepare to stop." << std::endl;
            break;
        case Green:
            std::cout << "The traffic light is Green. You can go." << std::endl;
            break;
        default:
            std::cout << "Invalid traffic light state." << std::endl;
            break;
    }
}
TrafficLight getNextTrafficLightState(TrafficLight current) {
    switch (current) {
        case Red:
            return Green;
        case Yellow:
            return Red;
        case Green:
            return Yellow;
        default:
            return Red;
    }
}
int main() {
    TrafficLight currentLight = Red;
    for (int i = 0; i < 6; ++i) {
        printTrafficLightState(currentLight);
        currentLight = getNextTrafficLightState(currentLight);
    }

    return 0;
}


