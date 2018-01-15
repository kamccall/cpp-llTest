#include "ll.h"
#include <iostream>
using namespace std;

int main()
{
   ll tree;
   tree.Add(10);
   tree.Add(5);
   tree.Print();
   cout << endl;

   tree.Add(27);
   tree.Add(14);
   tree.Print();
   cout << endl;

   tree.Add(2);
   tree.Add(7);
   tree.Print();
   cout << endl;

   tree.Add(30);
   tree.Add(9);
   tree.Print();
   cout << endl;

   tree.Add(40);
   tree.Add(1);
   tree.Print();

   cout << "removing..." << endl;
   tree.Remove(14);
   tree.Remove(2);
   tree.Print();
   cout << endl;

   tree.Remove(40);
   tree.Remove(1);
   tree.Print();
   cout << endl;

   tree.Remove(27);
   tree.Remove(7);
   tree.Print();

   // tree.Remove(1);
   // tree.Print();
}