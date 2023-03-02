#include <iostream>
#include <bitset>



void print16(void *p)
{
    unsigned short * value_tmp = reinterpret_cast<unsigned short *>(p);
    unsigned  short value= *value_tmp;
    std::cout<<"hex interpretator union unsigned"<<'\t'<<std::hex<<value<<std::endl;
    std::bitset<16> bits(value);
    std::cout<<"bin interpretator"<<'\t'<<bits.to_string()<<std::endl;
    std::cout<<"dec interpreatro"<<'\t'<<std::dec<<static_cast<unsigned>(value)<<std::endl;
    std::cout<<"Hex interpreatro"<<'\t'<<std::hex<<static_cast<short>(value)<<std::endl;
    std::bitset<16> sign_bits(static_cast<short>(value));
    std::cout<<"bin union signed value "<<'\t'<<sign_bits.to_string()<<std::endl;
    std::cout<<"Dec union signed value"<<'\t'<<static_cast<short>(value)<<std::endl;




}


int ex_3()
{
    std::printf("Min value and union and unsigned \n");
    unsigned short test1 =0;
    std::printf("Test 1 \n");
    print16(&test1);
    std::printf("\n");
    std::printf("Max value and union and unsigned \n");
    unsigned short test2=0xFFFF;
    print16(&test2);
    std::printf("\n");
    std::printf("Min value and union and signed \n");
    short test3=-32768;
    print16(&test3);
    std::printf("\n");
    std::printf("Max value and union and signed \n");
    short test4= 32768;
    print16(&test4);
    std::printf("\n");
    std::printf("Inputing is a value from table var one y=5 \n");
    unsigned short test5_vr1=5;
    print16(&test5_vr1);
    std::printf("\n");
    std::printf("Inputing is a value from table var one z= -5 \n");
    short test_6_vr1= -5;
    print16(&test_6_vr1);
    std::printf("\n");
    return 0;



}