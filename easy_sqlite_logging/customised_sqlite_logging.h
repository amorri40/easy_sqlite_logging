//
//  customised_sqlite_logging.h
//  GenesisPlus
//
//  Created by Alasdair Morrison on 11/07/2014.
//
//

#ifndef __GenesisPlus__customised_sqlite_logging__
#define __GenesisPlus__customised_sqlite_logging__

void create_easy_sqlite_tables();

#ifdef __cplusplus
extern "C" {
#endif
void log_opcode(char* opcode_name, char* value1, char* value2);
void log_double_string_string(double opcode_name, char* value1, char* value2);
void log_jump(int new_pc,int old_pc);
#ifdef __cplusplus
}
#endif

#endif /* defined(__GenesisPlus__customised_sqlite_logging__) */
