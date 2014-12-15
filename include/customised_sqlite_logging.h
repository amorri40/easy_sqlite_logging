//
//  # Customised sqlite logging.h
//    * These are functions which allow logging to a sqlite database with the same ease as printf
//    * This is the customised file foccussed on logging for emulators
//
//  Created by Alasdair Morrison on 11/07/2014.
//
//

#ifndef __customised_sqlite_logging__
#define __customised_sqlite_logging__

// # Create the main Tables used for logging the data
void create_easy_sqlite_tables();

// # Plain C functions for logging to the database
//   * Allows the functions to be used in both .cpp and .c files
#ifdef __cplusplus
extern "C" {
#endif

// ## Logging functions for basic emulator functions
void log_opcode(char* opcode_name, char* value1, char* value2);
void log_double_string_string(double opcode_name, char* value1, char* value2);
void log_jump(int new_pc,int old_pc);

#ifdef __cplusplus
}
#endif

#endif /* defined(__customised_sqlite_logging__) */
