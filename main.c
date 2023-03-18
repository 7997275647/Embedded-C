//-----structures in C--------
#include <stdio.h>
#include <stdint.h>

int main()


{
    struct carModel
    {
        uint32_t carNumber;
        uint8_t noOfAirBags;
        float dieselCapacity;
    
    };
    struct carModel carBMW = {1234,12,45.6000};
    struct carModel carFord = {.carNumber=1000,.noOfAirBags=10,.dieselCapacity=50.5};
    printf("BMW Details \n");
    printf("the car number %d\n",carBMW.carNumber);
    printf("number of airbags %d\n",carBMW.noOfAirBags);
    printf("the car diesel capacity %f\n",carBMW.dieselCapacity);
    printf("Ford Details \n");
    printf("the car number %d\n",carFord.carNumber);
    printf("number of airbags %d\n",carFord.noOfAirBags);
    printf("the car diesel capacity %f\n",carFord.dieselCapacity);
    
    
    return 0;    
}
