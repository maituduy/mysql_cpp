#include "ManagerDatabase/series.h"

namespace database {
    Series::Series(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
