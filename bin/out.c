#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * lst = NULL;
void * lst2 = NULL;
void * sum = NULL;
void * restr = NULL;



Integer* aaaaac;
aaaaac = (Integer*) x3malloc(sizeof(Integer));
(aaaaac->nrefs) = 1;
aaaaac->value = 1;
Integer* aaaaae;
aaaaae = (Integer*) x3malloc(sizeof(Integer));
(aaaaae->nrefs) = 1;
aaaaae->value = 2;
Integer* aaaaag;
aaaaag = (Integer*) x3malloc(sizeof(Integer));
(aaaaag->nrefs) = 1;
aaaaag->value = 3;
Integer* aaaaai;
aaaaai = (Integer*) x3malloc(sizeof(Integer));
(aaaaai->nrefs) = 1;
aaaaai->value = 4;
Iterable* aaaaaj;
aaaaaj = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaj->isIter = 1;
aaaaaj->nrefs = 1;
aaaaaj->value = aaaaai;
aaaaaj->additional = NULL;
aaaaaj->next = NULL;
aaaaaj->concat = NULL;
Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 1;
aaaaah->value = aaaaag;
aaaaah->additional = aaaaaj;
aaaaah->next = NULL;
aaaaah->concat = NULL;
Iterable* aaaaaf;
aaaaaf = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaf->isIter = 1;
aaaaaf->nrefs = 1;
aaaaaf->value = aaaaae;
aaaaaf->additional = aaaaah;
aaaaaf->next = NULL;
aaaaaf->concat = NULL;
Iterable* aaaaad;
aaaaad = (Iterable*) x3malloc(sizeof(Iterable));
aaaaad->isIter = 1;
aaaaad->nrefs = 1;
aaaaad->value = aaaaac;
aaaaad->additional = aaaaaf;
aaaaad->next = NULL;
aaaaad->concat = NULL;
if (lst!= NULL) {
	if ((*(int *)lst) == 1)
		x3free(lst);
	else
	(*(int *)lst)--;
}
lst = aaaaad;
if (lst!=NULL)
	(*(int *)lst)++;



Integer* aaaaak;
aaaaak = (Integer*) x3malloc(sizeof(Integer));
(aaaaak->nrefs) = 1;
aaaaak->value = 1;
Integer* aaaaal;
aaaaal = (Integer*) x3malloc(sizeof(Integer));
(aaaaal->nrefs) = 1;
aaaaal->value = 4;
Iterable* aaaaam;
aaaaam = (Iterable*) x3malloc(sizeof(Iterable));
aaaaam->isIter = 1;
aaaaam->nrefs = 1;
aaaaam->value = aaaaak;
aaaaam->additional = aaaaal;
aaaaam->next = &Integer_through;
aaaaam->concat = NULL;
if (lst2!= NULL) {
	if ((*(int *)lst2) == 1)
		x3free(lst2);
	else
	(*(int *)lst2)--;
}
lst2 = checkIter(aaaaam);
if (lst2!=NULL)
	(*(int *)lst2)++;



Integer* aaaaan;
aaaaan = (Integer*) x3malloc(sizeof(Integer));
(aaaaan->nrefs) = 1;
aaaaan->value = 0;
if (sum!= NULL) {
	if ((*(int *)sum) == 1)
		x3free(sum);
	else
	(*(int *)sum)--;
}
sum = aaaaan;
if (sum!=NULL)
	(*(int *)sum)++;



if (restr!= NULL) {
	if ((*(int *)restr) == 1)
		x3free(restr);
	else
	(*(int *)restr)--;
}
restr = NULL;
if (restr!=NULL)
	(*(int *)restr)++;



