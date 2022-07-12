# **Test environment:**
> - System: Ubuntu 22.04 LTS
>
> - GNOME Version: 42.2
>
> - Virtualization: Oracle VM VirtualBox

# **Prerequisite:**

One of the prerequisite to build and run a C/C++ projects on linux is to install build-essential.

Normally, build-essentials should already be installed, but the following command can also be executed.

``` bash
sudo apt install build-essential
```

# **Example project:**

Once build-essentials is installed, a file with the .cpp extention must be created.

In this example, the test.cpp file, with the following code, was created to make sure everything was working.

``` c
// file name: test.cpp
#include <iostream>
using namespace std;

int main() {
    int number1 = 5;
    int number2 = 10;
    int temp;

    printf("Numbers before swapping.\n");
    printf("Number 1: %d \n", number1);
    printf("Number 2: %d \n", number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("\n");

    printf("Numbers after swapping.\n");
    printf("Number 1: %d \n", number1);
    printf("Number 2: %d \n", number2);

    return 0;
}
```

# Build and run:

After creating the project, it needs to be compiled before execueting it.

To compile the project, enter the folder it was created and run the following command:

``` bash
g++ -o [name of the file with compile code] [project name].cpp
```

This command will create a file with the compiled code.

After that, the following manner with run the code in the terminal.

``` bash
./[name of the file with compile code]
```

> OBS: For C/C++ languages, it needs to be compiled before running with the changes made, otherwise, the compiled file will contain the previous code.