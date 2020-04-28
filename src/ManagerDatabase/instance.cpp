#include "ManagerDatabase/instance.h"

namespace database {
    Instance::Instance(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
