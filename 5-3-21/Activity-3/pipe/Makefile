src = pipe.c pipe1.c pipe2.c
project = target
target: $(src)
	gcc $^ -lrt -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
