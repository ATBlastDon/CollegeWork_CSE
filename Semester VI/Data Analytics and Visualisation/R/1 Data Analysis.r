# Making a vector
arr <- c(1,7,3,4,6,2,6,9,6,1)
arr

# Making a list
l <- list("a", 1, "hello")
l

# Initializing a vector
v <- 1:10
v

# Making a DataFrame
df <- data.frame(names=c("a", "b", "c"), marks=c(67, 89, 34))
df

# Making a matrix
m <- matrix(c(1:9), nrow=3, byrow = TRUE)
m

# Checking if values in a vector are of a given type
data <- c(1.1, 2.1)

is.integer(data)
is.numeric(data)

d <- as.integer(data)
d

# Common Statistical Functions
mean(arr)
median(arr)
sd(arr)
var(arr)


x <- c(1,2,3,4,5,6,7,8,9)
y <- c(11, 23, 33, 44, 55, 62, 70, 80, 99)

cor(x,y)
cov(x,y)

summary(arr)

# Plotting in R
plot(x,y)
plot(x,y, type="l", col="red", main="xyplot", xlab="X", ylab="Y")