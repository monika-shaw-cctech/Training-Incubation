//
// Created by Monika Shaw on 31-10-2022.
//
/*
 Accept cost price(CP) and Selling price(SP) of an item.
 Calculate the amount of PROFIT/LOSS made by the seller and print the
 */

#include <cstdlib>
#include <iostream>
#include <stddef.h>

void profitLoss(size_t sp, size_t cp)
{
    size_t profit, loss;
    if (sp > cp)
    {
        profit = sp - cp;
        std :: cout << "Profit of " << profit << " rupees" << std::endl;
    }
    else
    {
        loss = cp - sp;
        std :: cout << "Loss of " << loss << " rupees" << std::endl;
    }
}

int main()
{
    size_t cp, sp;
    std ::cout << "Enter selling price" << std::endl;
    std::cin >> sp;
    std ::cout << "Enter cost price" << std::endl;
    std::cin >> cp;

    profitLoss(sp, cp);

    return EXIT_SUCCESS;
}