#include"StrVec.h"
#include<utility>
allocator<string> StrVec::alloc;
void StrVec::push_back(const string& s) {
	chk_n_copy();
	alloc.construct(first_free, s);
}
pair<string*, string*> StrVec::alloc_n_copy(const string *b, const string *e) {
	auto data = alloc.allocate(e - b);
	return { data,uninitialized_copy(b,e,data) };
}
void StrVec::free() {
	if (elements) {
		for (auto p = first_free; p != elements;) {
			alloc.destroy(--p);
		}
		alloc.deallocate(elements, cap - elements);
	}
}
StrVec::StrVec(const StrVec& sv) {
	auto data = alloc_n_copy(sv.begin(), sv.end());
	elements = data.first;
	first_free = data.second;
}
StrVec::~StrVec() { free(); }
StrVec& StrVec::operator=(const StrVec& sv) {
	auto data = alloc_n_copy(sv.begin(), sv.end());
	free();
	elements = data.first;
	first_free = data.second;
	return *this;
}
void StrVec::reallocate() {
	auto newcapacity = size() ? size() * 2 : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i) {
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}
