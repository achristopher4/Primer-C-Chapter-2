//
//  Sales_data.h
//  2.6 Building Sales_data
//
//  Created by Alex Christopher on 5/23/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#ifndef Sales_data_h
#define Sales_data_h

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double reveune = 0.0;
};
Sales_data accum, trans, *salesptr;

#endif /* Sales_data_h */
