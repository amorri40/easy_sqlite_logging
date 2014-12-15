//
//  # Easy Sqlite Logging.h
//    * This is the main include that contains most of the functions you will use the most often
//
//  Created by Alasdair Morrison on 11/07/2014.
//
//

#ifndef easy_sqlite_logging_h
#define easy_sqlite_logging_h

// # C++ Block to define the main classes used to represent a table
#ifdef __cplusplus
	#include <string>

	class easy_sqlite_table {
	    std::string table_name="";
	    std::string table_name_suffix="";
		public:
		    easy_sqlite_table(std::string table_name, std::string table_name_suffix) : table_name(table_name), table_name_suffix(table_name_suffix) {}
		    void insert_3_strings(std::string str1, std::string str2, std::string str3);
		    void insert_data(std::string data);
	};

	// # Create Table
	//   * Used to create a table in the database with the specified name and schema
	easy_sqlite_table* create_table(std::string table_name, std::string table_name_suffix, std::string schema);
#endif
// End of C++ Block

// # Export the functions for C
#ifdef __cplusplus
	// * only write extern C if we are being parsed by a C++ compiler
	extern "C" { 
#endif

    void initialise_easy_sqlite_library();
    const char* double_to_string(double double_value);

#ifdef __cplusplus
	// * only write extern C if we are being parsed by a C++ compiler
	}
#endif

#endif // defined(easy_sqlite_logging_h)