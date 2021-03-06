src = copy.c
project = target
target: $(src)
	gcc $^ -lrt -lgtest -lgtest_main -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
