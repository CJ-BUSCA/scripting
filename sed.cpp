 #include <iostream>
 #include <cstdlib> // for system()
/*If textfile contains text and you want to remove empty lines from it, you
should modify the sed command in sed.cpp to use textfile instead of
delete_me.txt.*/

 int main() {
     std::cout << "Executing the sed command to delete empty lines in textfile..." << std::endl;
     system("sed -i '/^$/d' textfile");
     return 0;
 }

 /*If the program is deleting empty lines, then it is working correctly. The
sed command we used in the program is designed to delete all lines that are
completely empty (i.e., those that have no characters or whitespace).

If there were empty lines in textfile and the program removed them, then
the program is working as expected.   */
