#ifdef __cplusplus
extern "C" int cstmSetModuleId(const unsigned char* module_id);
extern "C" int cstmSetLogPath(const char* log_path);
extern "C" void cstm_Init_907bcb7e98c5127e34e8788c93daaf1a(void);
extern "C" void cstm_Init_c6aa0bc0ca731ef457e9527378806941(void);
#else
extern  int cstmSetModuleId(const unsigned char* module_id);
extern  int cstmSetLogPath(const char* log_path);
extern  void cstm_Init_907bcb7e98c5127e34e8788c93daaf1a(void);
extern  void cstm_Init_c6aa0bc0ca731ef457e9527378806941(void);
#endif
 static unsigned char moduleId[]={0x90,0x27,0x76,0xb1,0xd0,0xba,0x42,0xfd,0x94,0x1a,0x28,0xe6,0x1b,0x39,0xf5,0x38};
extern "C" int cstm_Init_902776b1d0ba42fd941a28e61b39f538(){
	cstmSetLogPath("D:\\Cover\\QualityScroll-Cover-EE\\4sp5\\cover-agent\\coverage");
	cstm_Init_907bcb7e98c5127e34e8788c93daaf1a();
	cstm_Init_c6aa0bc0ca731ef457e9527378806941();
	cstmSetModuleId(moduleId);
	return 0;
}
 static int codescroll_init_dummy = cstm_Init_902776b1d0ba42fd941a28e61b39f538();
