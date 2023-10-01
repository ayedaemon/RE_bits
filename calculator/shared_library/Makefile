

.PHONY:
calc: calc.o libarithmatic.so
	gcc -o calc calc.c -L. -larithmatic

.PHONY:
lib%.so: %.c
	gcc --shared -o $@ $<

.PHONY:
clean:
	rm -rfv *.so *.o calc
