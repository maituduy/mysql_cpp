#include "ManagerDatabase/files.h"

namespace database {
    Files::Files(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
