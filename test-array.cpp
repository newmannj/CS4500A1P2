#include "array.h"
#include "object.h"
#include "string.h"
#include "assert.h"

// Array Unit Tests
void test_construct_array() {
    Array* arr = new Array();
    assert(arr->size() == 0);
    delete arr;
}

void test_append1() {
    Array* arr = new Array();
    String* s = new String("hello");
    arr->append(s);
    assert(arr->get(0)->equals(s) && arr->size() == 1);
    delete arr;
    delete s;
}

void test_append2() {
    Array* arr = new Array();

    String* s1 = new String("hello");
    String* s2 = new String("alex");

    arr->append(s1);
    arr->append(s2);

    assert(arr->get(0)->equals(s1) && !arr->get(1)->equals(s1));
    delete arr;
    delete s1;
    delete s2;
}

void test_insert() {
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
    This should fail because index is OOB
    * Object* o = new Object();
    * arr->insert(100, o);
    */

    assert(arr->get(0)->equals(s2) &&
    arr->get(1)->equals(s4) &&
    arr->get(2)->equals(s1) &&
    arr->get(3)->equals(s3) &&
    arr->size() == 4);
    delete arr;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
}

void test_combine() {
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
    This should fail because index is OOB
    * Object* o = new Object();
    * arr1->insert(100, arr2);
    */

   assert(arr1->get(0)->equals(s1) &&
    arr1->get(1)->equals(s3) &&
    arr1->get(2)->equals(s4) &&
    arr1->get(3)->equals(s2));
    delete arr1;
    delete arr2;
    delete arr3;
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    delete o1;
    delete o2;
}

void test_remove() {
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

    assert(arr->get(0)->equals(s2) && arr->size() == 1);
    delete arr;
    delete s1;
    delete s2;
}

void test_clear() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");

    arr->append(s1);
    arr->append(s2);

    arr->clear();

    assert(arr->size() == 0);
    delete arr;
    // delete s1;
    // delete s2;
}

void test_get() {
    Array* arr = new Array();
    String* s = new String("hello");
    arr->append(s);

    /*
    This should fail because index is OOB
    * arr->get(5);
    * arr->get(-5);
    */

    assert(arr->get(0)->equals(s));
    delete arr;
    delete s;
}

void test_index_of() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");

    arr->append(s1);
    arr->append(s2);

    assert(arr->index_of(s2) == 1  && arr->index_of(s3) == -1);
    delete arr;
    delete s1;
    delete s2;
    delete s3;
}

void test_contains() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");


    arr->append(s1);
    arr->append(s2);

    assert(arr->contains(s2) == true && arr->contains(s3) == false);
    delete arr;
    delete s1;
    delete s2;
    delete s3;
}

void test_set() {
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

    assert(arr->get(0)->equals(s3));
    delete arr;
    delete s1;
    delete s2;
    delete s3;
}

void test_size() {
    Array* arr = new Array();
    String* s1 = new String("hello");
    String* s2 = new String("alex");
    String* s3 = new String("joe");

    arr->append(s1);
    arr->append(s2);

    assert(arr->size() == 2);
    delete arr;
    delete s1;
    delete s2;
    delete s3;
}

void test_equals() {
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

   assert(arr1->equals(arr3) && !arr1->equals(arr2));
   delete arr1;
   delete arr2;
   delete arr3;
   delete s1;
   delete s2;
   delete s3;
   delete s4;
   delete s5;
   delete s6;
}

IntArray* ia;
IntArray* ia2;

// IntArray Tests
void test_construct_int() {
    ia = new IntArray();
    delete ia;
}

void test_append_int1() {
    ia = new IntArray();
    ia->append(0);
    assert(ia->get(0) == 0);
    assert(ia->size() == 1);
    delete ia;
}

void test_append_int2() {
    ia = new IntArray();
    ia->append(0);
    ia->append(1);
    ia->append(2);
    assert(ia->get(2) == 2);
    assert(ia->size() == 3);
    delete ia;
}

void test_insert_int() {
    ia = new IntArray();
    ia->insert(0, 0);
    ia->insert(1, 1);
    ia->insert(2, 2);
    ia->insert(3, 3);
    assert(ia->get(0) == 0);
    assert(ia->get(1) == 1);
    assert(ia->get(2) == 2);
    assert(ia->get(3) == 3);
    delete ia;
}

void test_combine_int() {
    ia = new IntArray();
    ia2 = new IntArray();
    ia->append(0);
    ia->append(1);
    ia2->append(2);
    ia2->append(3);
    ia->combine(2, ia2);
    assert(ia->size() == 4);
    assert(ia->get(3) == 3);
    assert(ia->get(0) == 0);
}

void test_remove_int() {
    ia = new IntArray();
    ia->append(0);
    ia->remove(0);
    assert(ia->size() == 0);
    ia->append(0);
    ia->append(1);
    ia->remove(0);
    assert(ia->size() == 1);
    assert(ia->get(0) == 1);
    delete ia;
}

