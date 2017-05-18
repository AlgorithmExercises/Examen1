#include "Map.h"

Map::Map()
{
  for(unsigned int i =0; i< 9999999;i++){
    array.push_back(new pair<string, int>("",0));
  }
}

int Map::hash(string str)
{
  int sum = 0;

  for(int i=0;i < (int)str.length();i++)
  {
    sum+=str[i];
  }

  return sum;
}

void Map::put(string key, int value)
{
  pair<string, int> *p = array[hash(key)];
  if(p->first ==""){
    cout<<"entroooooo"<<endl;
    p->first = key;
    p->second = value;
  }else{
    p->second = p->second*value;
  }
}

int Map::get(string key)
{
  return array[hash(key)]->second;
}


