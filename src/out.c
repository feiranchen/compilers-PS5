#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* rest_(void *l_) {
incRef(l_);



void * ret_ = NULL;
void * passed_ = NULL;
void * e_ = NULL;
void * aaaaai = NULL;






void * aaaabm = NULL;
aaaabm = ret_;
ret_ = NULL;
incRef(ret_);
decRef(aaaabm);






Boolean* aaaabn;
aaaabn = (Boolean *) x3malloc(sizeof(Boolean));
aaaabn->nrefs = 0;
aaaabn->isStr = 0;
aaaabn->isIter = 0;
aaaabn->value = 0;
void * aaaabo = NULL;
aaaabo = passed_;
passed_ = aaaabn;
incRef(passed_);
decRef(aaaabo);






void * aaaabp = NULL;
aaaabp = e_;
e_ = l_;
incRef(e_);
decRef(aaaabp);
decRef(l_);
	if (e_!=NULL) {
		if ((*((int *)(e_+1))) == 0) {
void * aaaabq = NULL;
aaaabq = e_;
			e_ = strToIter( ((String *)e_)->value, ((String *)e_)->len);
incRef(e_);
decRef(aaaabq);
		}
	}
	while (e_!=NULL) {
Iterable * aaaaac = NULL;
		aaaaac = (Iterable *)e_;
		incRef(aaaaac);
void * aaaabr = NULL;
aaaabr = e_;
		e_ = aaaaac->value;
		incRef(e_);
		decRef(aaaabr);
		


void * aaaaae = NULL;
void * aaaaad = NULL;






void * aaaabs = NULL;
aaaabs = aaaaae;
aaaaae = passed_;
incRef(aaaaae);
decRef(aaaabs);
decRef(passed_);



if ( ((Boolean *)aaaaae)->value) {
decRef(aaaaae);



void * aaaaah = NULL;
void * aaaaaf = NULL;
void * aaaaag = NULL;






void * aaaabt = NULL;
aaaabt = aaaaah;
aaaaah = e_;
incRef(aaaaah);
decRef(aaaabt);
decRef(e_);



void * aaaabu = NULL;
aaaabu = aaaaaf;
aaaaaf = ret_;
incRef(aaaaaf);
decRef(aaaabu);
decRef(ret_);



Iterable* aaaabv;
aaaabv = (Iterable*) x3malloc(sizeof(Iterable));
aaaabv->isStr = 0;
aaaabv->isIter = 1;
aaaabv->nrefs = 1;
aaaabv->value = aaaaah;
aaaabv->additional = NULL;
aaaabv->next = NULL;
aaaabv->concat = NULL;
incRef(aaaaah);
aaaabv->nrefs = 0;
void * aaaabw = NULL;
aaaabw = aaaaag;
aaaaag = aaaabv;
incRef(aaaaag);
decRef(aaaabw);
decRef(aaaaah);



void *aaaaby;
aaaaby = aaaaaf;
if (aaaaby!=NULL) {
(*((int *)aaaaby))++;
if ((*((int *)aaaaaf+1)) == 0) {
decRef(aaaaby);
aaaaby = strToIter( ((String *)aaaaaf)->value, ((String *)aaaaaf)->len);
incRef(aaaaby);
}
}
void *aaaabz;
aaaabz = aaaaag;
if (aaaabz!=NULL) {
(*((int *)aaaabz))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaabz);
aaaabz = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaabz);
}
}
Iterable* aaaabx;
aaaabx = concatenate((Iterable*)aaaaby, (Iterable*) aaaabz);
decRef(aaaaby);
decRef(aaaabz);
void * aaaaca = NULL;
aaaaca = ret_;
ret_ = aaaabx;
incRef(ret_);
decRef(aaaaca);
decRef(aaaaaf);
decRef(aaaaag);
}
decRef(e_);
decRef(aaaaae);






Boolean* aaaacb;
aaaacb = (Boolean *) x3malloc(sizeof(Boolean));
aaaacb->nrefs = 0;
aaaacb->isStr = 0;
aaaacb->isIter = 0;
aaaacb->value = 1;
void * aaaacc = NULL;
aaaacc = passed_;
passed_ = aaaacb;
incRef(passed_);
decRef(aaaacc);



