cc = g++
prom = SickKoala
deps = SickKoala.h
obj = SickKoala.o

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)
%.o: %.c $(deps)
	$(cc) -c $< -o $@
clean:
	rm -rf $(obj) $(prom)