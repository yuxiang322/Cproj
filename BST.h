// BST.H - Unit class definition
// author Yu Xiang
#ifndef BST_H_INCLUDED
#define BST_H_INCLUDED

#include<iostream>
#include "dates.h"

using namespace std;
//template class
template<class T>
//define node
struct node
{
    T mData;
    node *mLeft;
    node *mRight;

    node(T data)
    {
        mData = data;
        mLeft = NULL;
        mRight = NULL;
    }

};

//template class
template<class T>
class BST
{
private:
    node <T>*root;
    //Insert
    node<T>* Insert(T data, node<T>*temp)
    {
        if(temp == nullptr)
        {
            temp = new node<T>(data);
            return temp;
        }
        if(data == temp->mData)
        {
            return temp;
        }

        if(data < temp->mData)
        {
            temp->mLeft = Insert(data, temp->mLeft);
        }
        else
        {
            temp->mRight = Insert(data, temp->mRight);
        }
        return temp;
    }
    //in order
    void InOrder(node<T>*temp)
    {
        if(temp == nullptr)
        {
            return;
        }
        InOrder(temp->mLeft);
        cout << temp->mData << "  ";
        InOrder(temp->mRight);

    }
    //Delete
    void Delete(node<T> *temp)
    {
        if(temp != nullptr)
        {
            Delete(temp->mLeft);
            Delete(temp->mRight);
            delete temp;
            if(temp->mLeft!=nullptr)
            {
                temp->mLeft = nullptr;
            }
            if(temp->mRight!=nullptr)
            {
                temp->mRight = nullptr;
            }
            temp = nullptr;
        }
    }
    //Search
    bool Search(int year, node<T> *temp)
    {
        while(temp != nullptr)
        {
            if(temp->mData.GetYear() == year)
            {
                return true;
            }
            else if(temp->mData.GetYear() > year)
            {
                temp = temp->mLeft;
            }
            else
            {
                temp = temp->mRight;
            }
        }
        return false;
    }

public:

    BST()
    {
        root = NULL;
    }

    void InsertData(T data)
    {
        root = Insert(data, root);
    }

    void InOrder()
    {
        cout << "\nIn Order Traversal" << endl;
        InOrder(root);
        cout << endl;
    }

    void DestroyTree()
    {
        cout << "\nDeleting Tree.." << endl;
        Delete(root);
        root = nullptr;
        //Check is tree is empty
        IsEmpty();
    }

    void IsEmpty()
    {
        if(root == nullptr)
        {
            cout << "BST is empty! All nodes Deleted" << endl;
        }
        else
        {
            cout << "BST is not empty" << endl;
        }
    }
    //BST search Function to search for Year
    bool Search(int year)
    {

        if(Search(year, root))
        {
            return true;
        }
        return false;
    }

    ~BST()
    {
        delete root;
    }
};


#endif // BST_H_INCLUDED
