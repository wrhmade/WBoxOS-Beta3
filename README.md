The WBoxOS Operating System is a graphical operating system based on HaribetoOS (also known as the Paper Doll System in 30 Days of Homemade Operating System), which supports eight bit colors and only takes 1 second to boot (the larger the memory, the slower the boot speed). The project was launched by WRH in the original 71GN Deep Space (now in W24 Studio) in December 2023. 
This project is an open source project, so people can download the source code and compilation tools of the project through GitHub, and can compile and distribute it again for open source. 

Compilation method (does not support Linux/macOS compilation, users using this operating system require a Windows virtual machine): 
1. Open beta (x represents a number for version number) or releasex, and then open!Cons_NtBat (Windows NT series operating system, minimum Windows NT 4.0, including but not limited to Windows 2000/XP/Vista/7/8/8.1/10/11) or!Cons_9xBat (Windows 95/98/ME operating system), open a command line window; 
2. Enter make full to compile the operating system; 
If the compilation is successful, you will receive bootfdImg (beta 2 and below is haribote. img), which is the floppy disk image of the operating system, can be placed in a virtual machine to run, or written into a floppy disk to run on a real machine. 

Tutorial for using this operating system: 
Press Shift+F2 to call out the console (usually it will appear automatically after startup)
Enter commands in the console, such as shutdown, mem (memory usage), dir (disk file list), to run the system's built-in commands, or to run applications (simply enter a file name); 

The following are system built-in commands: 
Command Name   	effect										                                                    Version	      			With parameters
mem			        Memory usage                                                									Beta1 and above			No
cls	        		Clear console                                                									Beta1 and above			No
dir		        	List files			                                                  						Beta1 and above			No
exit			      Exit console	                                                								Beta1 and above			No
start      			Open the console and execute commands						                              Beta1 and above			Yes
lcst		      	Create tasks and execute commands						                                  Beta1 and above			Yes
langmode	  	  Switch language mode (0 represents ASCII  and 3 represents GB2312 in Chinese)	Beta1 and above			Yes
shutdown	  	  Shut Down								                                                    	Beta1 and above			No
colortest	    	256 color test (beta1 and 2 are in front 16 colors)			                    	Beta1 and above			No
about			      About WBoxOS								                                                	Beta2 and above			No
reboot	  	  	restart						                                                    				Beta3 and above			No
curspeed	  	  Cursor blink speed				                                            				Beta3 and above			Yes
echo			      Output certain text to the console					                                	Beta3 and above			Yes
