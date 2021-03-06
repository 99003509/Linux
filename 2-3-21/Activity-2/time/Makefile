src = main.c time.c
project = target
target: $(src)
	gcc $^ -lrt -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
