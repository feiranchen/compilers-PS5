#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
<<<<<<< HEAD
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
=======
void* print_(void *s_ , void *ss_ , void *b_) {
incRef(s_);
incRef(ss_);
incRef(b_);



void * out_ = NULL;
void * aaaaac = NULL;
void * aaaaah = NULL;
void * aaaaai = NULL;
void * aaaaaj = NULL;
void * aaaaak = NULL;






void * aaaacc = NULL;
aaaacc = out_;
out_ = s_;
incRef(out_);
decRef(aaaacc);
decRef(s_);






void * aaaacd = NULL;
aaaacd = aaaaac;
aaaaac = b_;
incRef(aaaaac);
decRef(aaaacd);
decRef(b_);



if ( ((Boolean *)aaaaac)->value) {
decRef(aaaaac);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d






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






<<<<<<< HEAD
void * aaaabs = NULL;
aaaabs = aaaaae;
aaaaae = passed_;
incRef(aaaaae);
decRef(aaaabs);
decRef(passed_);



if ( ((Boolean *)aaaaae)->value) {
decRef(aaaaae);
=======
void * aaaace = NULL;
aaaace = aaaaad;
aaaaad = out_;
incRef(aaaaad);
decRef(aaaace);
decRef(out_);



String* aaaacf;
aaaacf = (String *) x3malloc(sizeof(String));
aaaacf->isIter = 0;
aaaacf->value = (char*) x3malloc(sizeof(" == "));
aaaacf->nrefs = 0;
aaaacf->isStr = 1;
aaaacf->len = sizeof(" == ") - 1;
mystrcpy(aaaacf->value, " == ");
void * aaaacg = NULL;
aaaacg = aaaaae;
aaaaae = aaaacf;
incRef(aaaaae);
decRef(aaaacg);



void *aaaaci;
aaaaci = aaaaad;
if (aaaaci!=NULL) {
(*((int *)aaaaci))++;
if ((*((int *)aaaaad+1)) == 0) {
decRef(aaaaci);
aaaaci = strToIter( ((String *)aaaaad)->value, ((String *)aaaaad)->len);
incRef(aaaaci);
}
}
void *aaaacj;
aaaacj = aaaaae;
if (aaaacj!=NULL) {
(*((int *)aaaacj))++;
if ((*((int *)aaaaae+1)) == 0) {
decRef(aaaacj);
aaaacj = strToIter( ((String *)aaaaae)->value, ((String *)aaaaae)->len);
incRef(aaaacj);
}
}
Iterable* aaaach;
aaaach = concatenate((Iterable*)aaaaci, (Iterable*) aaaacj);
decRef(aaaaci);
decRef(aaaacj);
void * aaaack = NULL;
aaaack = out_;
out_ = aaaach;
incRef(out_);
decRef(aaaack);
decRef(aaaaad);
decRef(aaaaae);
}
else {
decRef(aaaaac);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d



void * aaaaah = NULL;
void * aaaaaf = NULL;
void * aaaaag = NULL;






<<<<<<< HEAD
void * aaaabt = NULL;
aaaabt = aaaaah;
aaaaah = e_;
incRef(aaaaah);
decRef(aaaabt);
decRef(e_);


=======
void * aaaacl = NULL;
aaaacl = aaaaaf;
aaaaaf = out_;
incRef(aaaaaf);
decRef(aaaacl);
decRef(out_);



String* aaaacm;
aaaacm = (String *) x3malloc(sizeof(String));
aaaacm->isIter = 0;
aaaacm->value = (char*) x3malloc(sizeof(" != "));
aaaacm->nrefs = 0;
aaaacm->isStr = 1;
aaaacm->len = sizeof(" != ") - 1;
mystrcpy(aaaacm->value, " != ");
void * aaaacn = NULL;
aaaacn = aaaaag;
aaaaag = aaaacm;
incRef(aaaaag);
decRef(aaaacn);



void *aaaacp;
aaaacp = aaaaaf;
if (aaaacp!=NULL) {
(*((int *)aaaacp))++;
if ((*((int *)aaaaaf+1)) == 0) {
decRef(aaaacp);
aaaacp = strToIter( ((String *)aaaaaf)->value, ((String *)aaaaaf)->len);
incRef(aaaacp);
}
}
void *aaaacq;
aaaacq = aaaaag;
if (aaaacq!=NULL) {
(*((int *)aaaacq))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaacq);
aaaacq = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
incRef(aaaacq);
}
}
Iterable* aaaaco;
aaaaco = concatenate((Iterable*)aaaacp, (Iterable*) aaaacq);
decRef(aaaacp);
decRef(aaaacq);
void * aaaacr = NULL;
aaaacr = out_;
out_ = aaaaco;
incRef(out_);
decRef(aaaacr);
decRef(aaaaaf);
decRef(aaaaag);
}
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

