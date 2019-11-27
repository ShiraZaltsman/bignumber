//
// Created by shira on 11/27/19.
//

#include "BigNumber.h"
BigNumber::BigNumber(long long bigNumber, bool sign): m_sign(sign)
{
    while (bigNumber)
    {
        m_bigNumber.push_back(bigNumber % 256);
        bigNumber /=256;
    }
}