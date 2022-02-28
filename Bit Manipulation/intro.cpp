#include<iostream>
using namespace std;

int getBit(int num, int index){
    
    int result = (num & (1<<index)) != 0;
    return result;
}

int setBit(int num, int pos){
    int result = num | (1<<pos);
    return result;
}

int clearBit(int num, int pos){

    int mask = 1 << pos;    // ( 0001 << pos(2) = 0100  )
    int result = num & (~mask);     // 
    return result;
}

int updateBit(int num, int pos, int value){
    // combination of clear and set bit

    // clearing bit
    int mask = ~(1 << pos);
    int clrResult = num & mask;

    // setting bit
    int setRes = num | (value<<pos);
    return setRes;
    
}

int main()
{
    cout << getBit(5,2) << endl;
    cout << setBit(5,1) << endl;
    cout << clearBit(5, 2) <<endl;
    cout << updateBit(5, 1, 1) <<endl;
    return 0;
}


// Process

/*
    Get Bit: {
        Bit mask: 1<<i
        operation: AND
        i is position
    }

*/