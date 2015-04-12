Init an array:

~~~c
unsigned char zeros[10] = {0};                                          // 0 0 0 0 0 0 0 0 0 0
unsigned char custom[9] = { [0 ... 4] = 42, [5] = 88, [6 ... 9] = 42 }; // 42 42 42 42 88 42 42 42 42
~~~