void *aaaaao;
aaaaao = lst;
if (aaaaao!=NULL) {
if ((*((int *)(lst+1))) == 0) {
aaaaao = strToIter( ((String *)lst)->value, ((String *)lst)->len);
}
}
{
	void * v=aaaaao;
	Iterable * aaaaap;
	while (v!=NULL) {
		aaaaap = (Iterable *)v;
		v = aaaaap->value;
		(*((int *)v))++;
		






Integer* aaaaaq;
aaaaaq  = (Integer*) x3malloc(sizeof(Integer));
aaaaaq->nrefs = 1;
aaaaaq->value=((Integer*)sum)->value + ((Integer*)v)->value;
if (sum!= NULL) {
	if ((*(int *)sum) == 1)
		x3free(sum);
	else
	(*(int *)sum)--;
}
sum = aaaaaq;
if (sum!=NULL)
	(*(int *)sum)++;



String* aaaaar;
aaaaar = (String *) x3malloc(sizeof(String));
(aaaaar->isIter) = 0;
aaaaar->value = (char*) x3malloc(sizeof("hi "));
(aaaaar->nrefs) = 1;
aaaaar->len = sizeof("hi ") - 1;
mystrcpy(aaaaar->value, "hi ");
Iterable* aaaaas;
aaaaas = (Iterable*) x3malloc(sizeof(Iterable));
aaaaas->isIter = 1;
aaaaas->nrefs = 1;
aaaaas->value = aaaaar;
aaaaas->additional = NULL;
aaaaas->next = NULL;
aaaaas->concat = NULL;
void *aaaaau;
aaaaau = restr;
if (aaaaau!=NULL) {
(*((int *)aaaaau))++;
if ((*((int *)restr+1)) == 0) {
(*((int *)aaaaau))--;
aaaaau = strToIter( ((String *)restr)->value, ((String *)restr)->len);
}
}
void *aaaaav;
aaaaav = aaaaas;
if (aaaaav!=NULL) {
(*((int *)aaaaav))++;
if ((*((int *)aaaaas+1)) == 0) {
(*((int *)aaaaau))--;
aaaaav = strToIter( ((String *)aaaaas)->value, ((String *)aaaaas)->len);
}
}
Iterable* aaaaat;
aaaaat = concatenate((Iterable*)aaaaau, (Iterable*) aaaaav);
if (restr!= NULL) {
	if ((*(int *)restr) == 1)
		x3free(restr);
	else
	(*(int *)restr)--;
}
restr = aaaaat;
if (restr!=NULL)
	(*(int *)restr)++;
		


		if (aaaaaq!= NULL) {
			if ((*(int *)aaaaaq) == 1)
				x3free(aaaaaq);
			else
				(*(int *)aaaaaq)--;
		}
		


		if (aaaaar!= NULL) {
			if ((*(int *)aaaaar) == 1)
				x3free(aaaaar);
			else
				(*(int *)aaaaar)--;
		}
		(*(int *)v)--;
		v = iterGetNext(aaaaap);
	}
}



void *aaaaaw;
aaaaaw = lst;
if (aaaaaw!=NULL) {
if ((*((int *)(lst+1))) == 0) {
aaaaaw = strToIter( ((String *)lst)->value, ((String *)lst)->len);
}
}
{
	void * v=aaaaaw;
	Iterable * aaaaax;
	while (v!=NULL) {
		aaaaax = (Iterable *)v;
		v = aaaaax->value;
		(*((int *)v))++;
		






Integer* aaaaay;
aaaaay  = (Integer*) x3malloc(sizeof(Integer));
aaaaay->nrefs = 1;
aaaaay->value=((Integer*)sum)->value + ((Integer*)v)->value;
if (sum!= NULL) {
	if ((*(int *)sum) == 1)
		x3free(sum);
	else
	(*(int *)sum)--;
}
sum = aaaaay;
if (sum!=NULL)
	(*(int *)sum)++;



String* aaaaaz;
aaaaaz = (String *) x3malloc(sizeof(String));
(aaaaaz->isIter) = 0;
aaaaaz->value = (char*) x3malloc(sizeof("hello "));
(aaaaaz->nrefs) = 1;
aaaaaz->len = sizeof("hello ") - 1;
mystrcpy(aaaaaz->value, "hello ");
Iterable* aaaaba;
aaaaba = (Iterable*) x3malloc(sizeof(Iterable));
aaaaba->isIter = 1;
aaaaba->nrefs = 1;
aaaaba->value = aaaaaz;
aaaaba->additional = NULL;
aaaaba->next = NULL;
aaaaba->concat = NULL;
void *aaaabc;
aaaabc = restr;
if (aaaabc!=NULL) {
(*((int *)aaaabc))++;
if ((*((int *)restr+1)) == 0) {
(*((int *)aaaabc))--;
aaaabc = strToIter( ((String *)restr)->value, ((String *)restr)->len);
}
}
void *aaaabd;
aaaabd = aaaaba;
if (aaaabd!=NULL) {
(*((int *)aaaabd))++;
if ((*((int *)aaaaba+1)) == 0) {
(*((int *)aaaabc))--;
aaaabd = strToIter( ((String *)aaaaba)->value, ((String *)aaaaba)->len);
}
}
Iterable* aaaabb;
aaaabb = concatenate((Iterable*)aaaabc, (Iterable*) aaaabd);
if (restr!= NULL) {
	if ((*(int *)restr) == 1)
		x3free(restr);
	else
	(*(int *)restr)--;
}
restr = aaaabb;
if (restr!=NULL)
	(*(int *)restr)++;
		


		if (aaaaay!= NULL) {
			if ((*(int *)aaaaay) == 1)
				x3free(aaaaay);
			else
				(*(int *)aaaaay)--;
		}
		


		if (aaaaaz!= NULL) {
			if ((*(int *)aaaaaz) == 1)
				x3free(aaaaaz);
			else
				(*(int *)aaaaaz)--;
		}
		(*(int *)v)--;
		v = iterGetNext(aaaaax);
	}
}



