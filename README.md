# Stack expression

I used stacks here to work through the expression a + b * c. The values are a = 2, b = 3, and c = 4, so the answer should be 14.

The program does the multiplication first and then the addition. It uses operand and operator stacks to show the steps.

This only works through the expression already in the code. It does not take a new expression from the user.

To build and run it, you need a C++17 compiler and Make. Open a terminal in this folder and run:

```sh
make
make run
```

You can also run `make check` to check the sample output. That needs Python 3. Use `make clean` if you want to remove the compiled program.
