#include <Poco/Thread.h>
#include <string>
#include <iostream>
/* #include <cstring> */

using Poco::Thread;

int main(){
    std::cout << "sleep for 3 seconds \n";
    
    // Implements library from conan
    Thread::sleep(3000);
    std::cout << "finished! \n";
    return 0;
}
