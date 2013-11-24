#include "cubex_external_functions.h"
#define NULL ((void*)0)

typedef struct top {
	int value;
} Thing;

typedef struct integer {
	int nrefs;
	int isIter;	
	int isStr;
	int value;
} Integer;

typedef struct string {
	int nrefs;
	int isIter;
	int isStr;
	char* value;
	int len;
} String;

typedef struct boolean {
	int nrefs;
	int isIter;
	int isStr;
	int value;
} Boolean;

typedef struct character {
	int nrefs;
	int isIter;
	int isStr;
	char value;
} Character;

typedef struct iter{
	int nrefs;
	int isIter;
	int isStr;
	void* value;
	void* additional;
	struct iter* (*next)(void*);
	struct iter* concat;
}Iterable;

void freeStr(void* str)
{
	if (((String*)str)->value != NULL) {
		x3free(((String*)str)->value);
	}
			
	if (str != NULL) {
		x3free(str);
	}
}

Iterable* Integer_through(void* head){
	Iterable* last;
	last = (Iterable*) head;
	if ((((Integer*) last->value)->value) == (((Integer*) last->additional)->value) || (((Integer*) last->value)->value) > (((Integer*) last->additional)->value)){
		return NULL;
	}
	else {
		Iterable* this=x3malloc(sizeof(Iterable));
		this->isIter = 1;
		this->nrefs=0;
		(((Integer*)(last->value))->value)++; 
		this->value = last->value; 
		(((Integer*)(last->value))->nrefs)++;
		this->additional = last->additional;
		this->next = last->next;	
		this->concat = last->concat;
		return this;
	}
}

void freeIter(void* iter) {
	if (iter == NULL)
		return;
	
	if (((Iterable*)iter)->next!= NULL){	
		if (((Iterable*)iter)->value != NULL) {
			(*(int *)(((Iterable*)iter)->value))--;
			if ((*(int *)(((Iterable*)iter)->value)) == 0) {
				if ((*((int*)((Iterable*)iter)->value+2)) == 1)
					freeStr(((Iterable*)iter)->value);
				else if ((*((int*)((Iterable*)iter)->value+1)) == 1)
					freeIter(((Iterable*)iter)->value);
				else
					x3free(((Iterable*)iter)->value);
			}
			if (((Iterable*)iter)->next == &Integer_through) {
				(*(int *)(((Iterable*)iter)->additional))--;
				if ((*(int *)(((Iterable*)iter)->additional)) == 0) {
					if ((*((int*)((Iterable*)iter)->additional+2)) == 1)
						freeStr(((Iterable*)iter)->additional);
					else if ((*((int*)((Iterable*)iter)->additional+1)) == 1)
						freeIter(((Iterable*)iter)->additional);
					else
						x3free(((Iterable*)iter)->additional);
				}
			}
				
		}
			
		if (((Iterable*)iter)->concat != NULL) {
				(*(int*)(((Iterable*)iter)->concat))--;
				if ((*(int*)(((Iterable*)iter)->concat)) == 0)
					freeIter(((Iterable*)iter)->concat);
		}
			
		if ((Iterable*)iter != NULL) {
				if ((*(int *)iter) == 0)
					x3free(iter);
		}
	}
	else {
		void *iter2 = iter;
		if (((Iterable*)iter2)->value != NULL) {
			(*(int *)(((Iterable*)iter2)->value))--;
			if ((*(int *)(((Iterable*)iter2)->value)) == 0) {
				if ((*((int*)((Iterable*)iter)->value+2)) == 1)
					freeStr(((Iterable*)iter2)->value);
				else if ((*((int*)((Iterable*)iter)->value+1)) == 1)
					freeIter(((Iterable*)iter2)->value);
				else
					x3free(((Iterable*)iter2)->value);
			}
		}
		
		if (((Iterable*)iter2)->additional != NULL) {
			(*(int*)(((Iterable*)iter2)->additional))--;
			if ((*(int*)(((Iterable*)iter2)->additional)) == 0) 
				freeIter(((Iterable*)iter2)->additional);
		}
		
		if (((Iterable*)iter2)->concat != NULL) {
			(*(int*)(((Iterable*)iter2)->concat))--;
			if ((*(int*)(((Iterable*)iter2)->concat)) == 0)
				freeIter(((Iterable*)iter2)->concat);
		}
		
		if ((Iterable*)iter2 != NULL) {
			if ((*(int *)iter2) == 0)
				x3free(iter2);
		}
	}
}


