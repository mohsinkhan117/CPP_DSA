#include <iostream>
using namespace std;

class GPSCoordinates
{
private:
    double latitude;
    double longitude;

public:
    GPSCoordinates() : latitude(0), longitude(0) {}

    GPSCoordinates(double lat, double lon) : latitude(lat), longitude(lon) {}

    double getLatitude() const
    {
        return latitude;
    }

    double getLongitude() const
    {
        return longitude;
    }

    void setLatitude(double lat)
    {
        latitude = lat;
    }

    void setLongitude(double lon)
    {
        longitude = lon;
    }

    void display() const
    {
        cout << "(" << latitude << ", " << longitude << ")" << endl;
    }
};

int main()
{
    cout << "GPSCoordinates location1:" << endl;
    GPSCoordinates location1;
    cout << "Initial value of location1: ";
    location1.display();

    location1.setLatitude(33.6844);
    location1.setLongitude(71.0975);
    cout << "Updated value of location1: ";
    location1.display();

    cout << "\nGPSCoordinates location2:" << endl;
    GPSCoordinates location2(33.6844, 73.0479);
    cout << "Initial value of location2: ";
    location2.display();

    return 0;
}