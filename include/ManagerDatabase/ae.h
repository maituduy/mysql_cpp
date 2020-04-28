#ifndef TEST_MYSQL_AE_H
#define TEST_MYSQL_AE_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Ae.h"

namespace database {
    class Ae : public Database<Ae, table::Ae> {
    public:
        Ae(const std::shared_ptr<mysql::connection_config>& config);
    };

}

#endif //TEST_MYSQL_AE_H
