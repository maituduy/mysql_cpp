#include "ManagerDatabase/filesystem.h"

namespace database {
    Filesystem::Filesystem(const std::shared_ptr<mysql::connection_config>& config) : Database(config) {

    }
}
