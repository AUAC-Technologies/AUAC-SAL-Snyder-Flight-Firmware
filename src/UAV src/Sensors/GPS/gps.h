/*MIT License

Copyright (c) 2020 Nyameaama Gambrah

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#ifndef GPS_I
#define GPS_I

#include<TinyGPS++.h>
#include<SoftwareSerial.h>
#include"../../utility/definitions.h"

#define RX_PIN 0
#define TX_PIN 0

class GPS {
    private:
        static const uint32_t GPSBaud = 9600;
    
    public:
        //Constructor
        GPS();

        //Function to get latitude from GPS
        AUAC_BASE_DOUBLE getLatitude();

        //Function to get longitude from GPS
        AUAC_BASE_DOUBLE getLongitude();

        //Function to get approxiamate altitude from GPS
        //Returns meters
        AUAC_BASE_DOUBLE getapproxAltitude();

        //Function to return array of current time from GPS
        //{Hour,Min,Sec}
        AUAC_BASE_DOUBLE *getTime();

};

#endif