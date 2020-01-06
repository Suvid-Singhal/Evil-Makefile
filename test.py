import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
data = pd.read_csv('data.txt', sep=" ", header=None)

data.plot.line()
plt.show()
