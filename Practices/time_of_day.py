#EG 7th time of day

import time
import datetime

epoch = time.time()
read_time = time.ctime(epoch)

now = datetime.datetime.now()
hour = now.hour

if hour >= 5 and hour < 11:
   print(f'Good morning! it is {hour}')
if hour >= 12 and hour < 18:
   print(f'Good afternoon! it is {hour}')
if hour >= 19 and hour < 22:
   print(f'Good evening! it is {hour}')
if hour >= 23 and hour < 4:
   print(f'It is {hour}, you should probably be in bed right now...')