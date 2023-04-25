# Initializing the data
x <- c(1, 2, 3, 4, 5, 6, 7, 8, 9)
y <- c(12, 23, 33, 46, 67, 60, 77, 82, 90)

# Fitting the model
relation <- lm(y~x)
relation

# Predicting values
test <- data.frame(x = 12)
result <- predict(relation, test)
result

# Plotting the regression line
plot(x,y, abline(lm(y~x)))