void * aaaacd = NULL;
aaaacd = aaaaad;
aaaaad = aaaaac;
incRef(aaaaad);
decRef(aaaacd);
decRef(aaaaac);




void* aaaace;
aaaace = iterGetNext((void*) aaaaad);
void * aaaacf = NULL;
aaaacf = e_;
e_ = aaaace;
incRef(e_);
decRef(aaaacf);
decRef(aaaaad);
	}
decRef(e_);
decRef(passed_);






void * aaaacg = NULL;
aaaacg = aaaaai;
aaaaai = ret_;
incRef(aaaaai);
decRef(aaaacg);
decRef(ret_);



if (aaaaai!= NULL) {
(*(int *)aaaaai)--;
}
return aaaaai;
}
void* last_(void *l_ , void *default_) {
incRef(l_);
incRef(default_);



void * e_ = NULL;
void * aaaaap = NULL;






void * aaaach = NULL;
aaaach = e_;
e_ = l_;
incRef(e_);
decRef(aaaach);
	if (e_!=NULL) {
		if ((*((int *)(e_+1))) == 0) {
void * aaaaci = NULL;
aaaaci = e_;
			e_ = strToIter( ((String *)e_)->value, ((String *)e_)->len);
incRef(e_);
decRef(aaaaci);
		}
	}
	while (e_!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)e_;
		incRef(aaaaaj);
void * aaaacj = NULL;
aaaacj = e_;
		e_ = aaaaaj->value;
		incRef(e_);
		decRef(aaaacj);
decRef(default_);
decRef(aaaaaj);
		


void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaak = NULL;






void * aaaack = NULL;
aaaack = aaaaal;
aaaaal = l_;
incRef(aaaaal);
decRef(aaaack);
decRef(l_);




void* aaaacl;
aaaacl = rest_((void*) aaaaal);
void * aaaacm = NULL;
aaaacm = aaaaam;
aaaaam = aaaacl;
incRef(aaaaam);
decRef(aaaacm);
decRef(aaaaal);



void * aaaacn = NULL;
aaaacn = aaaaan;
aaaaan = e_;
incRef(aaaaan);
decRef(aaaacn);
decRef(e_);




void* aaaaco;
aaaaco = last_((void*) aaaaam, (void*) aaaaan);
void * aaaacp = NULL;
aaaacp = aaaaao;
aaaaao = aaaaco;
incRef(aaaaao);
decRef(aaaacp);
decRef(aaaaam);
decRef(aaaaan);



if (aaaaao!= NULL) {
(*(int *)aaaaao)--;
}
return aaaaao;



void * aaaacq = NULL;
aaaacq = aaaaak;
aaaaak = aaaaaj;
incRef(aaaaak);
decRef(aaaacq);
decRef(aaaaak);




void* aaaacr;
aaaacr = iterGetNext((void*) aaaaak);
void * aaaacs = NULL;
aaaacs = e_;
e_ = aaaacr;
incRef(e_);
decRef(aaaacs);
decRef(e_);
	}
decRef(e_);
decRef(l_);






void * aaaact = NULL;
aaaact = aaaaap;
aaaaap = default_;
incRef(aaaaap);
decRef(aaaact);
decRef(default_);



