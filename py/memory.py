import os
import time
import resource
from threading import Thread

def fill_memory():
   memory_limit = 1024 * 1024 * 1024  # 1GB
   while True:
       pass

def write_log(memory, cpu):
   with open("log", "w") as f:
       f.write("Memory Usage: {:.2f} MB\n".format(memory))
       f.write("CPU Usage: {:.2f}%\n".format(cpu))

def main():
   while True:
       try:
           memory_usage = resource.getrusage(resource.RUSAGE_SELF).ru_maxrss
           cpu_usage = os.getloadavg()[0]
           if memory_usage > 1024 * 1024 * 1024:  # 1GB
               write_log(memory_usage / (1024 * 1024), cpu_usage)
               break
           else:
               time.sleep(1)
       except KeyboardInterrupt:
           write_log(memory_usage / (1024 * 1024), cpu_usage)
           break

if __name__ == "__main__":
   t = Thread(target=fill_memory)
   t.start()
   main()
