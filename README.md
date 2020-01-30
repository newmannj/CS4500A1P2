# API Design for Object and Array

## Object
---
The API for an Object is outlined in `object.h`.

All classes that inherit from Object should override the functions listed below, as they will most likely differ for each class.

UPDATE: 1/30
- To remove issues with different API implementations, we used the object implementation provided by chasebish at https://github.com/chasebish/cwc_object_string

- `equals(Object * other)` -- return whether this Object is equal to other.
- `hash()` -- compute the hash for this Object

## Array
---
The API for an Array is outlined in `array.h`.

The Array class represents a standard mutable array that can hold any kind of object. Below is an outline of functionality for different types of interaction with an Array.

UPDATE 1/30
- To help the implementers of our API, we added three more classes -- IntArray, FloatArray and BoolArray. The underlying functionality should be the same, only the types are different. 

### Adding elements to an Array

- `append(Object* o)`  -- append o to the Array (replace Object* with int, float, bool as needed.)
- `insert(size_t index, Object* o)` -- insert o at index (replace Object* with int, float, bool as needed.)
- `set(size_t index, Object * o)` -- set value at index to o (replace Object* with int, float, bool as needed.)
- `combine(size_t index, Array* other)` -- combine other with this Array, starting at index (replace Array* with IntArray*, FloatArray*, BoolArray* as needed.)

### Removing elements from an Array

- `remove(size_t index)` -- remove object/int/float/bool at index
- `clear()` -- remove all objects from array

### Querying an Array

- `get(size_t index)` -- return the object/int/float/bool at index
- `size()` -- return the size of the Array
- `index_of(Object* o)` -- return the index of o (replace Object* with int, float, bool as needed.)


## Tests
---
The tests can be found in test-array.cpp. If any issues with the tests are found, please submit an issue/pr.
