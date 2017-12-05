#include "lib_acl.h"

class config_helper{
	 
public : 
      config_helper(const char *filename):m_filename(filename){
		  load();
	  }
	  ~config_helper(){
		   acl_xinetd_cfg_free(m_cfg);
	  }
	  void load(){
		  m_cfg=acl_xinetd_cfg_load(m_filename);
		  if(m_cfg==NULL){
                          acl_msg_error("load config file error");
			  return;
		  }
	  }

          const char * get(const char *key){
		   return acl_xinetd_cfg_get(m_cfg,key);
	  }
	  

private:
   const char *m_filename;	 
   ACL_XINETD_CFG_PARSER * m_cfg;

};