if (aaaaap!= NULL) {
(*(int *)aaaaap)--;
}
return aaaaap;
}
void* length_(void *l_) {
incRef(l_);



void * ret_ = NULL;
void * e_ = NULL;
void * aaaaau = NULL;






Integer* aaaacu;
aaaacu = (Integer*) x3malloc(sizeof(Integer));
aaaacu->nrefs = 0;
aaaacu->isStr = 0;
aaaacu->isIter = 0;
aaaacu->value = 0;
void * aaaacv = NULL;
aaaacv = ret_;
ret_ = aaaacu;
incRef(ret_);
decRef(aaaacv);






void * aaaacw = NULL;
aaaacw = e_;
e_ = l_;
incRef(e_);
decRef(aaaacw);
decRef(l_);
	if (e_!=NULL) {
		if ((*((int *)(e_+1))) == 0) {
void * aaaacx = NULL;
aaaacx = e_;
			e_ = strToIter( ((String *)e_)->value, ((String *)e_)->len);
incRef(e_);
decRef(aaaacx);
		}
	}
	while (e_!=NULL) {
Iterable * aaaaaq = NULL;
		aaaaaq = (Iterable *)e_;
		incRef(aaaaaq);
void * aaaacy = NULL;
aaaacy = e_;
		e_ = aaaaaq->value;
		incRef(e_);
		decRef(aaaacy);
decRef(e_);
		


void * aaaaas = NULL;
void * aaaaat = NULL;
void * aaaaar = NULL;






void * aaaacz = NULL;
aaaacz = aaaaas;
aaaaas = ret_;
incRef(aaaaas);
decRef(aaaacz);
decRef(ret_);



Integer* aaaada;
aaaada = (Integer*) x3malloc(sizeof(Integer));
aaaada->nrefs = 0;
aaaada->isStr = 0;
aaaada->isIter = 0;
aaaada->value = 1;
void * aaaadb = NULL;
aaaadb = aaaaat;
aaaaat = aaaada;
incRef(aaaaat);
decRef(aaaadb);




Integer* aaaadc;
aaaadc  = (Integer*) x3malloc(sizeof(Integer));
aaaadc->nrefs = 0;
aaaadc->isStr = 0;
aaaadc->isIter = 0;
aaaadc->value=((Integer*)aaaaas)->value + ((Integer*)aaaaat)->value;
void * aaaadd = NULL;
aaaadd = ret_;
ret_ = aaaadc;
incRef(ret_);
decRef(aaaadd);
decRef(aaaaas);
decRef(aaaaat);



void * aaaade = NULL;
aaaade = aaaaar;
aaaaar = aaaaaq;
incRef(aaaaar);
decRef(aaaade);
decRef(aaaaaq);




void* aaaadf;
aaaadf = iterGetNext((void*) aaaaar);
void * aaaadg = NULL;
aaaadg = e_;
e_ = aaaadf;
incRef(e_);
decRef(aaaadg);
decRef(aaaaar);
	}
decRef(e_);






void * aaaadh = NULL;
aaaadh = aaaaau;
aaaaau = ret_;
incRef(aaaaau);
decRef(aaaadh);
decRef(ret_);



if (aaaaau!= NULL) {
(*(int *)aaaaau)--;
}
return aaaaau;
}


void* our_main()
{
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;
void * aaaabe = NULL;
void * aaaabc = NULL;
void * aaaabd = NULL;
void * aaaabf = NULL;
void * aaaabg = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaabh = NULL;
void * aaaabi = NULL;
void * aaaabj = NULL;
void * aaaabk = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaabl = NULL;






if (!initialized_pqr) {
int aaaadi;
String* aaaaab= NULL;
aaaadi = next_line_len();
if(aaaadi == 0) {
	input_ = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaadi * sizeof(char));
	aaaaab->len = aaaadi;
	read_line(aaaaab->value);
	input_ = (Iterable*) x3malloc(sizeof(Iterable));
	input_->isIter = 1;
	input_->isStr = 0;
	input_->nrefs = 1;
	input_->value = aaaaab;
	input_->additional = NULL;
	input_->next = &input_onwards;
	input_->concat = NULL;
}
initialized_pqr = 1;
}
void * aaaadj = NULL;
aaaadj = aaaaax;
aaaaax = input_;
incRef(aaaaax);
decRef(aaaadj);



String* aaaadk;
aaaadk = (String *) x3malloc(sizeof(String));
aaaadk->isIter = 0;
aaaadk->value = (char*) x3malloc(sizeof(""));
aaaadk->nrefs = 0;
aaaadk->isStr = 1;
aaaadk->len = sizeof("") - 1;
mystrcpy(aaaadk->value, "");
void * aaaadl = NULL;
aaaadl = aaaaay;
aaaaay = aaaadk;
incRef(aaaaay);
decRef(aaaadl);




