//
//  main.cpp
//  2.6 Building Sales_data
//
//  Created by Alex Christopher on 5/23/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#include <iostream>
#include <string>
#include "Sales_data.h"

int main() {
    Sales_data data1, data2;
    //code to read into data1 and data2
    double price = 0; // price per book, used to calculate total revenue
    //read the first transactions ISBN, # of books sold, price per book
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    //calculate total revuene from price and units sold
    data1.reveune = data1.units_sold * price;
    //read second transaction
    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.reveune = data2.units_sold * price;
    
    //code to check whether data1 and data2 have same ISBN
        // if so print the sum of data1 and data2
    if (data1.bookNo == data2.bookNo) {
        unsigned totalCnt = data1.units_sold + data2.units_sold;
        double totalRevenue = data1.reveune + data2.reveune;
        //print: ISBN, total sold, total reveune, average price per book
        std::cout << data1.bookNo << " " << totalCnt
        << " " << totalRevenue << " ";
        if (totalCnt != 0)
            std::cout << totalRevenue/totalCnt << std::endl;
        else
            std::cout << "(no sales)" << std::endl;
        return 0; //indicates success
        
    } else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1; //incidate failure
    }
    
}


/*
 Input Values:
 0-201-78345-X 3 20.00
 0-201-78345-X 2 25.00
 */
