Main_testdriver.c : Main_testdriver.o check_user.o check_user_suite.o
	gcc -o bin/file.tests bin/Main_testdriver.o bin/check_user.o bin/check_user_suite.o -lcunit 


Main_testdriver.o: src/Main_testdriver.c
	gcc -o bin/Main_testdriver.o -c src/Main_testdriver.c 

check_user.o: src/check_user.c
	gcc -o bin/check_user.o -c src/check_user.c 

check_user_suite.o: src/check_user_suite.c
	gcc -o bin/check_user_suite.o -c src/check_user_suite.c

clean: 
	echo "Cleaning files ..."
	@rm bin/Main_testdriver.o bin/check_user.o bin/check_user_suite.o bin/file.tests
