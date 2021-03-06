src = main.c min.c max.c
project = target
target: $(src)
	gcc $^ -lrt -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
