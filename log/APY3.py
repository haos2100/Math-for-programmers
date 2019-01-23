#!/usr/bin/env python

initial=100 # \$100
APY=0.025 # Annual percentage yield = 2.5\%

current=initial

# 40 years
for year in range(40):
    for month in range(12):
        for day in range(30):
            # what you get at the end of each day?
            current=current+current*(APY/12/30)
            print "year=", year, "month=", month, "day=", day, "amount", current

