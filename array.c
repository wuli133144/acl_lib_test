#include "lib_acl.h"


int main(void){
      	
   	ACL_ARRAY *a=acl_array_create(20);
       	int data=12;
       
        
	acl_array_append(a,&data);
	acl_array_append(a,&data);
	acl_array_append(a,&data);
	acl_array_append(a,&data);
	acl_array_append(a,&data);
	
	int count=acl_array_size(a);
        int i=0;
         printf("%d ",count); 
         printf(">>>[info] %s %d",__FILE__,__LINE__);
	for(;i<count;i++){
         	printf(">>>%d\n",*((int *)acl_array_index(a,i)));		
	}
	
         printf(">>>[info] %s %d",__FILE__,__LINE__);
         printf(">>>[info] %s %d",__FILE__,__LINE__);
	
	return  0;
}
