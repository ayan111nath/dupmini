PROJ_NAME = Calculator
BUILD_DIR = build
TEST_PROJ_NAME = Test_$(PROJ_NAME)

INC = -Iinc\
-Isrc\
-Iunity

SRC = main.c

TEST_SRC =test/test_calculator.c\
unity/unity.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJ_NAME).$(EXEC)

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

all: $(SRC) $(BUILD_DIR)
	gcc -I $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

testing: $(TEST_SRC)
	gcc $^ $(INC)  -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))



coverageCheck:$(testing)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

valgrind :
	valgrind $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

	
$(BUILD_DIR):
	mkdir $(BUILD_DIR)



clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)