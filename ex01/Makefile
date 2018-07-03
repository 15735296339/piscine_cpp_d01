cc = g++
prom = my_convert_temp
deps = my_convert_temp.h
obj = my_convert_temp.o

$(prom): $(obj)
	$(cc) -o $(prom) $(obj)
%.o: %.c $(deps)
	$(cc) -c $< -o $@
clean:
	rm -rf $(obj) $(prom)