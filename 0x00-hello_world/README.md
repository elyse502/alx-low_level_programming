# *0x00-hello_world*
* **0-preprocessor**
    * A script that runs a C file through the preprocessor and save the result into another file.
      * The C file name is saved in the variable $CFILE. The output is saved in the file c.

* **1-compiler**
  * A script that compiles a C file but does not link.
      * The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .o instead of .c.

* **2-assembler**
    * A script that generates the assembly code of a C code and saves it in an output file.
      * The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .s instead of .c

* **3-name**
    * A script that compiles a C file and creates an executable named cisfun.
      * The C file name will be saved in the variable $CFILE.

* **4-puts.c**
  * A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
      * Use the function puts

* **5-printf.c**
    * A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
      * Use the function printf

* **6-size.c**
    * A C program that prints the size of various types on the computer it is compiled and run on.

* **100-intel**
    * A script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.
       * The C file name is saved in the variable $CFILE. The output file is named the same as the C file, but with the extension .s instead of .c

* **101-quote.c**
    * A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
      * Not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
