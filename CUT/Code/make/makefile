sprint1: main.o stringvalid.o createList.o addtoList.o validAdd.o invalidFile.o assignJob.o displayList.o
         gcc -o ../bin/sprint1.exe ../bin/main.o ../bin/stringvalid.o ../bin/createList.o ../bin/addtoList.o ../bin/validAdd.o ../bin/invalidFile.o ../bin/assignJob.o ../bin/displayList.o
         
projtest: testdriver.o stringvalid.o testsuite.o
          gcc -o ../bin/projtest.exe ../bin/testdriver.o ../bin/testsuite.o -lcunit
         
testdriver.o: ../scr/testdriver.c
              gcc -o ../obj/testdriver.o -c ../src/testdriver.c
              
testsuite.o: ../scr/testsuite.c
             gcc -o ../obj/testsuite.o -c ../src/testsuite.c
             
main.o: ../src/main.c
        gcc -o ../obj/main.o -c ../src/main.c -lpthread
        
stringvalid.o: ../src/stringvalid.c
               gcc -o ../obj/stringvalid.o -c ../src/stringvalid.c -lpthread
               
createList.o: ../src/createList.c
              gcc -o ../obj/createList.o -c ../src/createList.c -lpthread
              
addtoList.o: ../src/addtoList.c
             gcc -o ../obj/addToList.o -c ../src/addtoList.c -lpthread
             
validAdd.o: ../src/validAdd.c
            gcc -o ../obj/validAdd.o -c ../src/validAdd.c -lpthread
            
invalidFile.o: ../src/invalidFile.c
               gcc -o ../obj/invalidFile.o -c ../src/invalidFile.c -lpthread
               
displayList.o: ../src/displayList.c
               gcc -o ../obj/displayList.o -c ../src/displayFile.c -lpthread
               
assignJob.o: ../src/assignJob.c
             gcc -o ../obj/assignJob.o -c ../src/assignJob.c -lpthread
             
clean:
       rm ./bin/*.exe ./obj/*.o invalidFile.txt Schedule1.txt Schedule2.txt Schedule3.txt
