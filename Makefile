
########################
#OBJDIR=objs
#CXX=g++ -m64
#CXXFLAGS=-O3 -Wall

#APP_NAME=wsp

wsp:	wsp.c
	gcc -fopenmp distgen.c -o distgen -lm

