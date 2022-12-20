CC = gcc

default: compile

compile:
	$(CC) -v main.c -fgcse-after-reload \
				  -fipa-cp-clone \
                  -floop-interchange \
                  -floop-unroll-and-jam \
                  -fpeel-loops \
                  -fpredictive-commoning \
                  -fsplit-loops \
                  -fsplit-paths \
                  -ftree-loop-distribution \
                  -ftree-partial-pre \
                  -funswitch-loops \
                  -fvect-cost-model=dynamic \
                  -fversion-loops-for-strides \
                  -o main.bin
