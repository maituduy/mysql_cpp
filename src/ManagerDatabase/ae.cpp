#include "ManagerDatabase/ae.h"

namespace database {
    Ae::Ae(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
