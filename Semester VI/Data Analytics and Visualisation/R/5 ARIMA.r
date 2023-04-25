# Reading teh CSV file
data <- read.csv('AirPassengers.csv', header=TRUE)
data[2:40, 2]

# Creating the Time Series
data <- data[2:40, 2]
ts_data <- ts(data, start = c(1949,1), frequency=1)
plot(ts_data)

# Install the forecast package
install.packages('forecast')
library('forecast')

# Fitting the ARIMA model
fit <- auto.arima(ts_data)
f <- forecast(fit, 3)
plot(f, col='blue')