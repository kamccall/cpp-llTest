#include "ll.h"
#include <iostream> 
using namespace std;

llNode::llNode(): next(nullptr) {}

llNode::llNode(int number): data(number), next(nullptr) {}

ll::ll(): head(nullptr) {}

ll::~ll()
{
   llNode* nodePtr = head;

   if(nodePtr != nullptr)
   {
      do
      {
         llNode* nextNode = nodePtr->next;
         delete(nodePtr);
         nodePtr = nextNode;
      } while (nodePtr != nullptr);
   }
}

void ll::Add(int number)
{
   llNode* newNode = new llNode(number);
   Add(newNode, head);
}

void ll::Add(llNode* newNodePtr, llNode* headPtr)
{
   if (headPtr == nullptr)
   {
      head = newNodePtr;
   }
   else if(newNodePtr->data < headPtr->data)
   {
      newNodePtr->next = headPtr;
      head = newNodePtr;
   }
   else
   {
      while(headPtr->next != nullptr && newNodePtr->data > headPtr->next->data)
      {
         headPtr = headPtr->next;
      }

      if(headPtr->next != nullptr)
      {
         newNodePtr->next = headPtr->next;
      }

      headPtr->next = newNodePtr;
   }
}

void ll::Print() const
{
   Print(head);
}

void ll::Print(llNode* nodePtr) const
{
   if(nodePtr == nullptr) return;
   else
   {
      while(nodePtr != nullptr)
      {
         cout << nodePtr->data << endl;
         nodePtr = nodePtr->next;
      }
   }
}

void ll::Remove(int number)
{
   llNode* nodePtr = head;

   if (nodePtr == nullptr) return;
   else if(nodePtr->data == number)
   {
      head = nodePtr->next;
      delete(nodePtr);
   }
   else
   {
      // llNode* nextNodePtr = nodePtr->next;
   
      //while(nextNodePtr !=nullptr && number > nextNodePtr->data)
      while(nodePtr->next !=nullptr && number > nodePtr->next->data)
      {
         nodePtr = nodePtr->next;
         // nextNodePtr = nodePtr->next;
      }

      if(nodePtr->next != nullptr && nodePtr->next->data == number)
      {
         llNode* nextNodePtr = nodePtr->next;
         nodePtr->next = nextNodePtr->next;
         delete(nextNodePtr);
      }
   }
}