Iterable* iterGetNext(Iterable* last){
	if (last == NULL)
		return NULL;
		
	Iterable* this = NULL;
	if (last->next!= NULL){	
		this = (last->next)(last);
	}
	else {
		this = (Iterable*) last->additional;
	}
	
	if (this==NULL && last->concat==NULL){
	  return NULL;
	}
	else if (this==NULL){
		this=last->concat;
	}
	
	return (this);
}

Iterable* concatenate(Iterable* fst, Iterable* snd){
	Iterable* head = NULL;
	Iterable *temp, *temp1, *temp2;
	if (fst != NULL) {
		
		head = (Iterable*) x3malloc(sizeof(Iterable)); 
		head->nrefs = 0;
		head->isIter = 1;
		head->value = fst->value;
		if (head->value != NULL)
			(*(int *)(head->value))++;
		head->additional = NULL;
		head->next = fst->next;
		head->concat = fst->concat;
		if (head->concat!= NULL)
			(*(int *)(head->concat))++;
		
			
		temp = head;
		if(temp->next == NULL) {
			while(temp!=NULL) {
				temp1 = temp;
				temp = temp->additional;
				temp2 = NULL;
				if (temp != NULL) {
					temp2 = (Iterable*) x3malloc(sizeof(Iterable)); 
					temp2->nrefs = 1;
					temp2->isIter = 1;
					temp2->value = temp->value;
					if (temp2->value!= NULL)
						(*(int *)(temp2->value))++;
					temp2->additional = NULL;
					temp2->next = temp->next;
					temp2->concat = temp->concat;	
					if (temp2->concat!= NULL)
						(*(int *)(temp2->concat))++;
					
					temp1->additional = temp2;
				}
			}
		}
		else {
			head->additional = fst->additional;
			if (head->additional != NULL)
				(*(int *)(head->additional))++;
		}
	
	}
	
	if (snd == NULL)
		return head;
		
	Iterable* second = (Iterable*) x3malloc(sizeof(Iterable)); 
	second->nrefs = 1;
	second->isIter = 1;
	second->value = snd->value;
	if (second->value != NULL)
		(*(int *)(second->value))++;
	second->additional = NULL;
	second->next = snd->next;
	second->concat = snd->concat;
	if (second->concat != NULL)
		(*(int *)(second->concat))++;
		
	temp = second;
	if(temp->next == NULL) {
		while(temp!=NULL) {
			temp1 = temp;
			temp = temp->additional;
			temp2 = NULL;
			if (temp != NULL) {
				temp2 = (Iterable*) x3malloc(sizeof(Iterable)); 
				temp2->nrefs = 1;
				temp2->isIter = 1;
				temp2->value = temp->value;
				if (temp2->value!= NULL)
					(*(int *)(temp2->value))++;
				temp2->additional = NULL;
				temp2->next = temp->next;
				temp2->concat = temp->concat;	
				if (temp2->concat!= NULL)
					(*(int *)(temp2->concat))++;
				
				temp1->additional = temp2;
			}
		}
	}
	else {
		second->additional = snd->additional;
		if (second->additional != NULL)
			(*(int *)(second->additional))++;
	}
	
	if (fst == NULL)
		head = second;	
	else {
		temp = head;
		
		while (temp->additional || temp->concat) {
			while(temp->additional) {
				temp = temp->additional;
			}
			
			while(temp->concat) {
				temp=temp->concat;
			}
		}
		temp->concat = second;
	
		
	}
	return head;
}

