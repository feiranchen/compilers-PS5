#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* id(void *t) {
incRef(t);






if (t!= NULL) {
(*(int *)t)--;
}
return t;
}
void* singleton(void *t) {
incRef(t);



void * aaaaac = NULL;



void * aaaaas = NULL;
aaaaas = aaaaac;
aaaaac = t;
incRef(aaaaac);
decRef(aaaaas);
decRef(t);



Iterable* aaaaat;
aaaaat = (Iterable*) x3malloc(sizeof(Iterable));
aaaaat->isIter = 1;
aaaaat->nrefs = 1;
aaaaat->value = aaaaac;
aaaaat->additional = NULL;
aaaaat->next = NULL;
aaaaat->concat = NULL;
incRef(aaaaac);
aaaaat->nrefs = 0;
decRef(aaaaac);
return aaaaat;
}
void* test(void *t) {
incRef(t);



void * aaaaad = NULL;
void * aaaaae = NULL;



void * aaaaau = NULL;
aaaaau = aaaaad;
aaaaad = t;
incRef(aaaaad);
decRef(aaaaau);
decRef(t);




void* aaaaav;
aaaaav = singleton((void*) aaaaad);
((Iterable*)aaaaav)->isIter=1;
((Iterable*)aaaaav)->isStr=0;
void * aaaaaw = NULL;
aaaaaw = aaaaae;
aaaaae = aaaaav;
incRef(aaaaae);
decRef(aaaaaw);
decRef(aaaaad);




void* aaaaax;
aaaaax = id((void*) aaaaae);
((Iterable*)aaaaax)->isIter=1;
((Iterable*)aaaaax)->isStr=0;
decRef(aaaaae);
return aaaaax;
}
void* output(void *t , void *b) {
incRef(t);
incRef(b);



void * aaaaaf = NULL;
void * aaaaah = NULL;



void * ret = NULL;






void * aaaaay = NULL;
aaaaay = aaaaaf;
aaaaaf = b;
incRef(aaaaaf);
decRef(aaaaay);
decRef(b);



if ( ((Boolean *)aaaaaf)->value) {
decRef(aaaaaf);



void * aaaaag = NULL;






String* aaaaaz;
aaaaaz = (String *) x3malloc(sizeof(String));
(aaaaaz->isIter) = 0;
aaaaaz->value = (char*) x3malloc(sizeof("Yes."));
(aaaaaz->nrefs) = 0;
(aaaaaz->isStr) = 1;
aaaaaz->len = sizeof("Yes.") - 1;
mystrcpy(aaaaaz->value, "Yes.");
void * aaaaba = NULL;
aaaaba = aaaaag;
aaaaag = aaaaaz;
incRef(aaaaag);
decRef(aaaaba);




void* aaaabb;
aaaabb = singleton((void*) aaaaag);
((Iterable*)aaaabb)->isIter=1;
((Iterable*)aaaabb)->isStr=0;
decRef(aaaaag);
return aaaabb;
}
else {
decRef(aaaaaf);



void * ret = NULL;






String* aaaabc;
aaaabc = (String *) x3malloc(sizeof(String));
(aaaabc->isIter) = 0;
aaaabc->value = (char*) x3malloc(sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU..."));
(aaaabc->nrefs) = 0;
(aaaabc->isStr) = 1;
aaaabc->len = sizeof("FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...") - 1;
mystrcpy(aaaabc->value, "FUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU...");
void * aaaabd = NULL;
aaaabd = ret;
ret = aaaabc;
incRef(ret);
decRef(aaaabd);
}






void * aaaabe = NULL;
aaaabe = aaaaah;
aaaaah = ret;
incRef(aaaaah);
decRef(aaaabe);
decRef(ret);



Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 1;
aaaabf->value = aaaaah;
aaaabf->additional = NULL;
aaaabf->next = NULL;
aaaabf->concat = NULL;
incRef(aaaaah);
aaaabf->nrefs = 0;
decRef(aaaaah);
return aaaabf;
}
void* charoutput(void *char1) {
incRef(char1);



void * bool = NULL;
void * aaaaai = NULL;
void * c = NULL;
void * aaaaao = NULL;
void * aaaaap = NULL;






Boolean* aaaabg;
aaaabg = (Boolean *) x3malloc(sizeof(Boolean));
(aaaabg->nrefs) = 0;
aaaabg->value = 0;
void * aaaabh = NULL;
aaaabh = bool;
bool = aaaabg;
incRef(bool);
decRef(aaaabh);






void * aaaabi = NULL;
aaaabi = aaaaai;
aaaaai = char1;
incRef(aaaaai);
decRef(aaaabi);




void* aaaabj;
aaaabj = test((void*) aaaaai);
((Iterable*)aaaabj)->isIter=1;
((Iterable*)aaaabj)->isStr=0;
void * aaaabk = NULL;
aaaabk = c;
c = aaaabj;
incRef(c);
decRef(aaaabk);
decRef(aaaaai);
	if (c!=NULL) {
		if ((*((int *)(c+1))) == 0) {
void * aaaabl = NULL;
aaaabl = c;
			c = strToIter( ((String *)c)->value, ((String *)c)->len);
incRef(c);
decRef(aaaabl);
		}
	}
	while (c!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)c;
		incRef(aaaaaj);
void * aaaabm = NULL;
aaaabm = c;
		c = aaaaaj->value;
		incRef(c);
		decRef(aaaabm);
		


void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaak = NULL;






void * aaaabn = NULL;
aaaabn = aaaaal;
aaaaal = c;
incRef(aaaaal);
decRef(aaaabn);
decRef(c);



void * aaaabo = NULL;
aaaabo = aaaaam;
aaaaam = char1;
incRef(aaaaam);
decRef(aaaabo);




Boolean* aaaabp = (Boolean*) x3malloc(sizeof(Boolean));
aaaabp->nrefs = 0;
aaaabp->value = ((Character*) aaaaal)->value == ((Character*) aaaaam)->value;
void * aaaabq = NULL;
aaaabq = aaaaan;
aaaaan = aaaabp;
incRef(aaaaan);
decRef(aaaabq);
decRef(aaaaal);
decRef(aaaaam);



if ( ((Boolean *)aaaaan)->value) {
decRef(bool);
decRef(aaaaan);









Boolean* aaaabr;
aaaabr = (Boolean *) x3malloc(sizeof(Boolean));
(aaaabr->nrefs) = 0;
aaaabr->value = 1;
void * aaaabs = NULL;
aaaabs = bool;
bool = aaaabr;
incRef(bool);
decRef(aaaabs);
}
decRef(aaaaan);



void * aaaabt = NULL;
aaaabt = aaaaak;
aaaaak = aaaaaj;
incRef(aaaaak);
decRef(aaaabt);
decRef(aaaaaj);




void* aaaabu;
aaaabu = iterGetNext((void*) aaaaak);
void * aaaabv = NULL;
aaaabv = c;
c = aaaabu;
incRef(c);
decRef(aaaabv);
decRef(aaaaak);
	}
decRef(c);






void * aaaabw = NULL;
aaaabw = aaaaao;
aaaaao = char1;
incRef(aaaaao);
decRef(aaaabw);
decRef(char1);



void * aaaabx = NULL;
aaaabx = aaaaap;
aaaaap = bool;
incRef(aaaaap);
decRef(aaaabx);
decRef(bool);




void* aaaaby;
aaaaby = output((void*) aaaaao, (void*) aaaaap);
((Iterable*)aaaaby)->isIter=1;
((Iterable*)aaaaby)->isStr=0;
decRef(aaaaao);
decRef(aaaaap);
return aaaaby;
}


void* our_main()
{
void * aaaaaq = NULL;
void * aaaaar = NULL;






Integer* aaaabz;
aaaabz = (Integer*) x3malloc(sizeof(Integer));
(aaaabz->nrefs) = 0;
aaaabz->value = 66;
void * aaaaca = NULL;
aaaaca = aaaaaq;
aaaaaq = aaaabz;
incRef(aaaaaq);
decRef(aaaaca);




Character* aaaacb;
aaaacb = (Character*) x3malloc(sizeof(Character));
aaaacb->value = unichar (((Integer*)aaaaaq)->value);
void * aaaacc = NULL;
aaaacc = aaaaar;
aaaaar = aaaacb;
incRef(aaaaar);
decRef(aaaacc);
decRef(aaaaaq);




void* aaaacd;
aaaacd = charoutput((void*) aaaaar);
((Iterable*)aaaacd)->isIter=1;
((Iterable*)aaaacd)->isStr=0;
decRef(aaaaar);
return aaaacd;
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