void* aaaadm;
aaaadm = last_((void*) aaaaax, (void*) aaaaay);
void * aaaadn = NULL;
aaaadn = aaaaaz;
aaaaaz = aaaadm;
incRef(aaaaaz);
decRef(aaaadn);
decRef(aaaaax);
decRef(aaaaay);



if (!initialized_pqr) {
int aaaado;
String* aaaaab= NULL;
aaaado = next_line_len();
if(aaaado == 0) {
	input_ = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaado * sizeof(char));
	aaaaab->len = aaaado;
	read_line(aaaaab->value);
	input_ = (Iterable*) x3malloc(sizeof(Iterable));
	input_->isIter = 1;
	input_->isStr = 0;
	input_->nrefs = 1;
	input_->value = aaaaab;
	input_->additional = NULL;
	input_->next = &input_onwards;
	input_->concat = NULL;
}
initialized_pqr = 1;
}
void * aaaadp = NULL;
aaaadp = aaaabe;
aaaabe = input_;
incRef(aaaabe);
decRef(aaaadp);
decRef(input_);



Integer* aaaadq;
aaaadq = (Integer*) x3malloc(sizeof(Integer));
aaaadq->nrefs = 0;
aaaadq->isStr = 0;
aaaadq->isIter = 0;
aaaadq->value = 5;
void * aaaadr = NULL;
aaaadr = aaaabc;
aaaabc = aaaadq;
incRef(aaaabc);
decRef(aaaadr);




void* aaaads;
aaaads = length_((void*) aaaabe);
void * aaaadt = NULL;
aaaadt = aaaabd;
aaaabd = aaaads;
incRef(aaaabd);
decRef(aaaadt);
decRef(aaaabe);



Iterable* aaaadu;
aaaadu = (Iterable*) x3malloc(sizeof(Iterable));
aaaadu->isIter = 1;
aaaadu->isStr = 0;
aaaadu->nrefs = 0;
aaaadu->value = aaaabc;
aaaadu->additional = aaaabd;
aaaadu->next = &Integer_through;
aaaadu->concat = NULL;
incRef(aaaabc);
incRef(aaaabd);
void* aaaadv = checkIter(aaaadu);
void * aaaadw = NULL;
aaaadw = aaaabf;
aaaabf = aaaadv;
incRef(aaaabf);
decRef(aaaadw);
decRef(aaaabc);
decRef(aaaabd);



Integer* aaaadx;
aaaadx = (Integer*) x3malloc(sizeof(Integer));
aaaadx->nrefs = 0;
aaaadx->isStr = 0;
aaaadx->isIter = 0;
aaaadx->value = 3;
void * aaaady = NULL;
aaaady = aaaabg;
aaaabg = aaaadx;
incRef(aaaabg);
decRef(aaaady);




void* aaaadz;
aaaadz = last_((void*) aaaabf, (void*) aaaabg);
void * aaaaea = NULL;
aaaaea = aaaaba;
aaaaba = aaaadz;
incRef(aaaaba);
decRef(aaaaea);
decRef(aaaabf);
decRef(aaaabg);



Integer* aaaaeb;
aaaaeb = (Integer*) x3malloc(sizeof(Integer));
aaaaeb->nrefs = 0;
aaaaeb->isStr = 0;
aaaaeb->isIter = 0;
aaaaeb->value = 30;
void * aaaaec = NULL;
aaaaec = aaaabb;
aaaabb = aaaaeb;
incRef(aaaabb);
decRef(aaaaec);




Integer* aaaaed;
aaaaed  = (Integer*) x3malloc(sizeof(Integer));
aaaaed->nrefs = 0;
aaaaed->isStr = 0;
aaaaed->isIter = 0;
aaaaed->value=((Integer*)aaaaba)->value + ((Integer*)aaaabb)->value;
void * aaaaee = NULL;
aaaaee = aaaabh;
aaaabh = aaaaed;
incRef(aaaabh);
decRef(aaaaee);
decRef(aaaaba);
decRef(aaaabb);




