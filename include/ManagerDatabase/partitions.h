#ifndef TEST_MYSQL_PARTITIONS_H
#define TEST_MYSQL_PARTITIONS_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Partitions.h"

namespace database {
    class Partitions : public Database<Partitions, table::Partitions> {
    public:
        Partitions(const std::shared_ptr<mysql::connection_config>& config);
    };
}


#endif //TEST_MYSQL_PARTITIONS_H
