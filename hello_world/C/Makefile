TARGET = hello_world

all: ${TARGET} 

${TARGET}: ${TARGET}.o
	gcc $< -o $@


${TARGET}.o: ${TARGET}.s
	gcc -c $< -o $@

${TARGET}.s: ${TARGET}.i
	gcc -S $< -o $@

${TARGET}.i: ${TARGET}.c
	gcc -E $< -o $@

clean:
	rm -rf \
		${TARGET} \
		${TARGET}.i \
		${TARGET}.s \
		${TARGET}.o
		