void * aaaabu = NULL;
aaaabu = aaaaaf;
aaaaaf = ret_;
incRef(aaaaaf);
decRef(aaaabu);
decRef(ret_);



<<<<<<< HEAD
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
=======


void * aaaacs = NULL;
aaaacs = aaaaah;
aaaaah = out_;
incRef(aaaaah);
decRef(aaaacs);
decRef(out_);



void * aaaact = NULL;
aaaact = aaaaai;
aaaaai = ss_;
incRef(aaaaai);
decRef(aaaact);
decRef(ss_);



void *aaaacv;
aaaacv = aaaaah;
if (aaaacv!=NULL) {
(*((int *)aaaacv))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaacv);
aaaacv = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaacv);
}
}
void *aaaacw;
aaaacw = aaaaai;
if (aaaacw!=NULL) {
(*((int *)aaaacw))++;
if ((*((int *)aaaaai+1)) == 0) {
decRef(aaaacw);
aaaacw = strToIter( ((String *)aaaaai)->value, ((String *)aaaaai)->len);
incRef(aaaacw);
}
}
Iterable* aaaacu;
aaaacu = concatenate((Iterable*)aaaacv, (Iterable*) aaaacw);
decRef(aaaacv);
decRef(aaaacw);
void * aaaacx = NULL;
aaaacx = aaaaaj;
aaaaaj = aaaacu;
incRef(aaaaaj);
decRef(aaaacx);
decRef(aaaaah);
decRef(aaaaai);




	if (aaaaaj!=NULL) {
		if ((*((int *)(aaaaaj+1))) == 0) {
void * aaaacz = NULL;
aaaacz = aaaaaj;
			aaaaaj = strToIter( ((String *)aaaaaj)->value, ((String *)aaaaaj)->len);
incRef(aaaaaj);
decRef(aaaacz);
		}
	}
void* aaaacy;
aaaacy = concatChars((Iterable*)aaaaaj);
void * aaaada = NULL;
aaaada = aaaaak;
aaaaak = aaaacy;
incRef(aaaaak);
decRef(aaaada);
decRef(aaaaaj);



if (aaaaak!= NULL) {
(*(int *)aaaaak)--;
}
return aaaaak;
}
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d


