#ifndef TEST_MYSQL_INSTANCE_H
#define TEST_MYSQL_INSTANCE_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Instance.h"

namespace database {
    class Instance : public Database<Instance, table::Instance> {
    public:
        Instance(const std::shared_ptr<mysql::connection_config>& config);
    };

}

#endif //TEST_MYSQL_INSTANCE_H
