#include <iostream>
#include "Direction.hpp"
using namespace std;
#include <string>
#include <vector>
#include "Page.hpp"
#pragma once
namespace ariel{
    class Notebook{
    public:
        int numberOfPages;
        Page *pages;

        Notebook(){
            Page *pages = new Page[1];
            numberOfPages = 1;
        }

        void write( int page,  int row,  int culomn, Direction d, string const& data);
        string read( int page,  int row,  int culomn, Direction d,  int length);
        void erase( int page,  int row,  int culomn, Direction d,  int length);
        void show( int page);
    };
};