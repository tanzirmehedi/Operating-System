#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   srand(time(NULL));
   int i;
   for(i = 65; i<75; i++)
   printf("%c\t", rand());
}


5) Fitting function/ regression/ Function approximation and Curve fitting.

load Building_dataset
net=newfit(buildingInputs,buildingTargets,10);
net=train(net,buildingInputs,buildingTargets);

nftool

6)Pattern recognation/ classification

load glass_dataset
net=newpr(glassInputs,glassTargets,10);
net=train(net,glassInputs,glassTargets);

nprtool

7) Clustering/ self organizaing map /SOM / Feature extraction and Data dimension reduction

load  simplecluster_dataset
net=newsom(simpleclusterInputs,[6,6]);
net=train(net,simpleclusterInputs);

nctool

8) Regression / classifiation

year <- rep(2008:2010, each=4)
quarter <- rep(1:4, 3)
cpi <- c(162.2, 164.6, 166.5, 166.0, 166.2, 167.0, 168.6, 169.5,171.0, 172.1, 173.3, 174.0)
plot(cpi, xaxt="n", ylab="CPI", xlab="")
# draw x-axis
axis(1, labels=paste(year,quarter,sep="Q"), at=1:12, las=3)
cor(year,cpi)
cor(quarter,cpi)
fit <- lm(cpi ~ year + quarter)
fit
cpi2011 <- fit$coefficients[[1]] + fit$coefficients[[2]]*2011 + fit$coefficients[[3]]*(1:4)
attributes(fit)
fit$coefficients
residuals(fit)
summary(fit)
plot(fit)
data2011 <- data.frame(year=2011, quarter=1:4)
cpi2011 <- predict(fit, newdata=data2011)
style <- c(rep(1,12), rep(2,4))
plot(c(cpi, cpi2011), xaxt="n", ylab="CPI", xlab="", pch=style, col=style)
axis(1, at=1:16, las=3, labels=c(paste(year,quarter,sep="Q"), "2011Q1", "2011Q2", "2011Q3", "2011Q4"))



newiris <- iris
newiris$Species <- NULL
kc <- kmeans(newiris, 3)
table(iris$Species, kc$cluster)
plot(newiris[c("Sepal.Length", "Sepal.Width")], col = kc$cluster)
points(kc$centers[,c("Sepal.Length", "Sepal.Width")], col = 1:3, pch = 8, cex=2)


mydata <- read.table("c:/mydata.csv", header=TRUE,sep=",", row.names="id")
mydata <- read.table("C:\Program Files\R\R-2.15.2\glassInputs.txt", header=TRUE,sep=",", row.names="id")newdata





