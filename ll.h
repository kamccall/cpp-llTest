#pragma once
struct llNode
{
public:
   int data;
   llNode* next;

   llNode();
   llNode(int number);
};

class ll
{
private:
   llNode* head;
   void Add(llNode* newNodePtr, llNode* headPtr);
   void Print(llNode* headPtr) const;

public:
   ll();
   ~ll();
   void Add(int number);
   void Print() const;
   void Remove(int number);
};