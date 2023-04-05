#include <iostream>
#include <cstdint>
#include <iomanip>

using namespace std;




void core_2()
{
    int16_t signed_num = -567;
    uint16_t unsigned_num = 123;

    int32_t signed_extended = static_cast<int32_t>(signed_num);
    uint32_t unsigned_extended = static_cast<uint32_t>(unsigned_num);

    std::cout << "Signed number extended as signed: " << signed_extended << std::endl;
    std::cout << "Signed number extended as unsigned: " << static_cast<uint32_t>(signed_extended) << std::endl;
    std::cout << "Unsigned number extended as signed: " << static_cast<int32_t>(unsigned_extended) << std::endl;
    std::cout << "Unsigned number extended as unsigned: " << unsigned_extended << std::endl;
}