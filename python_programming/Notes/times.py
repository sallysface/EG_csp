#EG 7th time notes

import time
import datetime

epoch = time.time()
readable_time = time.ctime(epoch)

print(f'The time is {readable_time} ')

now = datetime.datetime.now()
hour = now.hour

print(f'The time is {now} ')
print(f'The time is {hour} ')
