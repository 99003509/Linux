src = main.c parallel_sum.c
project = target
target: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: $(project)
	./$^
clean:
	rm *.out
