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
     */
    virtual void append(Object* o) {}

    /**
     * Inserts the given object `o` at index `index` of the Array.
     * Throws an error if `index` is out of range.
     */
    virtual void insert(size_t index, Object* o) {}


    /**
     * Combines two Arrays by adding all elements of `other` at index `index` of this Array.
     * Throws an error if `index` is out of range.
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
     * If it is not found in the Array, return length
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
     */
    virtual Object* set(size_t index, Object* o) {}

    /**
     * Returns the size of the Array.
     */
    virtual size_t size() {}

    /**
     * Determines whether this Array and the other are equal.
     */
    virtual bool equals(Object* other) {}

    /**
     * Generates a hash value based on the elements in the
     * Array and their associated indices.
     */
    virtual size_t hash() {}


};

class IntArray : public Object {


    IntArray() {}

    ~IntArray() {}

    /**
     * Adds `val` to this array.
     */
    virtual void append(int val) {}

    /**
     * Insert int `val` at index.
     */
    virtual void insert(int val, size_t index) {}

    /**
     * Combines this array and `other` at provided index.
     */
    virtual void combine(size_t index, IntArray* other) {}

    /**
     * Removes int at provided index.
     */
    virtual int remove(size_t index) {}

    /**
     * Removes all elements from this array.
     */
    virtual void clear() {}

    /**
     * Returns the element at index `index` of the Array.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual int get(size_t index) {}

    /**
     * Returns the index of the given int `value`.
     * If it is not found in the Array, return length
     */
    virtual size_t index_of(int value) {}

    /**
     * Returns whether the Array contains the given int `value`.
     */
    virtual bool contains(int value) {}

    /**
     * Sets the element at index `index` of the Array to the given int `value`.
     * Returns the element that was overwritten.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual int set(size_t index, int value) {}

    /**
     * Returns the size of the Array.
     */
    virtual size_t size() {}

    /**
     * Determines whether this Array and the other are equal.
     */
    virtual bool equals(Object* other) {}

    /**
     * Generates a hash value based on the elements in the
     * Array and their associated indices.
     */
    virtual size_t hash() {}
};

class FloatArray : public Object {


    FloatArray() {}

    ~FloatArray() {}

    /**
     * Adds `val` to this array.
     */
    virtual void append(float val) {}

    /**
     * Insert this float at index.
     */
    virtual void insert(float val, size_t index) {}

    /**
     * Combines this array and `other` at provided index.
     */
    virtual void combine(size_t index, FloatArray* other) {}

    /**
     * Removes float at provided index.
     */
    virtual float remove(size_t index) {}

    /**
     * Removes all elements from this array.
     */
    virtual void clear() {}

    /**
     * Returns the element at index `index` of the Array.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual float get(size_t index) {}

    /**
     * Returns the index of the given float `value`.
     * If it is not found in the Array, return length
     */
    virtual size_t index_of(float value) {}

    /**
     * Returns whether the Array contains the given float `value`.
     */
    virtual bool contains(float value) {}

    /**
     * Sets the element at index `index` of the Array to the given object `o`.
     * Returns the element that was overwritten.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual float set(size_t index, float value) {}

    /**
     * Returns the size of the Array.
     */
    virtual size_t size() {}

    /**
     * Determines whether this Array and the other are equal.
     */
    virtual bool equals(Object* other) {}

    /**
     * Generates a hash value based on the elements in the
     * Array and their associated indices.
     */
    virtual size_t hash() {}
};

class BoolArray : public Object {


    BoolArray() {}

    ~BoolArray() {}

    /**
     * Adds `val` to this array.
     */
    virtual void append(bool val) {}

    /**
     * Insert this bool at index.
     */
    virtual void insert(bool val, size_t index) {}

    /**
     * Combines this array and `other` at provided index.
     */
    virtual void combine(size_t index, IntArray* other) {}

    /**
     * Removes bool at provided index.
     */
    virtual bool remove(size_t index) {}

    /**
     * Removes all elements from this array.
     */
    virtual void clear() {}

    /**
     * Returns the element at index `index` of the Array.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual bool get(size_t index) {}

    /**
     * Returns the index of the given bool `value`.
     * If it is not found in the Array, return length
     */
    virtual size_t index_of(bool value) {}

    /**
     * Returns whether the Array contains the given bool `value`.
     */
    virtual bool contains(bool value) {}

    /**
     * Sets the element at index `index` of the Array to the given object `o`.
     * Returns the element that was overwritten.
     * Throws an error if `index` is out of range (i.e. 4 in a size 2 Array)
     * or less than 0.
     */
    virtual bool set(size_t index, bool value) {}

    /**
     * Returns the size of the Array.
     */
    virtual size_t size() {}

    /**
     * Determines whether this Array and the other are equal.
     */
    virtual bool equals(Object* other) {}

    /**
     * Generates a hash value based on the elements in the
     * Array and their associated indices.
     */
    virtual size_t hash() {}
};