
#include "lib_acl.h"




int main(void ){

 
 # if 0
 ACL_VSTRING *pstr=acl_vstring_alloc(100);
 acl_vstring_strcpy(pstr,"hello nihao");
 //acl_vstring_strncpy(pstr,"hello)
 #endif
 
 ACL_XINETD_CFG_PARSER *cfg;
 cfg=acl_xinetd_cfg_load("my.cf");
 
 int size=0;
 
 if(cfg==NULL){
	printf("<error>");
	exit(0);
 }
 
 size=acl_xinetd_cfg_size(cfg);
 printf("size =%d",size);

char *name;
char *value;
 for(int i=0;i<size;i++) {
      acl_xinetd_cfg_index(cfg,i,&name,&value);
      printf("name %s value %s",name,value);
}
 
 
 


return 0;

}
