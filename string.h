#pragma once

// lang::CwC
#include "object.h"

/**
 * Immutable String API.
 */
class String : public Object {
public:

    /**
     * Standard char* constructor (should reject empty char* arrays)
    */
    String(char* c) {}

    /**
     * Takes in string literal (a `const char*`) and applies same ops as other constructor
    */
    String(const char* c) {}

    /**
     * Standard destructor for a String.
     */
    ~String() {}

    /**
     * Compute the hash code for this string.
    */
    size_t compute_hash_() {}

    /**
     * Return whether provided object equals this String.
    */
    bool equals(Object* other) {}

    /**
     * Concatenate string s onto this string.
    */
    String* concat(String* s) {}

    /**
     * Return the value of this string
     */
    char* to_string() {}

    /**
     * Return the length of the string.
     */
    size_t length() {}

    /**
     * Returns the name of this class as a string.
     */
    virtual char* get_type() {}
};