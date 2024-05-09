# About C

> Have a mental picture (or a real drawing) of how your C code is using memory.
That's good advice in any language, but in C it's critical. - *Essential C*, Nick Parlante

## Arguments

the proper way to take arguments from command line:

```c
int main(int argc, char *argv[]) {
  return 0;
}
```

the proper way to not take arguments from command line:

```c
int main(void) {
  return 0;
}
```
