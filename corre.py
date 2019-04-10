import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ sumaXY.cpp -o suma.x")
os.system("./suma.x > sumas.dat")