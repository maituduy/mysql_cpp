#ifndef TEST_MYSQL_STUDY_H
#define TEST_MYSQL_STUDY_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Study.h"

namespace database {
    class Study : public Database<Study, table::Study> {
    public:
        Study(const std::shared_ptr<mysql::connection_config>& config);
    };
}

#endif //TEST_MYSQL_STUDY_H
