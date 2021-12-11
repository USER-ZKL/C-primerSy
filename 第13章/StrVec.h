#ifndef STRVEC
#define STRVEC
#include<string>
#include<memory>
using namespace std;
class StrVec{
public:
    StrVec():
    elements(nullptr),first_free(nullptr),cap(nullptr){}
    StrVec(const StrVec&);
    StrVec& operator=(const StrVec&);
    size_t size() const { return first_free-elements;}
    size_t capacity()const {return cap-elements;}
    string *begin() const { return elements;}
    string *end() const { return first_free;}
    void push_back(const string&);
    ~StrVec();

private:
    string *elements;
    string *first_free;
    string *cap;
    static allocator<string> alloc;
    void chk_n_copy(){ if (cap == first_free) reallocate();}
    void reallocate(){};
    void free();
    pair<string*,string*> alloc_n_copy(const string*,const string*);
}
#endif