Iterable* Integer_onwards(void* head){
	Iterable* this;
	Iterable* last;
	last = (Iterable*) head;
	this = x3malloc(sizeof(Iterable));
	this->isIter = 1;
	this->nrefs=0; 
	(((Integer*)(last->value))->value)++;
	this->value = last->value;
	(((Integer*)(last->value))->nrefs)++;	
	this->additional = last->additional;
	this->next = last->next;	
	this->concat = last->concat;

	return this;
}



Iterable* input_onwards(void* head){
	int len;
	len = next_line_len();
	Iterable* last;
	Iterable* this;
	this = NULL;
	last = (Iterable*) head;
	if (len != 0) {
		this = x3malloc(sizeof(Iterable));
		this->isIter=1;
		this->nrefs=1; 
		this->value = x3malloc(sizeof(String));
		((String*) this->value)->isIter = 0;
		((String*) this->value)->isStr = 1;
		((String*) this->value)->value = (char*) x3malloc(len* sizeof(char));
		read_line(((String*) this->value)->value);
		((String*) this->value)->nrefs = 1;
		((String*) this->value)->len = len;
		this->additional=NULL;
		this->next=last->next;	
		this->concat=last->concat;
		last->additional = this;		
		last->next = NULL;
	}

	return this;
}

int mystrcmp(const char *s1, const char *s2) 
{ 
    if(*s1=='\0' && *s2 != '\0')
      return(1);
    if(*s1!='\0' && *s2 == '\0')
      return (1);
  
    while (*s1==*s2) 
    { 
        if(*s1=='\0' && *s2 == '\0') 
           return(0); 
	if(*s1=='\0' && *s2 != '\0')
	  return(1);
	if(*s1!='\0' && *s2 == '\0')
	  return (1);
  

        s1++; 
        s2++; 
    } 
    return(*s1-*s2); 
}

void mystrcpy(char *dst, const char *src) {
  if(src == NULL)
  	return;
   while (*src != '\0') {
      *dst++ = *src++; 
   }
   *dst = '\0';
}

String* concatChars(Iterable *charIter){
	char* combined = NULL;
	int count=0;
	while (charIter!=NULL){
		const char* prev=(const char* )combined;
		combined = x3malloc((count+1)*sizeof(char)); 
		mystrcpy(combined,prev);
		x3free((char*)prev);
		char newChar=((Character*)charIter->value)->value;
		combined[count]=newChar;
		count++;
		Iterable* temp=iterGetNext(charIter);
		charIter=temp; 
	}
	const char* prev=(const char*)combined;
	combined = x3malloc((count+1)*sizeof(char)); 
	mystrcpy(combined,prev);
	x3free((char*)prev);
	combined[count]='\0';
	String* new = (String*) x3malloc(sizeof(String));
	new->isIter = 0;
	new->value = (char*) x3malloc(sizeof(char)*count);
	mystrcpy(new->value, combined);
	x3free(combined);
	new->len = count;
	return new;
}

Iterable* strToIter (char* input, int length){
  if(length==0)
  	return NULL;
  Iterable *curr;
  curr=(Iterable*) x3malloc(sizeof(Iterable));
  curr->isIter = 1;
  Iterable *result;
  result=curr;
  int i=0;
  for (i=0;i<length;i++){
    Iterable* temp;
    temp = (Iterable*) x3malloc(sizeof(Iterable));
    temp->isIter = 1;
    Character* v;
    v = (Character*) x3malloc(sizeof(Character));
    v->value = input[i];
    temp->value=v;
    v->nrefs = 1;
    temp->nrefs=1;
    temp->next=NULL;
    temp->concat=NULL;
    curr->additional=temp;
    curr=curr->additional;
  }
  curr->additional = NULL;
  Iterable * returnElement = result->additional;
  if (returnElement != NULL) returnElement->nrefs = 0;
  x3free(result);
  return returnElement;
}

void* checkIter (void* test) {
	Iterable* temp = (Iterable*) test;
	if (temp == NULL)
		return NULL;
	if ( ((Integer*)temp->value)->value > ((Integer*)temp->additional)->value ) {
		temp = ((Iterable*)test)->concat;
		freeIter(test);
		return checkIter(temp); 
	}
	else 
		return test;
}
