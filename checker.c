#include "Param_Checker.h"
#include "btry_cndt_chk.h"

int main() {
    ParameterState temperatureState;
    ParameterState socState;
    ParameterState chargeRateState;

    checkTemperature(46, &temperatureState); 
    checkTemperature(39, &temperatureState); 
    checkTemperature(25, &temperatureState); 

    checkSoc(85, &socState); 
    checkSoc(76, &socState); 
    checkSoc(50, &socState); 

    checkChargeRate(0.85, &chargeRateState); 
    checkChargeRate(0.77, &chargeRateState); 
    checkChargeRate(0.70, &chargeRateState); 
    return 0;
}
