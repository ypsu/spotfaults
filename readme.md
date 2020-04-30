# spotfault challenges

## challenges

- [double](double/readme.md)
- [fibonacci](fibonacci/readme.md)
- [gcd](gcd/readme.md)
- [setdiff](setdiff/readme.md)
- [rmprefix](rmprefix/readme.md)
- [bsearch](bsearch/readme.md)
- [onlyhalf](onlyhalf/readme.md)

## explanation

this is a collection of problem and a solution pairs. the catch is that the
solution always has a bug. your job, should you choose to accept it, is to spot
the fault!

the problem part is something you would on a typical programming contest site.
it consists of a problem statement part, and provides example input and output.
each input has exactly one correct output and the solution must produce that
output.

all solutions are written in standard c99. you can assume that the provided
solution passes the provided examples. the solution is expected to run under 64
mib ram and under 1 seconds on a reasonably modern machine (e.g. newest
raspberry pi). assume that the solution runs on a linux machine and it shouldn't
matter if it's 32 or 64 bit. assume that the `int` type is always 32 bit long.

the bugs are some typical errors the contestants make. there are multiple types
of bugs which might appear here. typos, off by one errors, stack overflows, out
of memory errors, time limit errors, using a completely wrong algorithm, etc.
the problems and bugs might or might not have been inspired by real events. the
bugs are platform independent so it should appear both on a 32 and 64 bit
environment.

for each challenge, your task is to produce an input for which the provided
solution gives wrong output or crashes. don't "guess" or brute-force what might
have gone wrong. don't debug. you are supposed to find the bug by pure eye
inspection. just print each challenge and do it from your sofa if you find
looking up the solution too tempting.

each task comes with a checker application into which you can enter your input
and it will tell you if your solved the challenge correctly or not. first, it
will verify that your input matches the problem constraints. then it runs the
correct solution against your input. then it runs the buggy version against your
input. if it's different, you correctly solved the challenge.

each challenge also contains the solution in case you get too frustrated. this
includes both the corrected source code and an input which triggers the bug. to
see the actual bug, just diff the buggy source against the correct source.

each problem has a subdirectory containing all the checker, buggy and the
correct solutions. the repo's root directory contains a bash script called
`check` which you should use to test your input. if used interactively, use
`ctrl-d` to signal the end-of-file event. here's how the interactions should
look like:

```
bash$ ./check double
-1
bad input, too small number.
bash$ ./check double
10
<ctrl-d>
challenge incorrect, the buggy solution returned correct result.
bash$ ./check double  # you can run it like this.
2000000000
challenge successful, the buggy solution had wrong answer.
bash$ ./check double < double/input  # this is the sample solution.
challenge successful, the buggy solution had wrong answer.
bash$ diff -u double/{buggy.c,correct.c}  # explanation of the bug.
--- double/buggy.c      2019-07-07 17:17:42.010000000 +0100
+++ double/correct.c    2019-07-07 17:17:42.060000000 +0100
@@ -1,8 +1,9 @@
 #include <stdio.h>

 int main(void) {
-  int n;
-  scanf("%d", &n);
-  printf("%d\n", 2 * n);
+  // the good old integer overflow.
+  long long n;
+  scanf("%lld", &n);
+  printf("%lld\n", 2 * n);
   return 0;
 }
```

you need gcc and linux to compile and run the checkers.

let me know (e.g. through github issues) if you like this sort of challenges,
and i'll see if i can add more.
