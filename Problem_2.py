#!/usr/bin/env python

a = 2
b = 3
tmp = 0
final_sum = 0

for i in range(4000000):
   if a > 4000000:
      break;

   final_sum = final_sum + a
   tmp = b
   b = a + b
   a = tmp

   tmp = b
   b = a + b
   a = tmp

   tmp = b
   b = a + b
   a = tmp

print final_sum