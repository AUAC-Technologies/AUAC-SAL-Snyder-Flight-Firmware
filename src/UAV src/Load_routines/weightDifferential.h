#ifndef WEIGHTDIFF
#define WEIGHTDIFF

#include<stddef.h>
#include<stdint.h>
#include<Arduino.h>
#include"../Sensors/IMU/InertialM.h"

class WEIGHT_DIFF{
    private:
        double *COMPILE_STATE();

    public:
        boolean STILL_WEIGHT_DIFFERENTIAL_DETECT();

        boolean DYNAMIC_WEIGHT_DIFFERENTIAL_DETECT();

        uint8_t AREA_PLACED();

        uint8_t APPROX_MASS_PLACED();

        uint8_t UPDATE_CG();


};

#endif