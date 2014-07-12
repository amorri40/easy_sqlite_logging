//
//  easy_sqlite_logging.h
//  GenesisPlus
//
//  Created by Alasdair Morrison on 11/07/2014.
//
//

#ifndef GenesisPlus_easy_sqlite_logging_h
#define GenesisPlus_easy_sqlite_logging_h
#ifdef __cplusplus
#include <string>
class easy_sqlite_table {
    std::string table_name="";
    std::string table_name_suffix="";
public:
    easy_sqlite_table(std::string table_name, std::string table_name_suffix) : table_name(table_name), table_name_suffix(table_name_suffix) {
    }
    void insert_3_strings(std::string str1, std::string str2, std::string str3);
    void insert_data(std::string data);
};

easy_sqlite_table* create_table(std::string table_name, std::string table_name_suffix, std::string schema);
#endif

#ifdef __cplusplus
extern "C" {
#endif
    void initialise_easy_sqlite_library();
    const char* double_to_string(double double_value);
#ifdef __cplusplus
}
#endif



#endif
