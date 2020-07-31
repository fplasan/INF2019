#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Nov 15 08:55:17 2016

@author: fpla
"""
c=0
for i in range(1,50):
    for j in range(i+1,50):
        for k in range(j+1,50):
            for i1 in range(k+1,50):
                for j2 in range(i1+1,50):
                    for k2 in range(j2+1,50):
                        c=c+1
                        print(i,j,k,i1,j2,k2)
print("------")
print(c)
