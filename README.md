# API Design for Object and Array

## Object
---
The API for an Object is outlined in `object.h`.

All classes that inherit from Object should override the functions listed below, as they will most likely differ for each class.

- `equals(Object * other)` -- return whether this Object is equal to other.
- `compute_hash_()` -- compute the hash for this Object
- `to_string()` --  provide a String representation of this object

## Array
---
The API for an Array is outlined in `array.h`.

The Array class represents a standard mutable array that can hold any kind of object. Below is an outline of functionality for different types of interaction with an Array.

### Adding elements to an Array

- `append(Object* o)`  -- append o to the Array
- `insert(size_t index, Object* o)` -- insert o at index
- `set(size_t index, Object * o)` -- set value at index to o
- `combine(size_t index, Array* other)` -- combine other with this Array, starting at index

### Removing elements from an Array

- `remove(size_t index)` -- remove object at index
- `clear()` -- remove all objects from array

### Querying an Array

- `get(size_t index)` -- return the object at index
- `size()` -- return the size of the Array
- `index_of(Object* o)` -- return the index of o

