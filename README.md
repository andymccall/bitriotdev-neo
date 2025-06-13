### Bitriot.dev

This program does nothing other than show a splast screen.  It's intended to learn about programming in assembly on different platforms, in this case he Neo6502 neo-retro computer.

#### Building

Perform the following commands to compile the project:

```
username@host:~$ cd bitriotdev-neo
username@host:~$ make
Building project...
mkdir -p bin
mkdir -p lst
mkdir -p map
cl65 --static-locals -t none -C src/includes/neo6502.cfg -O --cpu 65c02 -l lst/bitriotdev.lst -m map/bitriotdev.map -o bin/bitriotdev.bin src/main.asm src/includes/neo6502.lib
python3 ~/development/tools/neo6502/exec.zip bin/bitriotdev.bin@800 run@800 -o"bin/bitriotdev.neo"
rm bin/bitriotdev.bin
```

#### Running the program

The newly built program can be run within the Neo emulator using the following commands:

```
username@host:~$ make run
```

This will launch the Neo emulator.

You should see something similar to the following:

![Screenshot of the neo emulator](https://github.com/andymccall/neo6502-development/blob/main/00-firstprg/assets/00-firstprg_asm.png?raw=true)
