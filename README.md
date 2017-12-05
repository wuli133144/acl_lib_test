

## 测试acl_lib的读取配置的函数


*加载配置文件 
>acl_xinetd_cfg_load(const char *filename);

*读取配置文件的大小
>acl_xinetd_cfg_size(ACL_INETD_CFG_PARSER)

* 读取配置文件的内容1

>acl_ninetd_cfg_index(cfg,index)

* 读取配置文件的内容2
>acl_ninetd_cfg_get(cfg,"key");

* 释放配置文件结构

acl_ninetd_cfg_free(cfg);

