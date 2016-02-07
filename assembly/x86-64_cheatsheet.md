x86-64 Cheatsheet
=================

Call a function
---------------

We can pass arguments to the function with (in order) %rdi, %rsi, %rdx, %rcx, %r8, %r9. Additional arguments are passed via
the stack.

### Example

#### Simple hello world:

~~~assembly
.Lhello: .asciz "Hello, world"
.global main
main:
  mov $.Lhello, %rdi
  call puts@plt
  xor %eax, %eax
  ret
~~~

[What does @plt mean](http://stackoverflow.com/questions/5469274/what-does-plt-mean-here)  
__TL;DR:__ As I understand it is useful for calling a function whose the address is relative to the caller.

For more details how to call a function: [Calling conventions](https://www.wikiwand.com/en/X86_calling_conventions#/System_V_AMD64_ABI)

Call a function pointer
-----------------------

We can call a function pointer with `callq` and by puting a star in front of the register to call:

~~~assembly
callq *%rax
~~~

Disassemble with gdb
--------------------

To disassemble:

1. (optional) We can compile with 0 optimisation (`-O0`)
2. run `gdb exec` then put a breakpoint in the function we want to disassemble (`b func`)
3. run (`r`) and then type `disassemble`

Useful links
------------

- [Ultimate CheatSheet](http://cs.brown.edu/courses/cs033/docs/guides/x64.pdf)
- [Assembly on OS X](http://www.idryman.org/blog/2014/12/02/writing-64-bit-assembly-on-mac-os-x/)
- [Nice tutorial](https://www.recurse.com/blog/7-understanding-c-by-learning-assembly)
