# Import the CSV file
time <- read.csv('Electric_Production.csv', header = TRUE)
print(time)

# Creating the Time Series
# Accessing a column using the $ (instead of []) retruns a vector 
timeSeries <- ts(time$IPG2211A2N, start = 2000, end = 2018, frequency = 2)

# Plotting the Time Series
plot(timeSeries, main="Electric Production")
