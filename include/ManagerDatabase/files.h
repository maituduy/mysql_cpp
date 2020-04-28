#ifndef TEST_MYSQL_FILES_H
#define TEST_MYSQL_FILES_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Files.h"

namespace database {
    class Files : public Database<Files, table::Files> {
    public:
        Files(const std::shared_ptr<mysql::connection_config>& config);
    };
}


#endif //TEST_MYSQL_FILES_H
