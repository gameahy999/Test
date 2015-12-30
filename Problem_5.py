#!/usr/bin/env python

def lcm(x, y):
   if x > y:
      greater = x
   else:
      greater = y

   while(True):
      if((greater % x == 0) and (greater % y == 0)):
         lcm = greater
         break
      greater += 1

   return lcm

if __name__ == '__main__':
   a = 1
   for i in range(1, 20):
      a = lcm(a, i)

   print a