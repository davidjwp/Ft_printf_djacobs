#!/bin/bash
alias CC='gcc'
alias CFLAGS='-wall -Wextra -Werror'
alias AR='../../*.a'
alias MAIN='c_test.c'
alias comp_ins="$CC $CFLAGS $AR $MAIN -o $FILE && ./$FILE.out  1 > $FILE"

i=0
for /L $i != 8 %d 
do 
    ./ffile.out $i  > test1
    i++
done

diff test1 ptest1
diff test2 ptest2
diff test3 ptest3
diff test1 ptest1
diff test1 ptest1
diff test1 ptest1
diff test1 ptest1
diff test1 ptest1