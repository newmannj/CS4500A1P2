#pragma once

// lang::CwC
#include <stdlib.h>

/**
 * Object class API
 */
class Object {
public:

    /**
     * Default Object constructor.
     */
    Object() {}

    /**
     * Default Object destructor.
     */
    virtual ~Object() {}

    /** 
     * Return whether this Object is equal to @arg other.
     */
    virtual bool equals(Object* other) {}

    /**
     * Return the hash for this Object.
     */
    virtual size_t hash() {}

    /** 
     * Compute the hash for this Object.
     */
    virtual size_t compute_hash_() {}

    /**
     * Returns the type of this object as a string.
     */
    virtual char* get_type() {}

    /**
     * Provide a textual representation of this Object.
     */
    virtual char* to_string() {}
};