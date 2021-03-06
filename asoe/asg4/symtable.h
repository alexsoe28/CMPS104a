//Ashley Lavizadeh & Alex Soe

#ifndef __SYMTABLE_H__
#define __SYMTABLE_H__
#include <string>
#include <bitset>
#include <iostream>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;
enum class attr: unsigned { 
    ATTR_void, ATTR_int, ATTR_nullptr_t, ATTR_string,
    ATTR_struct, ATTR_array, ATTR_function, ATTR_variable,
    ATTR_field, ATTR_typeid, ATTR_param, ATTR_lval, ATTR_const, 
    ATTR_vreg, ATTR_vaddr, ATTR_ptr, ATTR_local, ATTR_bitset_size
};
struct symbol;

//names for symbol fields
using attr_bitset = bitset<unsigned(attr::ATTR_bitset_size)>;
using symbol_table = unordered_map<const string*, symbol*>;
using symbol_entry = pair<const string*,symbol*>;

struct location{
    size_t filenr;
    size_t linenr;
    size_t offset;
};

struct symbol {
    attr_bitset attributes;
    symbol_table *fields;
    location lloc;
    size_t block_nr;
    vector<symbol *> *parameters;
};

const string to_string (attr attribute);

string table_to_string(symbol_table* table, int depth);

const string bitset_to_string(attr_bitset attributes);


#endif


