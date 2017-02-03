SRC = $(wildcard *.f90)
#------Linux-----------
#place the first two digits of the python version
#to be used in VER (e.g. 2.7 for python 2.7.*)
#VER = 3.6
VER = 
methods: $(SRC)
	f2py$(VER) -c -m $@ $^
#------Windows---------
#if using windows there is no VER value
#use FLAGS if executing on windows
#FLAGS = --fcompiler=gnu95 --compiler=mingw32
#methods: $(SRC)
#	f2py.py -c $(FLAGS) -m $@ $^

clean:
	rm -f *.o *.so
