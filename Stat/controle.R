femme=c(105, 127, 138, 110, 128, 142, 112, 130, 145, 112, 132, 148, 118, 133, 148, 119, 134, 150, 120, 135, 151, 120, 138, 154, 125, 138, 154, 126, 138, 158)
homme=c(141, 153, 164, 144, 154, 165, 146, 155, 166, 148, 156, 168, 149, 156, 168, 150, 160, 170, 150, 160, 172, 151, 160, 172, 153, 163, 176, 153, 164, 179)
hemoglobine=data.frame("femme"=femme, "homme"=homme)
hemoglobine
femme.hist<-hist(hemoglobine$femme, breaks=c(104,114,124,134,144,154,164,174,184))
homme.hist<-hist(hemoglobine$homme, breaks=c(104,114,124,134,144,154,164,174,184))

table.femme<-round(data.frame(femme.hist$mids, femme.hist$counts, femme.hist$counts/length(hemoglobine$femme)),2)
colnames(table.femme)<-("centres","effectifs","frequence")
table.femme 

table.homme<-round(data.frame(homme.hist$mids, homme.hist$counts, homme.hist$counts/length(hemoglobine$homme)),2)
colnames(table.homme)<-("centres","effectifs","frequence")
table.homme 

hist(hemoglobine$femme, breaks=c(104,114,124,134,144,154,164,174,184))
hist(hemoglobine$homme, breaks=c(104,114,124,134,144,154,164,174,184))


summary(c(hemoglobine$femme, hemoglobine$homme))
summary(hemoglobine$homme)
summary(hemoglobine$femme)

ens.hist<-hist(c(hemoglobine$femme,hemoglobine$homme),breaks=c(104,114,124,134,144,154,164,174,184))
ens.hist$counts

moy.ens<-sum(ens.hist$mids*ens.hist$counts)/60
moy.ens