#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

void* rest(void *l) {



void * ret = NULL;
void * passed = NULL;



if (ret!= NULL) {
	if ((*(int *)ret) == 1)
		x3free(ret);
	else
	(*(int *)ret)--;
}
ret = NULL;
if (ret!=NULL)
	(*(int *)ret)++;



Boolean* aaaaah;
aaaaah = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaah->nrefs) = 1;
aaaaah->value = 0;
if (passed!= NULL) {
	if ((*(int *)passed) == 1)
		x3free(passed);
	else
	(*(int *)passed)--;
}
passed = aaaaah;
if (passed!=NULL)
	(*(int *)passed)++;



Iterable *aaaaai;
aaaaai = (Iterable *)l;
(*(int *)aaaaai)++;
if ((*(int *)(l+1)) == 0) {
(*(int *)aaaaai)--;
aaaaai = strToIter( ((String *)l)->value, ((String *)l)->len);
}
{
	void * e=aaaaai;
	Iterable * aaaaaj;
	while (e!=NULL) {
		aaaaaj = (Iterable *)e;
		e = aaaaaj->value;
		(*(int *)e)++;
		





if ( ((Boolean *)passed)->value) {






Iterable* aaaaak;
aaaaak = (Iterable*) x3malloc(sizeof(Iterable));
aaaaak->isIter = 1;
aaaaak->nrefs = 1;
aaaaak->value = e;
aaaaak->additional = NULL;
aaaaak->next = NULL;
aaaaak->concat = NULL;
Iterable* aaaaan;
aaaaan = concatenate((Iterable*)ret, (Iterable*) aaaaak);
if (ret!= NULL) {
	if ((*(int *)ret) == 1)
		x3free(ret);
	else
	(*(int *)ret)--;
}
ret = aaaaan;
if (ret!=NULL)
	(*(int *)ret)++;
}



Boolean* aaaaao;
aaaaao = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaao->nrefs) = 1;
aaaaao->value = 1;
if (passed!= NULL) {
	if ((*(int *)passed) == 1)
		x3free(passed);
	else
	(*(int *)passed)--;
}
passed = aaaaao;
if (passed!=NULL)
	(*(int *)passed)++;
		


		if (aaaaao!= NULL) {
			if ((*(int *)aaaaao) == 1)
				x3free(aaaaao);
			else
				(*(int *)aaaaao)--;
		}
		(*(int *)e)--;
		e = iterGetNext(aaaaaj);
	}
}






if (ret!= NULL) {
(*(int *)ret)--;
}



if (aaaaah!= NULL) {
if ((*(int *)aaaaah) == 1)
x3free(aaaaah);
else
(*(int *)aaaaah)--;
}



if (passed!= NULL) {
if ((*(int *)passed) == 1)
x3free(passed);
else
(*(int *)passed)--;
}
return ret;
}
void* last(void *l , void *default1) {






Iterable *aaaaap;
aaaaap = (Iterable *)l;
(*(int *)aaaaap)++;
if ((*(int *)(l+1)) == 0) {
(*(int *)aaaaap)--;
aaaaap = strToIter( ((String *)l)->value, ((String *)l)->len);
}
{
	void * e=aaaaap;
	Iterable * aaaaaq;
	while (e!=NULL) {
		aaaaaq = (Iterable *)e;
		e = aaaaaq->value;
		(*(int *)e)++;
		







void* aaaaas;
aaaaas = rest((void*) l);
void* aaaaar;
aaaaar = last((void*) aaaaas, (void*) e);
return aaaaar;
		(*(int *)e)--;
		e = iterGetNext(aaaaaq);
	}
}



return default1;
}
void* length(void *l) {



void * ret = NULL;



Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 1;
aaaaat->value = 0;
if (ret!= NULL) {
	if ((*(int *)ret) == 1)
		x3free(ret);
	else
	(*(int *)ret)--;
}
ret = aaaaat;
if (ret!=NULL)
	(*(int *)ret)++;



Iterable *aaaaau;
aaaaau = (Iterable *)l;
(*(int *)aaaaau)++;
if ((*(int *)(l+1)) == 0) {
(*(int *)aaaaau)--;
aaaaau = strToIter( ((String *)l)->value, ((String *)l)->len);
}
{
	void * e=aaaaau;
	Iterable * aaaaav;
	while (e!=NULL) {
		aaaaav = (Iterable *)e;
		e = aaaaav->value;
		(*(int *)e)++;
		






Integer* aaaaax;
aaaaax = (Integer*) x3malloc(sizeof(Integer));
(aaaaax->nrefs) = 1;
aaaaax->value = 1;
Integer* aaaaaw;
aaaaaw  = (Integer*) x3malloc(sizeof(Integer));
aaaaaw->nrefs = 1;
aaaaaw->value=((Integer*)ret)->value + ((Integer*)aaaaax)->value;
if (ret!= NULL) {
	if ((*(int *)ret) == 1)
		x3free(ret);
	else
	(*(int *)ret)--;
}
ret = aaaaaw;
if (ret!=NULL)
	(*(int *)ret)++;
		


		if (aaaaax!= NULL) {
			if ((*(int *)aaaaax) == 1)
				x3free(aaaaax);
			else
				(*(int *)aaaaax)--;
		}
		


		if (aaaaaw!= NULL) {
			if ((*(int *)aaaaaw) == 1)
				x3free(aaaaaw);
			else
				(*(int *)aaaaaw)--;
		}
		(*(int *)e)--;
		e = iterGetNext(aaaaav);
	}
}






if (aaaaat!= NULL) {
if ((*(int *)aaaaat) == 1)
x3free(aaaaat);
else
(*(int *)aaaaat)--;
}



if (ret!= NULL) {
(*(int *)ret)--;
}
return ret;
}


