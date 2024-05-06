
# VARIABLES

all: trad back


trad:
	bison trad4.y
	gcc trad4.tab.c -o trad4

back:
	bison back4.y
	gcc back4.tab.c -o back4

test:	trad
	sh run_test.sh

my_test: trad
	sh run_my_test.sh

my_error: trad
	sh run_my_error.sh	
fclean: clean clean_dir
	rm -rf trad4 back4
clean_dir:
	rm -rf ./outputs_my_test ./clisp_my_test ./outputs_test ./clisp_test ./outputs_my_test_error ./clisp_my_test_error
clean:
	rm -rf trad4.tab.c back4.tab.c

re: all clean