String* aaaabe;
aaaabe = (String *) x3malloc(sizeof(String));
(aaaabe->isIter) = 0;
aaaabe->value = (char*) x3malloc(sizeof("20"));
(aaaabe->nrefs) = 1;
aaaabe->len = sizeof("20") - 1;
mystrcpy(aaaabe->value, "20");
Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 1;
aaaabf->value = aaaabe;
aaaabf->additional = NULL;
aaaabf->next = NULL;
aaaabf->concat = NULL;
void *aaaabh;
aaaabh = aaaabf;
if (aaaabh!=NULL) {
(*((int *)aaaabh))++;
if ((*((int *)aaaabf+1)) == 0) {
(*((int *)aaaabh))--;
aaaabh = strToIter( ((String *)aaaabf)->value, ((String *)aaaabf)->len);
}
}
void *aaaabi;
aaaabi = restr;
if (aaaabi!=NULL) {
(*((int *)aaaabi))++;
if ((*((int *)restr+1)) == 0) {
(*((int *)aaaabh))--;
aaaabi = strToIter( ((String *)restr)->value, ((String *)restr)->len);
}
}
Iterable* aaaabg;
aaaabg = concatenate((Iterable*)aaaabh, (Iterable*) aaaabi);



if (aaaaac!= NULL) {
if ((*(int *)aaaaac) == 1)
x3free(aaaaac);
else
(*(int *)aaaaac)--;
}



if (aaaaae!= NULL) {
if ((*(int *)aaaaae) == 1)
x3free(aaaaae);
else
(*(int *)aaaaae)--;
}



if (aaaaag!= NULL) {
if ((*(int *)aaaaag) == 1)
x3free(aaaaag);
else
(*(int *)aaaaag)--;
}



if (aaaaai!= NULL) {
if ((*(int *)aaaaai) == 1)
x3free(aaaaai);
else
(*(int *)aaaaai)--;
}



if (lst!= NULL) {
if ((*(int *)lst) == 1)
x3free(lst);
else
(*(int *)lst)--;
}



if (aaaaak!= NULL) {
if ((*(int *)aaaaak) == 1)
x3free(aaaaak);
else
(*(int *)aaaaak)--;
}



if (aaaaal!= NULL) {
if ((*(int *)aaaaal) == 1)
x3free(aaaaal);
else
(*(int *)aaaaal)--;
}



if (lst2!= NULL) {
if ((*(int *)lst2) == 1)
x3free(lst2);
else
(*(int *)lst2)--;
}



if (aaaaan!= NULL) {
if ((*(int *)aaaaan) == 1)
x3free(aaaaan);
else
(*(int *)aaaaan)--;
}



if (sum!= NULL) {
if ((*(int *)sum) == 1)
x3free(sum);
else
(*(int *)sum)--;
}



if (restr!= NULL) {
if ((*(int *)restr) == 1)
x3free(restr);
else
(*(int *)restr)--;
}



if (aaaabe!= NULL) {
if ((*(int *)aaaabe) == 1)
x3free(aaaabe);
else
(*(int *)aaaabe)--;
}
return aaaabg;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
