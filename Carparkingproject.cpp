#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Car
{
    private:
        string licenseplate;
        string owner;
    public:
        Car(string lp, string o): licenseplate(lp), owner(o) 
        {

        }
        void setlp(string lp)
        {
            licenseplate=lp;
        }
        string getlp()
        {
            return licenseplate;
        }
        void display()
        {
            cout<<"License Plate: "<<licenseplate<<", Owner: "<<owner<<endl;
        }
};
class ParkingLot
{
    private:
        vector<Car> parkedCars;
        int capacity;
    public:
        ParkingLot(int cap): capacity(cap)
        {

        }
        bool parkCar(const Car& car)
        {
            if(parkedCars.size() < capacity)
            {
                parkedCars.push_back(car);
                return true;
            }
            else
            {
                cout<<"Parking lot is full!"<<endl;
                return false;
            }
        }
        void displayParkedCars()
        {
            cout<<"Parked Cars: "<<endl;
            for(  auto& car:parkedCars)
            {   
                car.display();
            }
        }
};
int main()
{
    ParkingLot myParkingLot(3);
    Car car1("BC123","Sanjay gore");
    Car car2("YZ457","Janvi Manse");
    myParkingLot.parkCar(car1);
    myParkingLot.parkCar(car2);
    myParkingLot.displayParkedCars();
    return 0;
}