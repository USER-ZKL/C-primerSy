test : test.o StrVec.o
	g++ test.o StrVec.o -o test
test.o : test.cpp
	g++ test.cpp -c test.o
StrVec.o : StrVec.h StrVec.cpp
	g++ StrVec.h StrVec.cpp -c StrVec.o
.PHONY : clean
clean : 
	rm test.o StrVec.o 
