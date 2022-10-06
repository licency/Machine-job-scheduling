
sprint: main.o stringvalid.o createList.o addtoList.o validAdd.o invalidFile.o assignJob.o displayList.o
	gcc -o ../bin/sprint.exe ../bin/main.o ../bin/stringvalid.o ../bin/createList.o ../bin/addtoList.o ../bin/validAdd.o ../bin/invalidFile.o ../bin/assignJob.o ../bin/displayList.o
         
projtest: testdriver.o stringvalid.o testsuite.o
	gcc -o ../bin/projtest.exe ../bin/testdriver.o ../bin/testsuite.o -lcunit
         
testdriver.o: ../scr/testdriver.c
	gcc -o ../bin/testdriver.o -c ../src/testdriver.c
              
testsuite.o: ../scr/testsuite.c
	gcc -o ../bin/testsuite.o -c ../src/testsuite.c
             
main.o: ../src/main.c
	gcc -o ../bin/main.o -c ../src/main.c -lpthread
        
stringvalid.o: ../src/stringvalid.c
	gcc -o ../bin/stringvalid.o -c ../src/stringvalid.c -lpthread
               
createList.o: ../src/createList.c
	gcc -o ../bin/createList.o -c ../src/createList.c -lpthread
              
addtoList.o: ../src/addtoList.c
	gcc -o ../bin/addToList.o -c ../src/addtoList.c -lpthread
             
validAdd.o: ../src/validAdd.c
	gcc -o ../bin/validAdd.o -c ../src/validAdd.c -lpthread
            
invalidFile.o: ../src/invalidFile.c
	gcc -o ../bin/invalidFile.o -c ../src/invalidFile.c -lpthread
               
displayList.o: ../src/displayList.c
	gcc -o ../bin/displayList.o -c ../src/displayList.c -lpthread

assignJob.o: ../src/assignJob.c
	gcc -o ../bin/assignJob.o -c ../src/assignJob.c -lpthread

