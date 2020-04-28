#ifndef TEST_MYSQL_SERIES_H
#define TEST_MYSQL_SERIES_H

#include "ManagerDatabase/database.h"
#include "ManagerDatabase/table_gen/Series.h"

namespace database {
    class Series : public Database<Series, table::Series> {
    public:
        Series(const std::shared_ptr<mysql::connection_config>& config);
    };

}

#endif //TEST_MYSQL_SERIES_H
