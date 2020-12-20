rm -rf EXPECTED OUT TESTS deepthought
gcc  printf_main.c libftprintf.a
./a.out > OUT
gcc  main.c gnl.a
./a.out
rm -rf EXPECTED OUT TESTS ./a.out
