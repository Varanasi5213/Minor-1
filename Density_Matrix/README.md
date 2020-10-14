## RSSI to Density Matrix
### Algorithm for population / density distribution matrix:<br>
<b>•</b>	Start<br>

<b>•</b>	Get the rssi difference matrix in difference_matrix of order [i]x[j]<br>

<b>•</b> Let d[i][j] represent each element of difference_matrix<br>

<b>•</b>	Min(d) and Max(d) are minimum and maximum values of d[i][j] respectively<br>

<b>•</b>	Let D[i][j] represent each element of density_distribution_matrix of order [i]x[j]<br>

<b>•</b>	For each value of d[i][j]<br>

<b>•</b>	Do,    D[i][j] = (d[i][j] – Min(d)) / (Max(d) – Min(d))<br>

<b>•</b> Store all values of D[i][j] in density_distribution_matrix<br>

<b>•</b> Return density_distribution_matrix<br>

<b>•</b>	End<br><br>
### Data flow diagram (DFD):
![](DFD.jpeg)


