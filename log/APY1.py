#!/usr/bin/env python

initial=100 # 100 dollars, or any other currency
APY=0.025   # Annual percentage yield = 2.5\%

current=initial

# 40 years
for year in range(40):
    # what you get at the end of each year?
    current=current+current*APY
    print "year=", year, "amount at the end", current

