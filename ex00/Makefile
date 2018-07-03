cc = g++
prom = my_cat
deps = my_cat.h
obj = my_cat.o

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)
%.o: %.c $(deps)
	$(cc) -c $< -o $@
clean:
	rm -rf $(obj) $(prom)