void* our_main()
{
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaap = NULL;
void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * retval_ = NULL;
void * str_ = NULL;
void * one_ = NULL;
void * aaaacb = NULL;

void * aaaacd = NULL;
aaaacd = aaaaad;
aaaaad = aaaaac;
incRef(aaaaad);
decRef(aaaacd);
decRef(aaaaac);



<<<<<<< HEAD

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
=======
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d


String* aaaadb;
aaaadb = (String *) x3malloc(sizeof(String));
aaaadb->isIter = 0;
aaaadb->value = (char*) x3malloc(sizeof("true"));
aaaadb->nrefs = 0;
aaaadb->isStr = 1;
aaaadb->len = sizeof("true") - 1;
mystrcpy(aaaadb->value, "true");
void * aaaadc = NULL;
aaaadc = aaaaan;
aaaaan = aaaadb;
incRef(aaaaan);
decRef(aaaadc);



String* aaaadd;
aaaadd = (String *) x3malloc(sizeof(String));
aaaadd->isIter = 0;
aaaadd->value = (char*) x3malloc(sizeof("false"));
aaaadd->nrefs = 0;
aaaadd->isStr = 1;
aaaadd->len = sizeof("false") - 1;
mystrcpy(aaaadd->value, "false");
void * aaaade = NULL;
aaaade = aaaaao;
aaaaao = aaaadd;
incRef(aaaaao);
decRef(aaaade);



Boolean* aaaadf;
aaaadf = (Boolean *) x3malloc(sizeof(Boolean));
aaaadf->nrefs = 0;
aaaadf->isStr = 0;
aaaadf->isIter = 0;
aaaadf->value = 1;
void * aaaadg = NULL;
aaaadg = aaaaap;
aaaaap = aaaadf;
incRef(aaaaap);
decRef(aaaadg);



Boolean* aaaadh;
aaaadh = (Boolean *) x3malloc(sizeof(Boolean));
aaaadh->nrefs = 0;
aaaadh->isStr = 0;
aaaadh->isIter = 0;
aaaadh->value = 0;
void * aaaadi = NULL;
aaaadi = aaaaaq;
aaaaaq = aaaadh;
incRef(aaaaaq);
decRef(aaaadi);

<<<<<<< HEAD
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
=======



Boolean* aaaadj = (Boolean*) x3malloc(sizeof(Boolean));
aaaadj->nrefs = 0;
aaaadj->isIter = 0;
aaaadj->isStr = 0;
aaaadj->value = ((Boolean*) aaaaap)->value == ((Boolean*) aaaaaq)->value;
void * aaaadk = NULL;
aaaadk = aaaaar;
aaaaar = aaaadj;
incRef(aaaaar);
decRef(aaaadk);
decRef(aaaaap);
decRef(aaaaaq);



>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

void* aaaadl;
aaaadl = print_((void*) aaaaan, (void*) aaaaao, (void*) aaaaar);
void * aaaadm = NULL;
aaaadm = aaaaas;
aaaaas = aaaadl;
incRef(aaaaas);
decRef(aaaadm);
decRef(aaaaan);
decRef(aaaaao);
decRef(aaaaar);



<<<<<<< HEAD


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
		
=======
String* aaaadn;
aaaadn = (String *) x3malloc(sizeof(String));
aaaadn->isIter = 0;
aaaadn->value = (char*) x3malloc(sizeof("56"));
aaaadn->nrefs = 0;
aaaadn->isStr = 1;
aaaadn->len = sizeof("56") - 1;
mystrcpy(aaaadn->value, "56");
void * aaaado = NULL;
aaaado = aaaaat;
aaaaat = aaaadn;
incRef(aaaaat);
decRef(aaaado);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d


void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaak = NULL;

<<<<<<< HEAD
=======
String* aaaadp;
aaaadp = (String *) x3malloc(sizeof(String));
aaaadp->isIter = 0;
aaaadp->value = (char*) x3malloc(sizeof("65"));
aaaadp->nrefs = 0;
aaaadp->isStr = 1;
aaaadp->len = sizeof("65") - 1;
mystrcpy(aaaadp->value, "65");
void * aaaadq = NULL;
aaaadq = aaaaau;
aaaaau = aaaadp;
incRef(aaaaau);
decRef(aaaadq);

>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d


Integer* aaaadr;
aaaadr = (Integer*) x3malloc(sizeof(Integer));
aaaadr->nrefs = 0;
aaaadr->isStr = 0;
aaaadr->isIter = 0;
aaaadr->value = 56;
void * aaaads = NULL;
aaaads = aaaaav;
aaaaav = aaaadr;
incRef(aaaaav);
decRef(aaaads);



<<<<<<< HEAD
void * aaaack = NULL;
aaaack = aaaaal;
aaaaal = l_;
incRef(aaaaal);
decRef(aaaack);
decRef(l_);
=======
Integer* aaaadt;
aaaadt = (Integer*) x3malloc(sizeof(Integer));
aaaadt->nrefs = 0;
aaaadt->isStr = 0;
aaaadt->isIter = 0;
aaaadt->value = 65;
void * aaaadu = NULL;
aaaadu = aaaaaw;
aaaaaw = aaaadt;
incRef(aaaaaw);
decRef(aaaadu);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d




<<<<<<< HEAD
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



=======
Boolean* aaaadv = (Boolean*) x3malloc(sizeof(Boolean));
aaaadv->nrefs = 0;
aaaadv->isIter = 0;
aaaadv->isStr = 0;
aaaadv->value = ((Integer*) aaaaav)->value == ((Integer*) aaaaaw)->value;
void * aaaadw = NULL;
aaaadw = aaaaax;
aaaaax = aaaadv;
incRef(aaaaax);
decRef(aaaadw);
decRef(aaaaav);
decRef(aaaaaw);




void* aaaadx;
aaaadx = print_((void*) aaaaat, (void*) aaaaau, (void*) aaaaax);
void * aaaady = NULL;
aaaady = aaaaay;
aaaaay = aaaadx;
incRef(aaaaay);
decRef(aaaady);
decRef(aaaaat);
decRef(aaaaau);
decRef(aaaaax);



Iterable* aaaadz;
aaaadz = (Iterable*) x3malloc(sizeof(Iterable));
aaaadz->isStr = 0;
aaaadz->isIter = 1;
aaaadz->nrefs = 1;
aaaadz->value = aaaaas;
aaaadz->additional = NULL;
aaaadz->next = NULL;
aaaadz->concat = NULL;
incRef(aaaaas);
aaaadz->nrefs = 0;
void * aaaaea = NULL;
aaaaea = aaaaal;
aaaaal = aaaadz;
incRef(aaaaal);
decRef(aaaaea);
decRef(aaaaas);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

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


<<<<<<< HEAD




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
=======
Iterable* aaaaeb;
aaaaeb = (Iterable*) x3malloc(sizeof(Iterable));
aaaaeb->isStr = 0;
aaaaeb->isIter = 1;
aaaaeb->nrefs = 1;
aaaaeb->value = aaaaay;
aaaaeb->additional = NULL;
aaaaeb->next = NULL;
aaaaeb->concat = NULL;
incRef(aaaaay);
aaaaeb->nrefs = 0;
void * aaaaec = NULL;
aaaaec = aaaaam;
aaaaam = aaaaeb;
incRef(aaaaam);
decRef(aaaaec);
decRef(aaaaay);



void *aaaaee;
aaaaee = aaaaal;
if (aaaaee!=NULL) {
(*((int *)aaaaee))++;
if ((*((int *)aaaaal+1)) == 0) {
decRef(aaaaee);
aaaaee = strToIter( ((String *)aaaaal)->value, ((String *)aaaaal)->len);
incRef(aaaaee);
}
}
void *aaaaef;
aaaaef = aaaaam;
if (aaaaef!=NULL) {
(*((int *)aaaaef))++;
if ((*((int *)aaaaam+1)) == 0) {
decRef(aaaaef);
aaaaef = strToIter( ((String *)aaaaam)->value, ((String *)aaaaam)->len);
incRef(aaaaef);
}
}
Iterable* aaaaed;
aaaaed = concatenate((Iterable*)aaaaee, (Iterable*) aaaaef);
decRef(aaaaee);
decRef(aaaaef);
void * aaaaeg = NULL;
aaaaeg = retval_;
retval_ = aaaaed;
incRef(retval_);
decRef(aaaaeg);
decRef(aaaaal);
decRef(aaaaam);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d



void * ret_ = NULL;
void * e_ = NULL;
void * aaaaau = NULL;



if (!initialized_pqr) {
int aaaaeh;
String* aaaaab= NULL;
aaaaeh = next_line_len();
if(aaaaeh == 0) {
	input_ = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaaeh * sizeof(char));
	aaaaab->len = aaaaeh;
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
void * aaaaei = NULL;
aaaaei = str_;
str_ = input_;
incRef(str_);
decRef(aaaaei);
	if (str_!=NULL) {
		if ((*((int *)(str_+1))) == 0) {
void * aaaaej = NULL;
aaaaej = str_;
			str_ = strToIter( ((String *)str_)->value, ((String *)str_)->len);
incRef(str_);
decRef(aaaaej);
		}
	}
	while (str_!=NULL) {
Iterable * aaaaaz = NULL;
		aaaaaz = (Iterable *)str_;
		incRef(aaaaaz);
void * aaaaek = NULL;
aaaaek = str_;
		str_ = aaaaaz->value;
		incRef(str_);
		decRef(aaaaek);
		


void * c_ = NULL;
void * aaaaba = NULL;

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





<<<<<<< HEAD

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
=======
void * aaaael = NULL;
aaaael = c_;
c_ = str_;
incRef(c_);
decRef(aaaael);
decRef(str_);
	if (c_!=NULL) {
		if ((*((int *)(c_+1))) == 0) {
void * aaaaem = NULL;
aaaaem = c_;
			c_ = strToIter( ((String *)c_)->value, ((String *)c_)->len);
incRef(c_);
decRef(aaaaem);
		}
	}
	while (c_!=NULL) {
Iterable * aaaabb = NULL;
		aaaabb = (Iterable *)c_;
		incRef(aaaabb);
void * aaaaen = NULL;
aaaaen = c_;
		c_ = aaaabb->value;
		incRef(c_);
		decRef(aaaaen);
		


void * aaaabf = NULL;
void * aaaabg = NULL;
void * aaaabh = NULL;
void * aaaabi = NULL;
void * aaaabj = NULL;
void * aaaabk = NULL;
void * aaaabl = NULL;
void * aaaabm = NULL;
void * aaaabn = NULL;
void * aaaabo = NULL;
void * aaaabd = NULL;
void * aaaabe = NULL;
void * aaaabc = NULL;
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d






<<<<<<< HEAD
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
=======
void * aaaaeo = NULL;
aaaaeo = aaaabf;
aaaabf = c_;
incRef(aaaabf);
decRef(aaaaeo);



Iterable* aaaaep;
aaaaep = (Iterable*) x3malloc(sizeof(Iterable));
aaaaep->isStr = 0;
aaaaep->isIter = 1;
aaaaep->nrefs = 1;
aaaaep->value = aaaabf;
aaaaep->additional = NULL;
aaaaep->next = NULL;
aaaaep->concat = NULL;
incRef(aaaabf);
aaaaep->nrefs = 0;
void * aaaaeq = NULL;
aaaaeq = aaaabg;
aaaabg = aaaaep;
incRef(aaaabg);
decRef(aaaaeq);
decRef(aaaabf);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d




<<<<<<< HEAD
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
=======
	if (aaaabg!=NULL) {
		if ((*((int *)(aaaabg+1))) == 0) {
void * aaaaes = NULL;
aaaaes = aaaabg;
			aaaabg = strToIter( ((String *)aaaabg)->value, ((String *)aaaabg)->len);
incRef(aaaabg);
decRef(aaaaes);
		}
	}
void* aaaaer;
aaaaer = concatChars((Iterable*)aaaabg);
void * aaaaet = NULL;
aaaaet = aaaabh;
aaaabh = aaaaer;
incRef(aaaabh);
decRef(aaaaet);
decRef(aaaabg);



void * aaaaeu = NULL;
aaaaeu = aaaabi;
aaaabi = c_;
incRef(aaaabi);
decRef(aaaaeu);



Iterable* aaaaev;
aaaaev = (Iterable*) x3malloc(sizeof(Iterable));
aaaaev->isStr = 0;
aaaaev->isIter = 1;
aaaaev->nrefs = 1;
aaaaev->value = aaaabi;
aaaaev->additional = NULL;
aaaaev->next = NULL;
aaaaev->concat = NULL;
incRef(aaaabi);
aaaaev->nrefs = 0;
void * aaaaew = NULL;
aaaaew = aaaabj;
aaaabj = aaaaev;
incRef(aaaabj);
decRef(aaaaew);
decRef(aaaabi);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d




	if (aaaabj!=NULL) {
		if ((*((int *)(aaaabj+1))) == 0) {
void * aaaaey = NULL;
aaaaey = aaaabj;
			aaaabj = strToIter( ((String *)aaaabj)->value, ((String *)aaaabj)->len);
incRef(aaaabj);
decRef(aaaaey);
		}
	}
void* aaaaex;
aaaaex = concatChars((Iterable*)aaaabj);
void * aaaaez = NULL;
aaaaez = aaaabk;
aaaabk = aaaaex;
incRef(aaaabk);
decRef(aaaaez);
decRef(aaaabj);


void * aaaadh = NULL;
aaaadh = aaaaau;
aaaaau = ret_;
incRef(aaaaau);
decRef(aaaadh);
decRef(ret_);

void * aaaafa = NULL;
aaaafa = aaaabl;
aaaabl = c_;
incRef(aaaabl);
decRef(aaaafa);


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

void * aaaafb = NULL;
aaaafb = aaaabm;
aaaabm = c_;
incRef(aaaabm);
decRef(aaaafb);
decRef(c_);




<<<<<<< HEAD

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
=======
Boolean* aaaafc = (Boolean*) x3malloc(sizeof(Boolean));
aaaafc->nrefs = 0;
aaaafc->isIter = 0;
aaaafc->isStr = 0;
aaaafc->value = ((Character*) aaaabl)->value == ((Character*) aaaabm)->value;
void * aaaafd = NULL;
aaaafd = aaaabn;
aaaabn = aaaafc;
incRef(aaaabn);
decRef(aaaafd);
decRef(aaaabl);
decRef(aaaabm);




void* aaaafe;
aaaafe = print_((void*) aaaabh, (void*) aaaabk, (void*) aaaabn);
void * aaaaff = NULL;
aaaaff = aaaabo;
aaaabo = aaaafe;
incRef(aaaabo);
decRef(aaaaff);
decRef(aaaabh);
decRef(aaaabk);
decRef(aaaabn);



void * aaaafg = NULL;
aaaafg = aaaabd;
aaaabd = retval_;
incRef(aaaabd);
decRef(aaaafg);
decRef(retval_);



Iterable* aaaafh;
aaaafh = (Iterable*) x3malloc(sizeof(Iterable));
aaaafh->isStr = 0;
aaaafh->isIter = 1;
aaaafh->nrefs = 1;
aaaafh->value = aaaabo;
aaaafh->additional = NULL;
aaaafh->next = NULL;
aaaafh->concat = NULL;
incRef(aaaabo);
aaaafh->nrefs = 0;
void * aaaafi = NULL;
aaaafi = aaaabe;
aaaabe = aaaafh;
incRef(aaaabe);
decRef(aaaafi);
decRef(aaaabo);



void *aaaafk;
aaaafk = aaaabd;
if (aaaafk!=NULL) {
(*((int *)aaaafk))++;
if ((*((int *)aaaabd+1)) == 0) {
decRef(aaaafk);
aaaafk = strToIter( ((String *)aaaabd)->value, ((String *)aaaabd)->len);
incRef(aaaafk);
}
}
void *aaaafl;
aaaafl = aaaabe;
if (aaaafl!=NULL) {
(*((int *)aaaafl))++;
if ((*((int *)aaaabe+1)) == 0) {
decRef(aaaafl);
aaaafl = strToIter( ((String *)aaaabe)->value, ((String *)aaaabe)->len);
incRef(aaaafl);
}
}
Iterable* aaaafj;
aaaafj = concatenate((Iterable*)aaaafk, (Iterable*) aaaafl);
decRef(aaaafk);
decRef(aaaafl);
void * aaaafm = NULL;
aaaafm = retval_;
retval_ = aaaafj;
incRef(retval_);
decRef(aaaafm);
decRef(aaaabd);
decRef(aaaabe);



void * aaaafn = NULL;
aaaafn = aaaabc;
aaaabc = aaaabb;
incRef(aaaabc);
decRef(aaaafn);
decRef(aaaabb);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d




<<<<<<< HEAD
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
=======
void* aaaafo;
aaaafo = iterGetNext((void*) aaaabc);
void * aaaafp = NULL;
aaaafp = c_;
c_ = aaaafo;
incRef(c_);
decRef(aaaafp);
decRef(aaaabc);
	}
decRef(c_);



void * aaaafq = NULL;
aaaafq = aaaaba;
aaaaba = aaaaaz;
incRef(aaaaba);
decRef(aaaafq);
decRef(aaaaaz);



>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

void* aaaafr;
aaaafr = iterGetNext((void*) aaaaba);
void * aaaafs = NULL;
aaaafs = str_;
str_ = aaaafr;
incRef(str_);
decRef(aaaafs);
decRef(aaaaba);
	}
decRef(str_);



void* aaaadz;
aaaadz = last_((void*) aaaabf, (void*) aaaabg);
void * aaaaea = NULL;
aaaaea = aaaaba;
aaaaba = aaaadz;
incRef(aaaaba);
decRef(aaaaea);
decRef(aaaabf);
decRef(aaaabg);



<<<<<<< HEAD
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
=======
if (!initialized_pqr) {
int aaaaft;
String* aaaaab= NULL;
aaaaft = next_line_len();
if(aaaaft == 0) {
	input_ = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaaft * sizeof(char));
	aaaaab->len = aaaaft;
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
void * aaaafu = NULL;
aaaafu = one_;
one_ = input_;
incRef(one_);
decRef(aaaafu);
	if (one_!=NULL) {
		if ((*((int *)(one_+1))) == 0) {
void * aaaafv = NULL;
aaaafv = one_;
			one_ = strToIter( ((String *)one_)->value, ((String *)one_)->len);
incRef(one_);
decRef(aaaafv);
		}
	}
	while (one_!=NULL) {
Iterable * aaaabp = NULL;
		aaaabp = (Iterable *)one_;
		incRef(aaaabp);
void * aaaafw = NULL;
aaaafw = one_;
		one_ = aaaabp->value;
		incRef(one_);
		decRef(aaaafw);
		

>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

void * two_ = NULL;
void * aaaabq = NULL;


<<<<<<< HEAD
=======




if (!initialized_pqr) {
int aaaafx;
String* aaaaab= NULL;
aaaafx = next_line_len();
if(aaaafx == 0) {
	input_ = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaafx * sizeof(char));
	aaaaab->len = aaaafx;
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
void * aaaafy = NULL;
aaaafy = two_;
two_ = input_;
incRef(two_);
decRef(aaaafy);
	if (two_!=NULL) {
		if ((*((int *)(two_+1))) == 0) {
void * aaaafz = NULL;
aaaafz = two_;
			two_ = strToIter( ((String *)two_)->value, ((String *)two_)->len);
incRef(two_);
decRef(aaaafz);
		}
	}
	while (two_!=NULL) {
Iterable * aaaabr = NULL;
		aaaabr = (Iterable *)two_;
		incRef(aaaabr);
void * aaaaga = NULL;
aaaaga = two_;
		two_ = aaaabr->value;
		incRef(two_);
		decRef(aaaaga);
		
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d

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

<<<<<<< HEAD
=======
void * aaaabv = NULL;
void * aaaabw = NULL;
void * aaaabx = NULL;
void * aaaaby = NULL;
void * aaaabz = NULL;
void * aaaaca = NULL;
void * aaaabt = NULL;
void * aaaabu = NULL;
void * aaaabs = NULL;
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d



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



<<<<<<< HEAD
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
=======
void * aaaagb = NULL;
aaaagb = aaaabv;
aaaabv = one_;
incRef(aaaabv);
decRef(aaaagb);
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d



void * aaaagc = NULL;
aaaagc = aaaabw;
aaaabw = two_;
incRef(aaaabw);
decRef(aaaagc);

<<<<<<< HEAD
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
=======
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d


void * aaaagd = NULL;
aaaagd = aaaabx;
aaaabx = one_;
incRef(aaaabx);
decRef(aaaagd);

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


<<<<<<< HEAD

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
=======
void * aaaage = NULL;
aaaage = aaaaby;
aaaaby = two_;
incRef(aaaaby);
decRef(aaaage);
decRef(two_);




Boolean* aaaagf = (Boolean*) x3malloc(sizeof(Boolean));
aaaagf->nrefs = 0;
aaaagf->isIter = 0;
aaaagf->isStr = 0;
aaaagf->value = (mystrcmp((((String*) aaaabx)->value), (((String*) aaaaby)->value)) ? 0 : 1);
void * aaaagg = NULL;
aaaagg = aaaabz;
aaaabz = aaaagf;
incRef(aaaabz);
decRef(aaaagg);
decRef(aaaabx);
decRef(aaaaby);




void* aaaagh;
aaaagh = print_((void*) aaaabv, (void*) aaaabw, (void*) aaaabz);
void * aaaagi = NULL;
aaaagi = aaaaca;
aaaaca = aaaagh;
incRef(aaaaca);
decRef(aaaagi);
decRef(aaaabv);
decRef(aaaabw);
decRef(aaaabz);



void * aaaagj = NULL;
aaaagj = aaaabt;
aaaabt = retval_;
incRef(aaaabt);
decRef(aaaagj);
decRef(retval_);



Iterable* aaaagk;
aaaagk = (Iterable*) x3malloc(sizeof(Iterable));
aaaagk->isStr = 0;
aaaagk->isIter = 1;
aaaagk->nrefs = 1;
aaaagk->value = aaaaca;
aaaagk->additional = NULL;
aaaagk->next = NULL;
aaaagk->concat = NULL;
incRef(aaaaca);
aaaagk->nrefs = 0;
void * aaaagl = NULL;
aaaagl = aaaabu;
aaaabu = aaaagk;
incRef(aaaabu);
decRef(aaaagl);
decRef(aaaaca);



void *aaaagn;
aaaagn = aaaabt;
if (aaaagn!=NULL) {
(*((int *)aaaagn))++;
if ((*((int *)aaaabt+1)) == 0) {
decRef(aaaagn);
aaaagn = strToIter( ((String *)aaaabt)->value, ((String *)aaaabt)->len);
incRef(aaaagn);
}
}
void *aaaago;
aaaago = aaaabu;
if (aaaago!=NULL) {
(*((int *)aaaago))++;
if ((*((int *)aaaabu+1)) == 0) {
decRef(aaaago);
aaaago = strToIter( ((String *)aaaabu)->value, ((String *)aaaabu)->len);
incRef(aaaago);
}
}
Iterable* aaaagm;
aaaagm = concatenate((Iterable*)aaaagn, (Iterable*) aaaago);
decRef(aaaagn);
decRef(aaaago);
void * aaaagp = NULL;
aaaagp = retval_;
retval_ = aaaagm;
incRef(retval_);
decRef(aaaagp);
decRef(aaaabt);
decRef(aaaabu);



void * aaaagq = NULL;
aaaagq = aaaabs;
aaaabs = aaaabr;
incRef(aaaabs);
decRef(aaaagq);
decRef(aaaabr);




void* aaaagr;
aaaagr = iterGetNext((void*) aaaabs);
void * aaaags = NULL;
aaaags = two_;
two_ = aaaagr;
incRef(two_);
decRef(aaaags);
decRef(aaaabs);
	}
decRef(one_);
decRef(two_);



void * aaaagt = NULL;
aaaagt = aaaabq;
aaaabq = aaaabp;
incRef(aaaabq);
decRef(aaaagt);
decRef(aaaabp);




void* aaaagu;
aaaagu = iterGetNext((void*) aaaabq);
void * aaaagv = NULL;
aaaagv = one_;
one_ = aaaagu;
incRef(one_);
decRef(aaaagv);
decRef(aaaabq);
	}
decRef(input_);
decRef(one_);






void * aaaagw = NULL;
aaaagw = aaaacb;
aaaacb = retval_;
incRef(aaaacb);
decRef(aaaagw);
decRef(retval_);



if (aaaacb!= NULL) {
(*(int *)aaaacb)--;
}
return aaaacb;
>>>>>>> eb3286a550a84321c9ca6e045e39fa46e757c29d
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
