TARGET := hello_world

${TARGET}: ${TARGET}.o
	ld -o $@ $<

${TARGET}.o: ${TARGET}.s
	nasm -f elf64 -o $@ $<


clean:
	rm -rf ${TARGET}.o ${TARGET}
