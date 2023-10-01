CC := gcc
CFLAGS := -Wall -Wextra

BYTE=
INDEX=

TARGET_EXEC := argv_printer
${TARGET_EXEC}: ${TARGET_EXEC}.c
	${CC} ${CFLAGS} -o $@ $<
	cp $@ $@.bkup


all: ${TARGET_EXEC} ${TARGET_EXEC}.header ${TARGET_EXEC}.ident ${TARGET_EXEC}.magic 


.PHONY: clean
clean:
	rm -fv $(filter-out ${TARGET_EXEC}.c Makefile, $(wildcard *))

${TARGET_EXEC}.header: ${TARGET_EXEC}
	@ dd if=$^ of=$@ bs=1 count=64 2>/dev/null
	
${TARGET_EXEC}.ident: ${TARGET_EXEC}.header
	@ dd if=$^ of=$@ bs=1 count=16 2>/dev/null

${TARGET_EXEC}.magic: ${TARGET_EXEC}.ident
	@ dd if=$^ of=$@ bs=1 count=4 2>/dev/null


${TARGET_EXEC}.header.updated: ${TARGET_EXEC}.header
	hexdump -C $^
	@ dd if=$^ of=$@ bs=1 count=${INDEX} 2>/dev/null
	@ echo -n -e '\x${BYTE}' >> $@
	@ dd if=$^ skip=$(shell echo $(INDEX) + 1 | bc) bs=1 2>/dev/null >> $@
	hexdump -C $@