void test_clear_int() {
    ia = new IntArray();
    for(int i = 0; i < 10; i++) {
        ia->append(0);
    }
    assert(ia->size() == 10);
    ia->clear();
    assert(ia->size() == 0);
    delete ia;
}

void test_get_int() {
    ia = new IntArray();
    for(int i = 0; i < 10; i++) {
        ia->append(i);
    }
    for(int i = 9; i >= 0; i--) {
        assert(ia->get(i) == i);
    }
    delete ia;
}

void test_index_of_int() {
    ia = new IntArray();
    ia->append(0);
    assert(ia->index_of(0) == 0);
    ia->append(0);
    assert(ia->index_of(0) == 0);
    delete ia;
}

void test_contains_int() {
    ia = new IntArray();
    ia->append(-1);
    ia->append(-5);
    ia->append(0);
    assert(ia->contains(-1));
    delete ia;
}

void test_set_int() {
    ia = new IntArray();
    ia->append(150);
    ia->append(12555);
    ia->append(-4);
    assert(ia->get(0) == 150);
    assert(ia->set(0, 2) == 150);
    assert(ia->get(0) == 2);
    delete ia;
}

void test_equals_hash_int() {
    ia = new IntArray();
    ia2 = new IntArray();
    for(int i = 0; i < 10; i++) {
        ia->append(i);
        ia2->append(i);
    }
    assert(ia->equals(ia2));
    assert(ia->hash() == ia2->hash());
    ia->remove(0);
    assert(!ia->equals(ia2));
    assert(ia->hash() != ia2->hash());
    delete ia;
    delete ia2;
}

FloatArray* fa;
FloatArray* fa2;

// FloatArray Tests
void test_construct_float() {
    fa = new FloatArray();
    delete fa;
}

void test_append_float1() {
    fa = new FloatArray();
    fa->append(3.4);
    return ;
    assert(fa->get(0) - 3.4 < 0.001);
    assert(fa->size() == 1);
    delete fa;
}

void test_append_float2() {
    fa = new FloatArray();
    fa->append(0.3);
    fa->append(-2.3);
    fa->append(15.3);
    assert(fa->get(2) - 15.3 < 0.001);
    assert(fa->size() - 3 < 0.001);
    delete fa;
}

void test_insert_float() {
    fa = new FloatArray();
    fa->insert(4.3, 0);
    fa->insert(1.2, 1);
    fa->insert(-352.3, 2);
    fa->insert(24.353, 3);
    assert(fa->get(0) - 4.3 < 0.001);
    assert(fa->get(1) - 1.2 < 0.001);
    assert(fa->get(2) - -352.3 < 0.001);
    assert(fa->get(3) - 24.353 < 0.001);
    delete fa;
}

void test_combine_float() {
    fa = new FloatArray();
    fa2 = new FloatArray();
    fa->append(0.323);
    fa->append(1.213);
    fa2->append(2.325);
    fa2->append(3.991);
    fa->combine(2, fa2);
    assert(fa->size() == 4);
    assert(fa->get(3) - 3.991 < 0.001);
    assert(fa->get(0) - 0.323 < 0.001);
}

void test_remove_float() {
    fa = new FloatArray();
    fa->append(342.1);
    fa->remove(0);
    assert(fa->size() == 0);
    fa->append(24.3);
    fa->append(241.203);
    fa->remove(0);
    assert(fa->size() == 1);
    assert(fa->get(0) - 241.203 < 0.001);
    delete fa;
}

void test_clear_float() {
    fa = new FloatArray();
    for(int i = 0; i < 10; i++) {
        fa->append(1.0);
    }
    assert(fa->size() == 10);
    fa->clear();
    assert(fa->size() == 0);
    delete fa;
}

void test_get_float() {
    fa = new FloatArray();
    for(float f = 0.0; f < 10.0; f++) {
        fa->append(f);
    }
    for(float f = 9.0; f >= 0.0; f--) {
        assert(fa->get(f) == f);
    }
    delete fa;
}

void test_index_of_float() {
    fa = new FloatArray();
    fa->append(123.1);
    assert(fa->index_of(123.1) == 0);
    fa->append(123.1);
    assert(fa->index_of(123.1) == 0);
    delete fa;
}

void test_contains_float() {
    fa = new FloatArray();
    fa->append(-214.2);
    fa->append(-315.2);
    fa->append(234.12);
    assert(fa->contains(234.12));
    assert(fa->contains(-315.2));
    delete fa;
}

void test_set_float() {
    fa = new FloatArray();
    fa->append(150.3);
    fa->append(12555.2);
    fa->append(-4.3);
    assert(fa->get(0) - 150.3 < 0.001);
    assert(fa->set(0, 231.2) - 150.3 < 0.001);
    assert(fa->get(0) - 231.2 < 0.001);
    delete fa;
}

