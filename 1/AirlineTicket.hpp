#include <string>

class AirlineTicket 
{
    public:
        AirlineTicket();
        ~AirlineTicket();

        double calculatePriceInDollars() const;

        const std::string& getPassengerName() const;
        void setPassengerName(const std::string& name);

        int getNumberOfMiles() const;
        void setNumberOfMiles(int miles);

        bool hasEliteSupterRewardsStatus() const;
        void setHasEliteSuberRewardsStatus(bool status);

    private:
        std::string mPassengerName;
        int mNumberOfMiles;
        bool mHasEliteSuperRewardsStatus;
};