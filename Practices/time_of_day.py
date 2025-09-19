#EG 7th time of day

import time

epoch = time.time()
read_time = time.ctime(epoch)

if read_time >= 7:
    if read_time < 11:
        print(f'Good morning! it is {read_time}')