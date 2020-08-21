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
/*
    


*/

#ifndef SD_
#define SD_

#include"../../cores/core-libs/SPI/src/SPI.h"
#include"../../lib/SD-master/SD.h"
#include"../../utility/definitions.h"
#include"../../utility/utiltiyFunctions.h"

class SD_API {
    private:
        //Function to add file to available file registry
        NO_RETURN registerFile(AUAC_BASE_STRING filename);

        //Function to create a file
        AUAC_BASE_STRING createFile();

        //Function to delete a file
        NO_RETURN deleteFile(AUAC_BASE_STRING file);

        AUAC_BASE_STRING getFileDir();

        AUAC_BASE_BOOL checkForFile(AUAC_BASE_STRING filename);
        
    public:
        //Function to add data to specified File
        template<typename FileType>
        AUAC_BASE_32 addDataToFile(FileType data,AUAC_BASE_STRING file);

        AUAC_BASE_STRING readFileintoBuffer(AUAC_BASE_STRING file);



};

#endif