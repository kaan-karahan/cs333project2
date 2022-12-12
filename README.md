# cs333project2

The project is about:

The program reads an integer number from console that represents the number of outlets. 
(if there are n outlets, then there are n lamps)
• Then the program reads n 2-digit hexadecimal codes, that represent the order of outlets on 
the wall (from up to down)
• Then the program reads n 2-digit hexadecimal codes, that represents the order of lamps on 
the other wall (from up to down)
• For example, for the problem shown in the picture above the input would be:
o 5
o AA B4 BE DC 72
o BE DC 72 AA B4
• Now the program should use dynamic programming approach to solve the problem and 
print on the console the maximum number of lamps that can turn on, and the corresponding 
wiring for it. The first line should be the maximum number of lamps that can be turned on, 
and the second line should be the codes of those lamps. For example, for the problem 
shown in the picture above the output should be:
o 3
o BE DC 72
You can assume that n can be 50 maximum, and the codes are always 2 digits, and are separated by 
one space when entered in console
