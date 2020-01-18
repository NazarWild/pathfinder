NAME = pathfinder

LIB = libmx/libmx.a

HEADER = inc/path.h

HEADERS = path.h

SRC = src/main.c \
	src/mx_change_signs_to_32.c \
	src/mx_char_strcmp.c \
	src/mx_check_on_trig.c \
	src/mx_copy_rez_matrix.c \
	src/mx_create_rez_matrix.c \
	src/mx_create_matrix.c \
	src/mx_create_s.c \
	src/mx_dup_int_arr.c \
	src/mx_error_check_1.c \
	src/mx_error_check_2.c \
	src/mx_error_check_3.c \
	src/mx_error_check_4.c \
	src/mx_error_check_5.c \
	src/mx_error_check_6.c \
	src/mx_error_check_incorrect_kol_islands.c \
	src/mx_error_check_incorrect_symbols.c \
	src/mx_error_check_on_null.c \
	src/mx_error_printint.c \
	src/mx_error_printstr.c \
	src/mx_find_short_way.c \
	src/mx_free_unused_memory_1.c \
	src/mx_get_index_of_island.c \
	src/mx_get_index_of_min.c \
	src/mx_get_size_of_2mass.c \
	src/mx_islands_in_mass_of_str.c \
	src/mx_kol_of_islands.c \
	src/mx_kol_of_rows.c \
	src/mx_new_arr.c \
	src/mx_part_of_main_1.c \
	src/mx_path_atoi.c \
	src/mx_print_error_char.c \
	src/mx_func_for_reconstruct_path.c \
	src/mx_int_strcmp.c \
	src/mx_sort_pathes.c \
	src/mx_output.c \
	src/mx_out_n.c \
	src/mx_fucking_function.c \
	src/mx_error_check.c

OUT = main.o \
	mx_change_signs_to_32.o \
	mx_char_strcmp.o \
	mx_check_on_trig.o \
	mx_copy_rez_matrix.o \
	mx_create_rez_matrix.o \
	mx_create_matrix.o \
	mx_create_s.o \
	mx_dup_int_arr.o \
	mx_error_check_1.o \
	mx_error_check_2.o \
	mx_error_check_3.o \
	mx_error_check_4.o \
	mx_error_check_5.o \
	mx_error_check_6.o \
	mx_error_check_incorrect_kol_islands.o \
	mx_error_check_incorrect_symbols.o \
	mx_error_check_on_null.o \
	mx_error_printint.o \
	mx_error_printstr.o \
	mx_find_short_way.o \
	mx_free_unused_memory_1.o \
	mx_get_index_of_island.o \
	mx_get_index_of_min.o \
	mx_get_size_of_2mass.o \
	mx_islands_in_mass_of_str.o \
	mx_kol_of_islands.o \
	mx_kol_of_rows.o \
	mx_new_arr.o \
	mx_part_of_main_1.o \
	mx_path_atoi.o \
	mx_print_error_char.o \
	mx_func_for_reconstruct_path.o \
	mx_int_strcmp.o \
	mx_sort_pathes.o \
	mx_output.o \
	mx_out_n.o \
	mx_fucking_function.o \
	mx_error_check.o


CFLAGS = -std=c11 -Werror -Wall -Wextra -Wpedantic

INC = inc/path.h

all: install clean

install:
	@make -C libmx install		
	@clang $(CFLAGS) -c $(SRC)
	@clang $(CFLAGS) $(LIB) $(OUT) -I $(HEADER) -o $(NAME)
	@mkdir -p obj
	@cp $(OUT) obj/
	@rm -rf $(OUT)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@make -C libmx uninstall	
	@rm -rf obj

reinstall: uninstall install






