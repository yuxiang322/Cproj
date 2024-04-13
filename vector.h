// Vector.H - Unit class definition
// author Yu Xiang

#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

#include <iostream>

template <class T>
class Vector
{
private:
    //pointer based on the T data
    T* mArray;
    //Total Storage of vector
    unsigned int mTotalCapacity;
    //Current elements inside vector
    unsigned int mCurrentElements;

public:
    Vector()
    {
        mArray = new T[1];
        mTotalCapacity = 1;
        mCurrentElements = 0;
    }
    //~Vector();

    void AddElement(T data)
    {
        //Validate if current elements more than total capacity
        if(mCurrentElements == mTotalCapacity)
        {
            T* temp = new T[mTotalCapacity *2];

            for(unsigned int i = 0; i < mTotalCapacity; i++)
            {
                //copying existing array to temp array
                temp[i] = mArray[i];
            }

            //Deletion of previous array
            delete[] mArray;
            //reallocate capacity
            mTotalCapacity = mTotalCapacity *2;
            //assign new array to the existing Array
            mArray = temp;
        }
        //data insertion
        mArray[mCurrentElements] = data;
        //Track the current number of elements
        mCurrentElements++;
    }

    //get element at specific index
    T GetElement(unsigned int index)
    {
        if(index < mCurrentElements)
            return mArray[index];
    }

    //element counter to be subtracted
    void DeleteElement()
    {
        mCurrentElements--;
    }

    //get size of the vector
    unsigned int GetSize()
    {
        return mCurrentElements;
    }

};

#endif // VECTOR_H_INCLUDED
