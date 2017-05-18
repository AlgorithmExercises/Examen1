#ifndef MAP_H
#define MAP_H

#include <iostream>
#include <map>
#include <vector>
#include <list>
using namespace std;

class Map
{
  vector< pair<string,int>* > array;
  vector< list< pair<string,int>* >* > array_list;
  public:
    Map();
    int hash(string str);
    void put(string key, int value);
    int get(string key);
    void clear();
    int getSize();
    bool isEmpty();
};


#endif // MAP_H