void test_equals_hash_float() {
    fa = new FloatArray();
    fa2 = new FloatArray();
    for(float f = 0.0; f < 10.0; f++) {
        fa->append(f);
        fa2->append(f);
    }
    assert(fa->equals(fa2));
    assert(fa->hash() == fa2->hash());
    fa->remove(0);
    assert(!fa->equals(fa2));
    assert(fa->hash() != fa2->hash());
    delete fa;
    delete fa2;
}


BoolArray* ba;
BoolArray* ba2;

// BoolArray Tests
void test_construct_bool() {
    ba = new BoolArray();
    delete ba;
}

void test_append_bool1() {
    ba = new BoolArray();
    ba->append(false);
    assert(ba->get(0) == false);
    assert(ba->size() == 1);
    delete ba;
}

void test_append_bool2() {
    ba = new BoolArray();
    ba->append(true);
    ba->append(false);
    ba->append(true);
    assert(ba->get(2) == true);
    assert(ba->size() == 3);
    delete ba;
}

void test_insert_bool() {
    ba = new BoolArray();
    ba->insert(true, 0);
    ba->insert(false, 1);
    ba->insert(false, 2);
    ba->insert(true, 3);
    assert(ba->get(0) == true);
    assert(ba->get(1) == false);
    assert(ba->get(2) == false);
    assert(ba->get(3) == true);
    delete ba;
}

void test_combine_bool() {
    ba = new BoolArray();
    ba2 = new BoolArray();
    ba->append(true);
    ba->append(true);
    ba2->append(false);
    ba2->append(false);
    ba->combine(2, ba2);
    assert(ba->size() == 4);
    assert(ba->get(3) == false);
    assert(ba->get(0) == true);
}

void test_remove_bool() {
    ba = new BoolArray();
    ba->append(true);
    ba->remove(0);
    assert(ba->size() == 0);
    ba->append(false);
    ba->append(false);
    ba->remove(0);
    assert(ba->size() == 1);
    assert(ba->get(0) == false);
    delete ba;
}

void test_clear_bool() {
    ba = new BoolArray();
    for(int i = 0; i < 10; i++) {
        ba->append(false);
    }
    assert(ba->size() == 10);
    ba->clear();
    assert(ba->size() == 0);
    delete ba;
}

void test_get_bool() {
    ba = new BoolArray();
    for(int i = 0; i < 10; i++) {
        ba->append(true);
    }
    for(int i = 9; i >= 0; i--) {
        assert(ba->get(i) == true);
    }
    delete ba;
}

void test_index_of_bool() {
    ba = new BoolArray();
    ba->append(true);
    assert(ba->index_of(true) == 0);
    ba->append(true);
    assert(ba->index_of(true) == 0);
    delete ba;
}

void test_contains_bool() {
    ba = new BoolArray();
    ba->append(false);
    ba->append(false);
    ba->append(true);
    assert(ba->contains(true));
    assert(ba->contains(false));
    delete ba;
}

void test_set_bool() {
    ba = new BoolArray();
    ba->append(false);
    ba->append(true);
    ba->append(true);
    assert(ba->get(0) == false);
    assert(ba->set(0, true) == false);
    assert(ba->get(0) == true);
    delete ba;
}

void test_equals_hash_bool() {
    ba = new BoolArray();
    ba2 = new BoolArray();
    for(int i = 0; i < 10; i++) {
        ba->append(true);
        ba2->append(true);
    }
    assert(ba->equals(ba2));
    assert(ba->hash() == ba2->hash());
    ba->remove(0);
    assert(!ba->equals(ba2));
    assert(ba->hash() != ba2->hash());
    delete ba;
    delete ba2;
}

int main() {

    // Array Tests
    test_construct_array();
    test_append1();
    test_append2();
    test_insert();
    test_combine();
    test_remove();
    test_clear();
    test_get();
    test_index_of();
    test_contains();
    test_set();
    test_size();
    test_equals();

    // IntArray Tests
    test_construct_int();
    test_append_int1();
    test_append_int2();
    test_insert_int();
    test_combine_int();
    test_remove_int();
    test_clear_int();
    test_get_int();
    test_index_of_int();
    test_contains_int();
    test_set_int();
    test_equals_hash_int();

    // FloatArray Tests
    test_construct_float();
    test_append_float1();
    test_append_float2();
    test_insert_float();
    test_combine_float();
    test_remove_float();
    test_clear_float();
    test_get_float();
    test_index_of_float();
    test_contains_float();
    test_set_float();
    test_equals_hash_float();

    // BoolArray Tests
    test_construct_bool();
    test_append_bool1();
    test_append_bool2();
    test_insert_bool();
    test_combine_bool();
    test_remove_bool();
    test_clear_bool();
    test_get_bool();
    test_index_of_bool();
    test_contains_bool();
    test_set_bool();
    test_equals_hash_bool();

}