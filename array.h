#pragma once

// lang::CwC
#include "object.h"

/**
 * Mutable Array API.
 */
class Array : public Object {
public:

    /**
     * Default Array constructor. Creates a new array.
     */
    Array() {}

    /**
     * Default array desctructor. Free any memory used.
     */
    virtual ~Array() {}

    /**
     * Adds the given object `o` to the end of the Array.
     * Throws an error if `o` is not of same type as rest of the Array
     */
    virtual void append(Object* o) {}

    /**
     * Inserts the given object `o` at index `index` of the Array.
     * Throws an error if `index` is out of range.
     * Throws an error if `o` is not of same type as rest of the Array.
     */
    virtual void insert(size_t index, Object* o) {}


    /**
     * Combines two Arrays by adding all elements of `other` at index `index` of this Array.
     * Throws an error if `index` is out of range.
     * Throws an error if `other` is not of same type as this Array.
     */
    virtual void combine(size_t index, Array* other) {}

    /**
     * Removes and returns the element at index `index` of the Array.
     * Throws an error if `index` is out of range.
     */
    virtual Object* remove(size_t index) {}

    /**
     * Removes all elements from this array.
     */
    virtual void clear() {}

    /**
     * Returns the element at index `index` of the Array.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual Object* get(size_t index) {}

    /**
     * Returns the index of the given Object `o`.
     * If it is not found in the Array, return -1
     */
    virtual size_t index_of(Object* o) {}

    /**
     * Returns whether the Array contains the given Object `o`.
     */
    virtual bool contains(Object* o) {}

    /**
     * Sets the element at index `index` of the Array to the given object `o`.
     * Returns the element that was overwritten.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     * Throws an error if `other` is not of same type as this Array.
     */
    virtual Object* set(size_t index, Object* o) {}

    /**
     * Returns the size of the Array.
     */
    virtual size_t size() {}

    /**
     * Determines whether this Array and the other are equal.
     * Checks that both Arrays are of same `arr_type`, with same
     * elements in same order.
     */
    virtual bool equals(Object* other) {}

    /**
     * Generates a hash value based on the elements in the
     * Array and their associated indices.
     */
    virtual size_t compute_hash_() {}


};