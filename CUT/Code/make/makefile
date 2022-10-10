
sprint: main.o stringvalid.o createList.o addtoList.o validAdd.o invalidFile.o assignJob.o displayList.o
	gcc -o ../bin/sprint.exe ../obj/main.o ../obj/stringvalid.o ../obj/createList.o ../obj/addtoList.o ../obj/validAdd.o ../obj/invalidFile.o ../obj/assignJob.o ../obj/displayList.o
         
projtest: testdriver.o stringvalid.o testsuite.o
	gcc -o ../bin/projtest.exe ../obj/testdriver.o ../obj/testsuite.o ../obj/stringvalid.o -lcunit
         
testdriver.o: ../src/testdriver.c
	gcc -o ../obj/testdriver.o -c ../src/testdriver.c -lcunit
              
testsuite.o: ../src/testsuite.c
	gcc -o ../obj/testsuite.o -c ../src/testsuite.c -lcunit
             
main.o: ../src/main.c
	gcc -o ../obj/main.o -c ../src/main.c -lpthread -Wall
        
stringvalid.o: ../src/stringvalid.c
	gcc -o ../obj/stringvalid.o -c ../src/stringvalid.c -lpthread -Wall
               
createList.o: ../src/createList.c
	gcc -o ../obj/createList.o -c ../src/createList.c -lpthread -Wall
              
addtoList.o: ../src/addtoList.c
	gcc -o ../obj/addtoList.o -c ../src/addtoList.c -lpthread -Wall
             
validAdd.o: ../src/validAdd.c
	gcc -o ../obj/validAdd.o -c ../src/validAdd.c -lpthread -Wall
            
invalidFile.o: ../src/invalidFile.c
	gcc -o ../obj/invalidFile.o -c ../src/invalidFile.c -lpthread -Wall
               
displayList.o: ../src/displayList.c
	gcc -o ../obj/displayList.o -c ../src/displayList.c -lpthread -Wall

assignJob.o: ../src/assignJob.c
	gcc -o ../obj/assignJob.o -c ../src/assignJob.c -lpthread -Wall

