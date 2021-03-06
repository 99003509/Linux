src = main.c execlp.c
project = target
target: $(src)
	gcc $^ -lrt -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
