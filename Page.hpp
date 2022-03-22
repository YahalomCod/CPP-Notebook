#include <iostream>
#include "Direction.hpp"
using namespace std;
#include <string>
#include <vector>
#pragma once
namespace ariel{
   class Page{
        public:
            int id;
            int numberOfRows;
            char** rows;

            Page(){
                // char** rows = new char*[100];
                // numberOfRows = 1;
                // id = 0;
                // for (int j = 0; j < 100; j++){
                //     rows[0][j] = '_';
                //  }
            }

            void write( int row,  int culomn, Direction d, string const& data);
            void read( int row,  int culomn, Direction d,  int length);
            void erase( int row,  int culomn, Direction d,  int length);
            void show();
    };
}