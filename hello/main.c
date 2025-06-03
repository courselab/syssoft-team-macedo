/*
 *    SPDX-FileCopyrightText: 2021 Monaco F. J. <monaco@usp.br>
 *    SPDX-FileCopyrightText: 2025 ViniMacedo <vii-30@usp.br>
 *   
 *    SPDX-License-Identifier: GPL-3.0-or-later
 *
 *  This file is a derivative of SYSeg (https://gitlab.com/monaco/syseg)
 *  and includes modifications made by the following author(s):
 *  ViniMacedo <vii-30@usp.br>
 */

 #include <stdio.h>

 char* int_to_str(int num){
   static char str[10];
   int i = 0;
 
   while (num > 0) {
     str[i++] = (num % 10) + '0';
     num /= 10;
   }
 
   for (int j = 0; j < i / 2; j++) {
     char temp = str[j];
     str[j] = str[i - j - 1];
     str[i - j - 1] = temp;
   }
   str[i] = '\0';
   return str;
 }
 
 int main(void)   
 {
   printf ("Hello World & memsize: ");
 
   int mem = memsize();
   
   printf(int_to_str(mem));
   
   return 0;
 }