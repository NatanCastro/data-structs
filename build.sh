set -xe

CC="${CXX:-cc}"
PKGS=""
CFLAGS="-Wall -Wextra -std=c99 -pedantic -ggdb"
SRC="./src/main.c ./src/linked_list.c ./src/binary_tree.c"

$CC $CFLAGS $(pkg-config --cflags $PKGS) -o main $SRC $(pkg-config --libs $PKGS)
