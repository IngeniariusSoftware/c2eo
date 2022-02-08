#include <stdio.h>
int x = 1;

int main() {
    x = 1 + x;
    printf("%d\n", x);
    x;
    x = x + 1;
    printf("%d\n", x);
    x;
    return 0;
}

/*
+alias org.eolang.gray.cage
+alias c2eo.system.ram
+alias c2eo.system.address
+alias c2eo.stdio.printf

[args...] > global

  * (* cage cage) > allocator
  memory > allocator-index

  ram 8 > g-ram
  ram 0 > s-ram

  address g-ram 0 > g-x

  [args] > main
    seq > @
      ((allocator.get 0).get 0).write g-ram
      g-ram.index.write 0
      ((allocator.get 0).get 1).write s-ram
      s-ram.index.write 1
      allocator-index.write 2
      g-x.set 1
      g-x.set (1.add ((g-x.get 8).as-int))
      printf "%d\n" ((g-x.get 8).as-int)
      g-x.set (((g-x.get 8).as-int).add 1)
      printf "%d\n" ((g-x.get 8).as-int)
      TRUE

  main args > @
*/
