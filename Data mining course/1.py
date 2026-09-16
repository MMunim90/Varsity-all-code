import numpy as np
x = np.linspace(0, 10, 100)
y = np.cos(x)
z = np.sin(x)

import matplotlib.pyplot as plt
fig = plt.figure()
fig2 = plt.figure(figsize=plt.figaspect(2.0))
fig.add_axes([0.1, 0.1, 0.8, 0.8])
ax1 = fig.add_subplot(221)
ax3 = fig.add_subplot(212)
fig3, axes = plt.subplots(nrows=2,ncols=2)
fig4, axes2 = plt.subplots(ncols=3)


lines = ax.plot(x,y) 
ax.scatter(x,y) 
axes[0,0].bar([1,2,3],[3,4,5]) 
axes[1,0].barh([0.5,1,2.5],[0,1,2]) 
axes[1,1].axhline(0.45) 
axes[0,1].axvline(0.65) 
ax.fill(x,y,color='blue') 
ax.fill_between(x,y,color='yellow')