Character* aaaaef;
aaaaef = (Character*) x3malloc(sizeof(Character));
aaaaef->isStr = 0;
aaaaef->isIter = 0;
aaaaef->value = unichar (((Integer*)aaaabh)->value);
void * aaaaeg = NULL;
aaaaeg = aaaabi;
aaaabi = aaaaef;
incRef(aaaabi);
decRef(aaaaeg);
decRef(aaaabh);



Iterable* aaaaeh;
aaaaeh = (Iterable*) x3malloc(sizeof(Iterable));
aaaaeh->isStr = 0;
aaaaeh->isIter = 1;
aaaaeh->nrefs = 1;
aaaaeh->value = aaaabi;
aaaaeh->additional = NULL;
aaaaeh->next = NULL;
aaaaeh->concat = NULL;
incRef(aaaabi);
aaaaeh->nrefs = 0;
void * aaaaei = NULL;
aaaaei = aaaabj;
aaaabj = aaaaeh;
incRef(aaaabj);
decRef(aaaaei);
decRef(aaaabi);




	if (aaaabj!=NULL) {
		if ((*((int *)(aaaabj+1))) == 0) {
void * aaaaek = NULL;
aaaaek = aaaabj;
			aaaabj = strToIter( ((String *)aaaabj)->value, ((String *)aaaabj)->len);
incRef(aaaabj);
decRef(aaaaek);
		}
	}
void* aaaaej;
aaaaej = concatChars((Iterable*)aaaabj);
void * aaaael = NULL;
aaaael = aaaabk;
aaaabk = aaaaej;
incRef(aaaabk);
decRef(aaaael);
decRef(aaaabj);



Iterable* aaaaem;
aaaaem = (Iterable*) x3malloc(sizeof(Iterable));
aaaaem->isStr = 0;
aaaaem->isIter = 1;
aaaaem->nrefs = 1;
aaaaem->value = aaaaaz;
aaaaem->additional = NULL;
aaaaem->next = NULL;
aaaaem->concat = NULL;
incRef(aaaaaz);
aaaaem->nrefs = 0;
void * aaaaen = NULL;
aaaaen = aaaaav;
aaaaav = aaaaem;
incRef(aaaaav);
decRef(aaaaen);
decRef(aaaaaz);



Iterable* aaaaeo;
aaaaeo = (Iterable*) x3malloc(sizeof(Iterable));
aaaaeo->isStr = 0;
aaaaeo->isIter = 1;
aaaaeo->nrefs = 1;
aaaaeo->value = aaaabk;
aaaaeo->additional = NULL;
aaaaeo->next = NULL;
aaaaeo->concat = NULL;
incRef(aaaabk);
aaaaeo->nrefs = 0;
void * aaaaep = NULL;
aaaaep = aaaaaw;
aaaaaw = aaaaeo;
incRef(aaaaaw);
decRef(aaaaep);
decRef(aaaabk);



void *aaaaer;
aaaaer = aaaaav;
if (aaaaer!=NULL) {
(*((int *)aaaaer))++;
if ((*((int *)aaaaav+1)) == 0) {
decRef(aaaaer);
aaaaer = strToIter( ((String *)aaaaav)->value, ((String *)aaaaav)->len);
incRef(aaaaer);
}
}
void *aaaaes;
aaaaes = aaaaaw;
if (aaaaes!=NULL) {
(*((int *)aaaaes))++;
if ((*((int *)aaaaaw+1)) == 0) {
decRef(aaaaes);
aaaaes = strToIter( ((String *)aaaaaw)->value, ((String *)aaaaaw)->len);
incRef(aaaaes);
}
}
Iterable* aaaaeq;
aaaaeq = concatenate((Iterable*)aaaaer, (Iterable*) aaaaes);
decRef(aaaaer);
decRef(aaaaes);
void * aaaaet = NULL;
aaaaet = aaaabl;
aaaabl = aaaaeq;
incRef(aaaabl);
decRef(aaaaet);
decRef(aaaaav);
decRef(aaaaaw);



if (aaaabl!= NULL) {
(*(int *)aaaabl)--;
}
return aaaabl;
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
