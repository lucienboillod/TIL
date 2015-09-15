To delete all binaries in a directory:

~~~sh
find . -executable -type f | xargs rm
~~~
