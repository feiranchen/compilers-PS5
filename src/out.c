#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * ret = NULL;
void * aaaaac = NULL;
void * i = NULL;






void * aaaaaq = NULL;
aaaaaq = ret;
ret = NULL;
incRef(ret);
decRef(aaaaaq);






int aaaaar;
Iterable* input= NULL;
String* aaaaab= NULL;
aaaaar = next_line_len();
if(aaaaar == 0) {
	input = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaaar * sizeof(char));
	aaaaab->len = aaaaar;
	read_line(aaaaab->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 0;
	input->value = aaaaab;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaaat = NULL;
aaaaat = aaaaac;
aaaaac = input;
incRef(aaaaac);
decRef(aaaaat);
decRef(input);



void * aaaaau = NULL;
aaaaau = i;
i = aaaaac;
incRef(i);
decRef(aaaaau);
decRef(aaaaac);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaaav = NULL;
aaaaav = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaaav);
		}
	}
	while (i!=NULL) {
Iterable * aaaaad = NULL;
		aaaaad = (Iterable *)i;
		incRef(aaaaad);
void * aaaaaw = NULL;
aaaaaw = i;
		i = aaaaad->value;
		incRef(i);
		decRef(aaaaaw);
		


void * aaaaal = NULL;
void * aaaaai = NULL;
void * aaaaaj = NULL;
void * aaaaao = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaaf = NULL;






void * aaaaax = NULL;
aaaaax = aaaaal;
aaaaal = i;
incRef(aaaaal);
decRef(aaaaax);



Iterable* aaaaay;
aaaaay = (Iterable*) x3malloc(sizeof(Iterable));
aaaaay->isIter = 1;
aaaaay->nrefs = 1;
aaaaay->value = aaaaal;
aaaaay->additional = NULL;
aaaaay->next = NULL;
aaaaay->concat = NULL;
incRef(aaaaal);
aaaaay->nrefs = 0;
void * aaaaaz = NULL;
aaaaaz = aaaaai;
aaaaai = aaaaay;
incRef(aaaaai);
decRef(aaaaaz);
decRef(aaaaal);



void * aaaaba = NULL;
aaaaba = aaaaaj;
aaaaaj = ret;
incRef(aaaaaj);
decRef(aaaaba);
decRef(ret);



void * aaaabb = NULL;
aaaabb = aaaaao;
aaaaao = i;
incRef(aaaaao);
decRef(aaaabb);
decRef(i);



void *aaaabd;
aaaabd = aaaaai;
if (aaaabd!=NULL) {
(*((int *)aaaabd))++;
if ((*((int *)aaaaai+1)) == 0) {
decRef(aaaabd);
aaaabd = strToIter( ((String *)aaaaai)->value, ((String *)aaaaai)->len);
}
}
void *aaaabe;
aaaabe = aaaaaj;
if (aaaabe!=NULL) {
(*((int *)aaaabe))++;
if ((*((int *)aaaaaj+1)) == 0) {
decRef(aaaabe);
aaaabe = strToIter( ((String *)aaaaaj)->value, ((String *)aaaaaj)->len);
}
}
Iterable* aaaabc;
aaaabc = concatenate((Iterable*)aaaabd, (Iterable*) aaaabe);
decRef(aaaabd);
decRef(aaaabe);
void * aaaabf = NULL;
aaaabf = aaaaag;
aaaaag = aaaabc;
incRef(aaaaag);
decRef(aaaabf);
decRef(aaaaai);
decRef(aaaaaj);



Iterable* aaaabg;
aaaabg = (Iterable*) x3malloc(sizeof(Iterable));
aaaabg->isIter = 1;
aaaabg->nrefs = 1;
aaaabg->value = aaaaao;
aaaabg->additional = NULL;
aaaabg->next = NULL;
aaaabg->concat = NULL;
incRef(aaaaao);
aaaabg->nrefs = 0;
void * aaaabh = NULL;
aaaabh = aaaaah;
aaaaah = aaaabg;
incRef(aaaaah);
decRef(aaaabh);
decRef(aaaaao);



void *aaaabj;
aaaabj = aaaaag;
if (aaaabj!=NULL) {
(*((int *)aaaabj))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaabj);
aaaabj = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
}
}
void *aaaabk;
aaaabk = aaaaah;
if (aaaabk!=NULL) {
(*((int *)aaaabk))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaabk);
aaaabk = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
}
}
Iterable* aaaabi;
aaaabi = concatenate((Iterable*)aaaabj, (Iterable*) aaaabk);
decRef(aaaabj);
decRef(aaaabk);
void * aaaabl = NULL;
aaaabl = ret;
ret = aaaabi;
incRef(ret);
decRef(aaaabl);
decRef(aaaaag);
decRef(aaaaah);



void * aaaabm = NULL;
aaaabm = aaaaaf;
aaaaaf = aaaaad;
incRef(aaaaaf);
decRef(aaaabm);
decRef(aaaaad);




void* aaaabn;
aaaabn = iterGetNext((void*) aaaaaf);
void * aaaabo = NULL;
aaaabo = i;
i = aaaabn;
incRef(i);
decRef(aaaabo);
decRef(aaaaaf);
	}
decRef(i);






if (ret!= NULL) {
(*(int *)ret)--;
}
return ret;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
