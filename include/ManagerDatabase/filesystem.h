#ifndef TEST_MYSQL_FILESYSTEM_H
#define TEST_MYSQL_FILESYSTEM_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Filesystem.h"

namespace database {
    class Filesystem : public Database<Filesystem, table::Filesystem> {
    public:
        Filesystem(const std::shared_ptr<mysql::connection_config>& config);
    };
}


#endif //TEST_MYSQL_FILESYSTEM_H
