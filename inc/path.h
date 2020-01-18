#ifndef PATH_H
#define PATH_H
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <fcntl.h>
#include <stdio.h>
#include <malloc/malloc.h>
#define MAX_INT 2147483647
#define MIN_INT -2147483648

void mx_printchar(char c);
void mx_printint(int n);
char *mx_file_to_str(const char *file);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
void mx_printint(int n);
char *mx_strnew(const int size);
char **mx_strsplit(const char *s, char c);
int mx_count_words(const char *str, char c);
int mx_strcmp(const char *s1, const char *s2);
void mx_del_strarr(char ***arr);
void mx_strdel(char **str);
char *mx_strdup(const char *str);
void mx_error_printint(int n);
char *mx_change_signs_to_32(const char *src);
int mx_char_strcmp(char *s1, char *s2);
int **mx_create_matrix(int length);
void mx_create_rez_matrix(int **int_arr, int len, char **ch_arr, char **isl);
int **mx_create_s(int kol_graphs);
int mx_find_short_way(int **matrix, int **s, int length, int **path);
int mx_get_index_of_island(char *str, int length, char **islands);
int mx_get_index_of_min(int len, int **s);
int mx_get_size_of_2mass(char **ch_arr);
char **mx_islands_in_mass_of_str (char **file);
int mx_kol_of_islands(char **file);
int mx_kol_of_rows(char *ready_out);
int mx_path_atoi(char *str);
void mx_copy_rez_matrix(int **int_matrix, int length, int **copy_matrix);
void mx_dup_int_arr(int *s, int *matrix, int length);
bool mx_check_on_trig(int **s, int length);
void mx_error_printstr(const char *s);
void mx_print_error_char(char c);
bool mx_error_check_2(const char *argv);
bool mx_error_check_1(int argc);
bool mx_error_check_3(char **arr);
bool mx_error_check_4(char **arr, int length);
bool mx_error_check_5(char **arr, int length);
bool mx_error_check_6(char *mx);
bool mx_error_check_incorrect_symbols(char *arr);
bool mx_error_check_on_null(char **arr, int length);
bool mx_error_check_incorrect_kol_islands(char **arr, int kol_graphs);
char **mx_new_arr(const char *file);
void mx_free_unused_memory_1(char *out, char **arr);
bool mx_part_of_main_1(char *ready_out, char **ready_arr);
void mx_func_for_reconstruct_path(int **s, int *length, int **path);
int mx_int_strcmp(int *sino, int *golka, int len1, int len2);

void mx_sort_pathes(int **path, int len_of_arr, int len);
void mx_out_n(int *path, int len, char **islands, int length);
void mx_output(int **mx, int **s, int len, char **isl);
void mx_fucking_function(int **matrix, int **s, int *len, int **path);
bool mx_error_check(char **arr, int length);
#endif
