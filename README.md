# README

## simple_shell

The **simple_shell** is a command language interpreter that shall execute command line string, the standard input, or a specified file. 

It's a middleman between you and the core (or *kernel*) of the computer.

A *terminal* is a program that gives you access to the shell -
think of the terminal as the window enclosing the shell, and the shell
as that little prompt at the bottom:

    `you@somecomputer:$`

# Moving around the file system

The program `pwd` (print working
directory) tells you where you are sitting in the directory. The
command `ls` will list the files in the current directory.

When you start up a terminal on most systems, you will start in a special
directory called the *home* directory. If you're using the managed desktop,
you'll initially find yourself in a Desktop directory, so change to your home:

    cd

Every user has their own home
directory where they have full access to create and delete files and
directories. You can also find out your user
name by entering the command `whoami`.

You can always get back to your home directory by typing `cd` (return).

# Arguments
Most programs take additional arguments that control their exact
behavior. For example, `-F` and `-l` are arguments to `ls`.  The `ls`
program, like many programs, take a lot of arguments.
Most commonly used shell programs have a manual. You can access the
manual using the `man` program. Try entering:

    man ls

# Creating, moving, copying, and removing

The `cp` command backs up the file. Example:

     cp all_data all_data_backup

Now `all_data_backup` has been created as a copy of `all_data`. We can move files around using the command `mv`. Example:

       mv all_data_backup /tmp/
       
This moves `all_data_backup` into the directory `/tmp`. The `mv` command is also one way to rename files. Example:

      mv all_data all_data_IMPORTANT
      
Type in `ls`, and you will see that file name has been changed to
all_data_IMPORTANT. To delete the backup file:

      rm /tmp/all_data_backup
      
The `mkdir` command is used to create a directory. Just enter `mkdir`
followed by a space, then the directory name.

# Example of use
~~~
root@e93ceebed25e:~/simple_shell# ./a.out
$ ls
AUTHORS    _getenv.c  _strlen.c  buscopath.c  generate_authors.sh  simple_shell.c  test
README.md  _strcmp.c  _strstr.c  env.c        main.h               split.c         vgcore.20776
_exit_.c   _strdup.c  a.out      fork.c       man_1_simple_shell   str_concat.c    vgcore.20823
$ ls -la
total 4796
drwxr-xr-x 4 root root    4096 Dec  6 13:58 .
drwx------ 1 root root    4096 Dec  6 13:45 ..
drwxr-xr-x 8 root root     201 Dec  6 12:06 .git
-rw-r--r-- 1 root root   12288 Dec  6 12:06 .simple_shell.c.swp
-rw-r--r-- 1 root root     214 Dec  2 13:29 AUTHORS
-rw-r--r-- 1 root root    1123 Dec  6 13:45 README.md
-rw-r--r-- 1 root root      49 Dec  5 20:32 _exit_.c
-rw-r--r-- 1 root root     345 Dec  6 12:06 _getenv.c
-rw-r--r-- 1 root root     255 Dec  5 20:32 _strcmp.c
-rw-r--r-- 1 root root     397 Dec  5 20:32 _strdup.c
-rw-r--r-- 1 root root     297 Dec  3 20:23 _strlen.c
-rw-r--r-- 1 root root     598 Dec  3 20:23 _strstr.c
-rwxr-xr-x 1 root root   22216 Dec  6 13:58 a.out
-rw-r--r-- 1 root root     144 Dec  6 12:06 buscopath.c
-rw-r--r-- 1 root root     364 Dec  6 12:06 env.c
-rw-r--r-- 1 root root     462 Dec  5 20:32 fork.c
-rwxr--r-- 1 root root     255 Dec  2 01:36 generate_authors.sh
-rw-r--r-- 1 root root     796 Dec  6 12:06 main.h
-rw-r--r-- 1 root root    2120 Dec  5 18:48 man_1_simple_shell
-rw-r--r-- 1 root root    2268 Dec  6 12:06 simple_shell.c
-rw-r--r-- 1 root root     441 Dec  3 20:23 split.c
-rw-r--r-- 1 root root     570 Dec  5 20:32 str_concat.c
drwxr-xr-x 2 root root    4096 Dec  2 17:35 test
-rw-r--r-- 1 root root 2396160 Dec  5 20:32 vgcore.20776
-rw-r--r-- 1 root root 2396160 Dec  5 20:32 vgcore.20823
~~~

## Staff
Santiago Negreira & Camila Abdala
