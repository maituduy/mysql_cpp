#include "ManagerDatabase/partitions.h"

namespace database {
    Partitions::Partitions(const std::shared_ptr<mysql::connection_config>& config): Database(config) {

    }

}
