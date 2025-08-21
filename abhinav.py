import matplotlib.pyplot as plt
import sys
import numpy as np
import pandas as pd
df = pd.read_csv('cardata.csv')
fig,axs = plt.subplots(1, 3, sharex=True,figsize=(15, 5))
#1 row → all plots will be placed horizontally.
#3 columns → three separate plotting areas (called axes) are created side by side.
axs[0].boxplot(df['Selling_Price'])
axs[1].boxplot(df['Present_Price'])
axs[2].boxplot(df['Kms_Driven'])
plt.show()