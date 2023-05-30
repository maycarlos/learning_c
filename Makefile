C_COMPILER = clang

calculus: calculus.c
	$(C_COMPILER) calculus.c -lm -o calculus
