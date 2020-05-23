//
//  main.cpp
//  Chapter2E23
//
//  Created by Alex Christopher on 5/12/20.
//  Copyright © 2020 Alex Christopher. All rights reserved.
//

#include <iostream>
#include <cstdlib>

// chapter 2.1 - 2.3.3

int main() {
    //unsigned, signed, int
    int i = 5, u = 7;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;
    std::cout << '\155' << '\n';
    std::string e("My name is alex");
    std::cout << e << std::endl;
    // 2.9
    int a = 0;
    std::cin >> a;
    std::cout << a << std::endl;
    
    //Reference example
    int v = 10;
    int &test = v;
    std::cout << test << std::endl;;
    
    //multiple refreences
    int t = 44, ii = 88;
    int &v1 = t, v2 = ii;
    int iii = 123, &vi = iii;
    int &v3 = iii, &v4 = ii;
    
    //2.17
    int g, &ri = g;
    g = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    
    //pointers
    int *ip1, *ip2; // both ip1 and ip2 are pointers to int
    double dp, *dp2; // dp2 is a pointer to double; dp is a double
    //getting the address
    int val = 43;
    int *p = &val; // p holds the address of val; p is a pointer to val
    //dereferencing
    int test2 = 101;
    int *pp = &test2; // pp holds the address of test2; pp is a pointer to test2
    std::cout << *pp << std::endl; // * yields the object to which pp points; prints 101
    //assigning to the deference
    *pp = 500; // * yields the object; we assign a new value to test2 through pp
    std::cout << *pp << std::endl; // prints 500
    //NULL pointer
    int *pp1 = nullptr; //equivalent to int *pp1 = 0;
    int *pp2 = 0; // directly initializes p2 from the literal constant 0
    // must #include cstdlib
    int *pp3 = NULL; // equivalent to int *pp3 = 0;
    //Other pointers
    int ifVal = 15;
    int *testIf = 0; // testIf is a valid, null pointer
    int *testIf2 = &ifVal; // testIf2 is a valid pointer that holds the address of ifVal
    if (testIf){ // testIf has value 0, so condition evaluates as false
        std::cout << "This is false" << std::endl;
    }
    if (testIf2){ // testIf2 points to ifVal, so its is not 0; the condition evaluates as true
        std::cout << "This is true" << std::endl;
    }
    //  void* pointers
    double object = 3.14, *pd = &object;
    // ok: void* can hold the address value of any data pointer type
    void *pv = &object; // object can be an object of any type
    pv = pd; // pv can hold a pointer to any type
    
    //2.3.3
    // i is an int; p is a pointer; r is a reference to int
//    int i23 = 1025, *p23 = &i23, &r23 = &i23;
    int le = 88;
    int *ple = &le; //pointer pointing to an int
    int **pple = &ple; // pointer pointing to a pointer pointing to a int
    std::cout << "The value of ival\n" << "Direct Value: " << le << '\n'
              << "Indirect value: " << *ple << '\n' << "Doubly indirect value: "
    << **pple << std::endl;
    
    int *rple; // pointer to int
    int *&rle = rple; // r is a reference to the pointer p
    rle = &le; // refers to a pointer; assigning &le to rle makes rple point to le
    *rle = 0; // dereferencing rle yields le, the object to which rple points; changes le to 0
    
    return 0;
}
