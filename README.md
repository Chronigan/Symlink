# Symlink
Add a simple Symlink interface to the Linux Nemo/Nautilus File Manager. This small program gives you more control over where links are created and what their names will be, so you don't have to move them or rename them in a seperate step.

This program was written in C++ with the Qt Framework and Compiled in the QtCreator IDE.

If you want to see the code and compile it yourself, download the source code folder. 
If you just want to try it out, download the executable folder.

To use the executable in nemo : Copy the symlink.nemo_action and the compiled program Symlink to your /home/user name/.local/share/nemo/actions directory.

In Nautilus : copy the symlink file to /home/user name/.local/share/nautilus/scripts

Make sure you have permision to run the script and it is set as executable.

Select the files and directories that you would like to create Symlinks to. 

Right click on one and select the option Symlink to invoke the program. 
In Nautilus you will need to Scripts -> Symlink

It will then ask you to choose the directory to create the links in. You can either enter the directory manually or click browse to choose one
You also have the choice to name the links yourself or have it autoname them for you.

Click create when you are ready, and the links will be created.
