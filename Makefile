default:
	lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o dist/main.o src/main.c
	lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o dist/main.gb dist/main.o
