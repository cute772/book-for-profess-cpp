#include <string>
#include "AirlineTicket.hpp"

AirlineTicket::AirlineTicket(): mPassengerName("Unknown Passenger")
, mNumberOfMiles(0)
, mHasEliteSuperRewardsStatus(false) {

}

AirlineTicket::~AirlineTicket() {}

double AirlineTicket::calculatePriceInDollars() const {

    if(hasEliteSupterRewardsStatus()) {
        return 0;
    }
    return getNumberOfMiles() * 0.1;
}

int AirlineTicket::getNumberOfMiles() const {
    return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int miles) {
    mNumberOfMiles = miles;
}

const std::string& AirlineTicket::getPassengerName() const {
    return mPassengerName;
}

void AirlineTicket::setPassengerName(const std::string& name) {
    mPassengerName = name;
}
