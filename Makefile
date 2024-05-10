
# VARIABLES

all: trad back


trad:
	bison trad.y
	gcc trad.tab.c -o trad

back:
	bison back.y
	gcc back.tab.c -o back

test:	trad
	rm -rf ./outputs_test ./clisp_test
	sh run_test.sh

test_frontend: trad
	rm -rf ./outputs_frontend ./clisp_frontend ./cout_frontend
	sh run_frontend.sh

test_frontend_error: trad
	rm -rf ./outputs_frontend_error ./clisp_frontend_error
	sh run_frontend_error.sh
	
test_backend: trad back
	rm -rf ./trad_backend ./back_backend ./gforth_backend ./cout_backend
	sh run_backend.sh

fclean: clean clean_dir
	rm -rf trad back cout

clean_dir:
	rm -rf ./outputs_frontend ./clisp_frontend ./outputs_test ./clisp_test ./outputs_frontend_error ./clisp_frontend_error ./trad_backend ./back_backend ./gforth_backend ./cout_frontend ./cout_backend
	
clean:
	rm -rf trad.tab.c back.tab.c

re: all clean
