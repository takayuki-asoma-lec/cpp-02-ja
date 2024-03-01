#include "traffic_light.h"

// コードを入力してください
std::string get_action(TrafficLight light)
{
    // コードを入力してください
    switch(light){
        case TrafficLight::green:
            return "Go";
        case TrafficLight::yellow:
            return "Caution";
        case TrafficLight::red:
            return "Stop";
    }
}