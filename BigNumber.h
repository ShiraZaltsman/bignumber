//
// Created by shira on 11/27/19.
//

#ifndef BIGNUMBER_SHIRAZALTSMAN_BIGNUMBER_H
#define BIGNUMBER_SHIRAZALTSMAN_BIGNUMBER_H
#include<cmath>
#include<iostream>
#include<string>
#include <vector>
class BigNumber
{
public:
    BigNumber();
    BigNumber(long long bigNumber, bool sign);
    //BigNumber(std::string &bigNumber, bool sign);
    BigNumber operator+(const BigNumber& bigNumber) const;
    friend std::ostream &operator<<(std::ostream & out, const BigNumber &bigNumber);
private:
    bool m_sign;
    std::vector<unsigned char> m_bigNumber;
};

inline BigNumber::BigNumber(): m_sign(false), m_bigNumber(){


}

inline std::ostream &operator<<(std::ostream & out, const BigNumber &bigNumber)
{
    int size = bigNumber.m_bigNumber.size();
    int s = 0;
    for(int i = size; i >= 0; --i)
    {
        s+= ((int) bigNumber.m_bigNumber[i]) * pow(256,i) ;
    }
    out << s;
}

BigNumber BigNumber::operator+(const BigNumber &bigNumber) const {

    return BigNumber();
}
//inline BigNumber::BigNumber(long long bigNumber, bool sign): m_sign(sign), m_bigNumber(big{}
//inline BigNumber::BigNumber(std::string &bigNumber, bool sign): m_sign(sign), m_bigNumber(bigNumber){}


#endif //BIGNUMBER_SHIRAZALTSMAN_BIGNUMBER_H
