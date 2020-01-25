#include "array.h"
#include "object.h"
#include "string.h"

// Array Unit Tests
// All tests assume an Array of Strings
void test_construct_array() {
    Array* arr = new Array();
}

void test_destruct_array() {}

bool test_append1() {
    Array* arr = new Array();
    String* s = new String("hello");
    arr->append(s);
    return arr->get(0)->equals(s) && arr->size() == 1;
}

bool test_append2() {
    Array* arr = new Array();

    String* s1 = new String("hello");
    String* s2 = new String("alex");

    arr->append(s1);
    arr->append(s2);


    /*
    This should fail because the Array is not of Object elements
    * Object* o = new Object();
    * arr->append(o);
    */

    return arr->get(0)->equals(s1) && !arr->get(1)->equals(s1);
}

bool test_insert() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");
    String* s4 = new String("hoo");

    arr->insert(0, s1); // Insert at pos 0 of empty list
    arr->insert(0, s2); // Insert at beginning of list
    arr->insert(2, s3); // Insert at end of list
    arr->insert(1, s4); // Insert in middle of list

    /*
    This should fail because the Array is not of Object elements
    * Object* o = new Object();
    * arr->insert(1, o);
    */

   /*
    This should fail because index is OOB
    * Object* o = new Object();
    * arr->insert(100, o);
    */

    return arr->get(0)->equals(s2) &&
    arr->get(1)->equals(s4) &&
    arr->get(2)->equals(s1) &&
    arr->get(3)->equals(s3) &&
    arr->size() == 4;
}

bool test_combine() {
    Array* arr1 = new Array();
    Array* arr2 = new Array();
    Array* arr3 = new Array();

    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");
    String* s4 = new String("hoo");

    Object* o1 = new Object();
    Object* o2 = new Object();

    arr1->append(s1);
    arr1->append(s2);
    arr2->append(s3);
    arr2->append(s4);

    arr3->append(o1);
    arr3->append(o2);

    arr1->combine(1, arr2);

    /*
    This should fail because the Array is not of Object elements
    * arr1->combine(1, arr3);
    */

   /*
    This should fail because index is OOB
    * Object* o = new Object();
    * arr1->insert(100, arr2);
    */

   return arr1->get(0)->equals(s1) &&
    arr1->get(1)->equals(s3) &&
    arr1->get(2)->equals(s4) &&
    arr1->get(3)->equals(s2);
}

bool test_remove() {
    Array* arr = new Array();

    String* s1 = new String("hello");
    String* s2 = new String("alex");

    arr->append(s1);
    arr->append(s2);

    arr->remove(0);

    /*
    This should fail because index is OOB
    * arr->remove(5);
    * arr->remove(-5);
    */

    return arr->get(0)->equals(s2) && arr->size() == 1;
}

bool test_clear() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");

    arr->append(s1);
    arr->append(s2);

    arr->clear();

    return arr->size() == 0;
}

bool test_get() {
    Array* arr = new Array();
    String* s = new String("hello");
    arr->append(s);

    /*
    This should fail because index is OOB
    * arr->get(5);
    * arr->get(-5);
    */

    return arr->get(0)->equals(s);
}

bool test_index_of() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");

    arr->append(s1);
    arr->append(s2);

    return arr->index_of(s2) == 1  && arr->index_of(s3) == -1;
}

bool test_contains() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");


    arr->append(s1);
    arr->append(s2);

    return arr->contains(s2) == true && arr->contains(s3) == false;
}

bool test_set() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");

    arr->append(s1);
    arr->append(s2);

    arr->set(0, s3);

    /*
    This should fail because index is OOB
    * arr->set(5, s3);
    */

    /*
    This should fail because Object is of wrong type
    * arr->set(0, new Object());
    */

    return arr->get(0)->equals(s3);
}

bool test_size() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");

    arr->append(s1);
    arr->append(s2);

    return arr->size() == 2;
}

bool test_equals() {
    Array* arr1 = new Array();
    Array* arr2 = new Array();
    Array* arr3 = new Array();

    String* s1 = new String("hello");
    String* s2 = new String("alex");

    String* s3 = new String("joe");
    String* s4 = new String("hoo");

    Object* s5 = new String("hello");
    Object* s6 = new String("alex");

    arr1->append(s1);
    arr1->append(s2);

    arr2->append(s3);
    arr2->append(s4);

    arr3->append(s5);
    arr3->append(s6);

   return arr1->equals(arr3) && !arr1->equals(arr2);
}