void* our_main()
{




int aaaaaz;
Iterable* aaaaaf;
String* aaaaag;
aaaaaz = next_line_len();
if(aaaaaz == 0) {
	aaaaaf = NULL;
}
else {
	aaaaag = (String*) x3malloc(sizeof(String));
	aaaaag->isIter = 0;
	aaaaag->nrefs = 1;
	aaaaag->value = (char*) x3malloc(aaaaaz * sizeof(char));
	aaaaag->len = aaaaaz;
	read_line(aaaaag->value);
	aaaaaf = (Iterable*) x3malloc(sizeof(Iterable));
	aaaaaf->isIter = 1;
aaaaaf->nrefs = 1;
	aaaaaf->value = aaaaag;
	aaaaaf->additional = NULL;
	aaaaaf->next = &input_onwards;
	aaaaaf->concat = NULL;
}
String* aaaabb;
aaaabb = (String *) x3malloc(sizeof(String));
(aaaabb->isIter) = 0;
aaaabb->value = (char*) x3malloc(sizeof(""));
(aaaabb->nrefs) = 1;
aaaabb->len = sizeof("") - 1;
mystrcpy(aaaabb->value, "");
void* aaaaay;
aaaaay = last((void*) aaaaaf, (void*) aaaabb);
Iterable* aaaabc;
aaaabc = (Iterable*) x3malloc(sizeof(Iterable));
aaaabc->isIter = 1;
aaaabc->nrefs = 1;
aaaabc->value = aaaaay;
aaaabc->additional = NULL;
aaaabc->next = NULL;
aaaabc->concat = NULL;




Integer* aaaabh;
aaaabh = (Integer*) x3malloc(sizeof(Integer));
(aaaabh->nrefs) = 1;
aaaabh->value = 5;

Iterable* aaaabk;
aaaabk = (Iterable*) x3malloc(sizeof(Iterable));
aaaabk->isIter = 1;
aaaabk->nrefs = 1;
aaaabk->value = aaaaag;
aaaabk->additional = ((Iterable*)aaaaaf)->additional;
aaaabk->next = NULL;
aaaabk->concat = NULL;
void* aaaabi;
aaaabi = length((void*) aaaabk);
Iterable* aaaabl;
aaaabl = (Iterable*) x3malloc(sizeof(Iterable));
aaaabl->isIter = 1;
aaaabl->nrefs = 1;
aaaabl->value = aaaabh;
aaaabl->additional = aaaabi;
aaaabl->next = &Integer_through;
aaaabl->concat = NULL;
Integer* aaaabm;
aaaabm = (Integer*) x3malloc(sizeof(Integer));
(aaaabm->nrefs) = 1;
aaaabm->value = 3;
void* aaaabg;
aaaabg = last((void*) checkIter(aaaabl), (void*) aaaabm);
Integer* aaaabn;
aaaabn = (Integer*) x3malloc(sizeof(Integer));
(aaaabn->nrefs) = 1;
aaaabn->value = 30;
Integer* aaaabf;
aaaabf  = (Integer*) x3malloc(sizeof(Integer));
aaaabf->nrefs = 1;
aaaabf->value=((Integer*)aaaabg)->value + ((Integer*)aaaabn)->value;
Character* aaaabe;
aaaabe = (Character*) x3malloc(sizeof(Character));
aaaabe->value = unichar (((Integer*)aaaabf)->value);
Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 1;
aaaabo->value = aaaabe;
aaaabo->additional = NULL;
aaaabo->next = NULL;
aaaabo->concat = NULL;
void* aaaabd;
aaaabd = concatChars((Iterable*)aaaabo);
Iterable* aaaabp;
aaaabp = (Iterable*) x3malloc(sizeof(Iterable));
aaaabp->isIter = 1;
aaaabp->nrefs = 1;
aaaabp->value = aaaabd;
aaaabp->additional = NULL;
aaaabp->next = NULL;
aaaabp->concat = NULL;
Iterable* aaaabs;
aaaabs = concatenate((Iterable*)aaaabc, (Iterable*) aaaabp);



if (aaaabb!= NULL) {
if ((*(int *)aaaabb) == 1)
x3free(aaaabb);
else
(*(int *)aaaabb)--;
}



if (aaaabh!= NULL) {
if ((*(int *)aaaabh) == 1)
x3free(aaaabh);
else
(*(int *)aaaabh)--;
}



if (aaaabm!= NULL) {
if ((*(int *)aaaabm) == 1)
x3free(aaaabm);
else
(*(int *)aaaabm)--;
}



if (aaaabn!= NULL) {
if ((*(int *)aaaabn) == 1)
x3free(aaaabn);
else
(*(int *)aaaabn)--;
}



if (aaaabf!= NULL) {
if ((*(int *)aaaabf) == 1)
x3free(aaaabf);
else
(*(int *)aaaabf)--;
}
return aaaabs;
}


void cubex_main() {
Iterable* ourMain;
ourMain = (Iterable*) our_main();
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
}
