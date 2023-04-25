# Craeting a dataframe
df <- data.frame(x1=c(1,4,6,8,7), x2=c(1,6,7,9,11), y=c(10,20,30,40,50))
df

# Fitting the model
relation <- lm(y ~ x1+x2, df)
relation

# Making Predictions
test <- data.frame(x1=8, x2=12)
predict(relation, test)
