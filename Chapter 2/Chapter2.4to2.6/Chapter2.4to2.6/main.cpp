//
//  main.cpp
//  Chapter2.4to2.6
//
//  Created by Alex Christopher on 5/14/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#include <iostream>

int main() {
    //2.4
    const int bufSize = 512; // input buffer size; makes bufSize a constant
    //Must imitialized const as the value of whatever object it defines cannot be changed
    int i = 42;
    const int &r1 = i; // bind a constant int & to a plain int object
    const int &r2 = 42; // ok: r1 is a refernce to a const
    const int &r3 = r1 * 3; // ok: r3 is a refernce to a const
    //Temporary value
    double dval = 3.14;
    const int temp = dval; // create a temporary const int from the double
    const int &ri = temp; // bind ri to that temporary
    //Reference to const that may not be a const
    int &r4 = i; //r4 is bound to i
    const int &r5 = i; //r2 is also bound to i; but cannot be used to change i
    r4 = 0; // r1 is nor const; i is now 0
    // Pointers to const
    const double pi = 3.14; // pi is const; its value may not be changed
    // double *ptr = &pi; // error: ptr is a plain pointer
    const double *cptr = &pi; // ok: cptr may point to a double that is const
    // *cptr = 42; // error: cannot assign to *cptr
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double pi2 = 3.14159;
    const double *const pip = &pi2; // pip is a const pointer to a const object
    // Top Level cosnt
    int q = 0;
    int *const p1 = &q; // cant change value of p1; const is top level
    const int ci = 42; // cant change ci; const is top level
    const int *p2 = &ci; // can chnage p2; const is low-level
    const int *const p3 = p2; // right most const is top level, left most is not
    const int &k = ci; //const in refernce types is always low-level
    int t = ci; // ok: copying value of ci; top-level const in ci is ignored
    p2 = p3; //ok: pointed-to type matches; top-level const in p3 is ignored
    // 2.4.4 constexpr and Constant Expressions
    const int max_files = 20; // max_files is a constant expression
    const int limit = max_files + 1; // limit is a constant expression
    int staff_size = 27; // staff_size is NOT a constant expression
    const int sz = get_size(); // sz is not a constant expression
    //constexpr
    constexpr int mf = 20; // 20 is a constant expression
    constexpr int limit2 = mf + 1; // mf + 1 is a constant expression
    constexpr int sz2 = size(); // ok only ig size is a constsxpr function
    //pointer and cosntexpr
    const int *pp = nullptr; // p is a pointer to a const int
    constexpr int *qq = nullptr; // q is a const pointer to int
    //
    constexpr int *np = nullptr; // np is a constant pointer to int that is null
    int j = 0;
    constexpr int ii = 42; //type of i is const int
    //i and j must be defined outside any function
    constexpr const int *ppp = &ii; // ppp is a constant pointer to the const int i
    constexpr int *p5 = &j; // p5 is a constant pointer to the int j
    
    //2.5.1 type aliases
    //typedef
    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*
    // alias definition
    using SI = Sales_item; // SI is a synonym for Sales_item
    wages hourly, weekly; // same as double hourly, weekly
    SI item; // same as Sales_item item
    //Pointers, const, and Type Aliases
    typedef char *pstring;
    const pstring cstr = 0; // cstr is a constant pointer to char
    const pstring *ps; // ps is a constant pointer to a constant pointer to char
    
    // 2.5.2 auto Type Specifier
    // the type of item is deduced from the type of the result of adding val1 and val2
    auto item = val1 + val2; // item initialized to the result of val1 + val2
    auto i9 = 0, *p = &i9; // ok: i is int and p is pointer to int
    //compound types, const, and auto
    int i92 = 0, &rr = i92;
    auto aa = rr; // a is an int (r is an alias for i, which has type int)
    const int ci = i92, &cr = ci;
    auto b = ci; // b ia an int (top-level const in ci is droppped)
    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i92; // d is an int* (& of an int object is int*)
    auto e = &ci; // e is const int* (& of a const object is low-level const)
    //deduce type
    const auto f = ci; // deduced type of ci is int; f has type const int
    auto &g = ci; // g is a const int& that is bound to ci
    const auto &j = 42; // ok: can bind a cosnt refernce to a literal
    //auto-deduced
    auto k = ci, &l = i; // k is int; l is int&
    auto &m = ci, *point = &ci; // m is a const int&; point is pointer to const int
    
    //2.5.3 decltype
    decltype(f()) sum = x; // sum has whatever type f returns
    //
    const int ci2 = 0, &cj = ci2;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    //decltype and referenceces
    //decltype of an expression can be a refernce type
    int i = 42, 8p = &i, 7r = i;
    decltype(r+0) b; // ok: addition yields an int; b is an uninitialized int
    //decltype of a () variable is always a reference
    decltype (i) e; // ok: e is an uninitialized int
    
    //2.6 Defining our own data structures
    //2.6.1 Defining the sales_item Type
    struct Sales_data {
        std::string bookNo;
        unsigned units_sold = 0;
        double reveune = 0.0;
    };
    Sales_data accum, trans, *salesptr;
    
    //2.6.2 Using Sales_data Class
    
    
    
    
}
