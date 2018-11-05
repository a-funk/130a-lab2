#include <iostream>
#include <string>         // std::string
#include <algorithm>
#include <utility>
#include <fstream>
 
#include "top_k.h"

 
using namespace std;
 
int main()
{
	Top_k top_15;

    top_15.insert("hello");
    top_15.insert("hello");
    top_15.insert("hello");
    top_15.insert("Goodbye");
    top_15.print_heap();
    top_15.print_hash();
 
    return 0;
}
